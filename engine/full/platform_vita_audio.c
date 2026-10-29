#include "platform_vita_audio.h"
#include "platform_audio_blocks.h"
#include <psp2/audioout.h>
#include <psp2/kernel/threadmgr.h>
#include <stdatomic.h>
#include <string.h>
/* Single game-thread producer, single device-thread consumer. The original
 * mixer remains exclusively on the game thread. Four blocks = 42.7 ms. */
#define QUEUE_BLOCKS 4
static int port=-1,worker=-1,free_slots=-1,ready_slots=-1,start_gate=-1;
static atomic_int last_error;
static PmdAudioBlocks blocks;
/* Each device buffer starts on a cache line; flags must not alter its stride. */
_Alignas(64) static int16_t queue_samples[QUEUE_BLOCKS][PMD_AUDIO_BLOCK_FRAMES*2];
/* The device may retain the submitted pointer after Output returns. Only the
 * consumer writes these alternating buffers. Static lifetime also keeps the
 * final submission alive after worker exit, until close's NULL drain. */
_Alignas(64) static int16_t device_samples[2][PMD_AUDIO_BLOCK_FRAMES*2];
static int queue_end[QUEUE_BLOCKS];
static unsigned write_pos,read_pos,submitted;
static int started;
static unsigned recovery_attempts,healthy_pushes,recoveries;
static void error(int code){int zero=0;atomic_compare_exchange_strong(&last_error,&zero,code);}
static int consume(unsigned args,void *argp){
 (void)args;(void)argp;unsigned device_slot=0;
 sceKernelWaitSema(start_gate,1,NULL);
 for(;;){
  sceKernelWaitSema(ready_slots,1,NULL);
  unsigned slot=read_pos++%QUEUE_BLOCKS;int end=queue_end[slot];
  if(!end&&!atomic_load(&last_error)){
   memcpy(device_samples[device_slot],queue_samples[slot],sizeof(device_samples[device_slot]));
   int result=sceAudioOutOutput(port,device_samples[device_slot]);
   if(result<0)error(result);
   device_slot^=1;
  }
  /* The producer can reuse the FIFO slot; the accepted device buffer remains
   * private and unchanged until the following Output call returns. */
  sceKernelSignalSema(free_slots,1);
  if(end)break;
 }
 return 0;
}
static void start_output(void){if(!started){started=1;sceKernelSignalSema(start_gate,1);}}
static int enqueue(const int16_t *data){
 int result=sceKernelWaitSema(free_slots,1,NULL);
 if(result<0){error(result);return 0;}
 unsigned slot=write_pos++%QUEUE_BLOCKS;
 queue_end[slot]=data==NULL;
 if(data)memcpy(queue_samples[slot],data,sizeof(queue_samples[slot]));
 sceKernelSignalSema(ready_slots,1);
 /* Prefill 32 ms before playback; close also releases short streams. */
 if(++submitted>=3||!data)start_output();
 return 1;
}
static int emit(void *unused,const int16_t *data){
 (void)unused;if(atomic_load(&last_error))return 0;
 return enqueue(data)&&!atomic_load(&last_error);
}
static void delete_sync(void){
 if(worker>=0){sceKernelDeleteThread(worker);worker=-1;}
 if(free_slots>=0){sceKernelDeleteSema(free_slots);free_slots=-1;}
 if(ready_slots>=0){sceKernelDeleteSema(ready_slots);ready_slots=-1;}
 if(start_gate>=0){sceKernelDeleteSema(start_gate);start_gate=-1;}
}
static int open_port(void){
 if(port>=0)return 0;
 atomic_store(&last_error,0);
 int result=sceAudioOutOpenPort(SCE_AUDIO_OUT_PORT_TYPE_MAIN,PMD_AUDIO_BLOCK_FRAMES,48000,SCE_AUDIO_OUT_MODE_STEREO);
 if(result<0){error(result);return 0;}port=result;
 write_pos=read_pos=submitted=0;started=0;
 free_slots=sceKernelCreateSema("pmd_audio_free",0,QUEUE_BLOCKS,QUEUE_BLOCKS,NULL);
 ready_slots=sceKernelCreateSema("pmd_audio_ready",0,0,QUEUE_BLOCKS,NULL);
 start_gate=sceKernelCreateSema("pmd_audio_start",0,0,1,NULL);
 if(free_slots<0||ready_slots<0||start_gate<0){error(free_slots<0?free_slots:ready_slots<0?ready_slots:start_gate);goto fail;}
 worker=sceKernelCreateThread("pmd_audio",consume,0x10000100,0x10000,0,0,NULL);
 if(worker<0){error(worker);goto fail;}
 result=sceKernelStartThread(worker,0,NULL);
 if(result<0){error(result);goto fail;}
 pmd_audio_blocks_init(&blocks,emit,NULL);return 1;
fail:
 delete_sync();result=sceAudioOutReleasePort(port);if(result>=0)port=-1;return 0;
}
int pmd_vita_audio_push(const int16_t *data,size_t frames){return port>=0&&worker>=0&&!atomic_load(&last_error)&&pmd_audio_blocks_push(&blocks,data,frames);}
int pmd_vita_audio_close(void){
 if(port<0)return 1;
 int ok=1;
 if(worker>=0){
  if(!pmd_audio_blocks_finish(&blocks))ok=0;
  if(!enqueue(NULL))return 0;
  start_output();int joined=sceKernelWaitThreadEnd(worker,NULL,NULL);
  if(joined<0){error(joined);return 0;}
  delete_sync();
 }
 int result=sceAudioOutOutput(port,NULL);if(result<0){error(result);ok=0;}
 result=sceAudioOutReleasePort(port);if(result<0){error(result);ok=0;}else port=-1;
 return ok&&!atomic_load(&last_error);
}
int pmd_vita_audio_error(void){return atomic_load(&last_error);}

int pmd_vita_audio_open(void){
 if(!open_port())return 0;
 recovery_attempts=healthy_pushes=recoveries=0;return 1;
}
int pmd_vita_audio_push_recovering(const int16_t *data,size_t frames){
 if(port<0||worker<0)return 0;
 if(pmd_vita_audio_push(data,frames)){
  /* Only sustained production resets the retry budget. A permanently failing
   * asynchronous device must not cause an endless reopen/prefill cycle. */
  if(frames&&++healthy_pushes>=120){healthy_pushes=120;recovery_attempts=0;}
  return 1;
 }
 healthy_pushes=0;
 if(!atomic_load(&last_error)||recovery_attempts>=3)return 0;
 recovery_attempts++;
 pmd_vita_audio_close();
 /* close reports the old output error even when cleanup succeeded. Never
  * reopen while a worker or device port still belongs to the old session. */
 if(port>=0||worker>=0||!open_port())return 0;
 recoveries++;
 /* A device failure may lose queued samples. Keep the original mixer's state
  * intact and resume from this frame; never replay game logic to refill it. */
 return pmd_vita_audio_push(data,frames);
}
unsigned pmd_vita_audio_recoveries(void){return recoveries;}
