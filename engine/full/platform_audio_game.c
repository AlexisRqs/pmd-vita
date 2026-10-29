#include "gba/m4a_internal.h"
#include "platform_audio_game.h"
#include "platform_memory.h"
#include "platform_pcm.h"
#include "platform_psg.h"
#include <stdlib.h>
#include <string.h>
static PmdAudioSink sink;
static void *sink_context;
static int ready;
int pmd_audio_game_init(PmdAudioSink callback,void *context){
 ready=0;sink=NULL;sink_context=NULL;
 if(!callback||!pmd_psg_reset(48000)||!pmd_pcm_reset())return 0;
 sink=callback;sink_context=context;ready=1;return 1;
}
static unsigned reg(unsigned offset){uint16_t value;memcpy(&value,(char*)pmd_io_words+offset,2);return value;}
int pmd_audio_game_render(int16_t *output,size_t capacity){
 struct SoundInfo *s=pmd_sound_info;
 if(!ready||!output||capacity<1024||!s)return -1;
 if(s->ident!=ID_NUMBER&&s->ident!=ID_NUMBER+10)return -1;
 unsigned count=0,offset=0,control=reg(0x82),master=reg(0x84)&0x80;
 if(control&0x4400)return -1; /* Original M4A uses Timer0 for both FIFOs. */
 if(s->ident==ID_NUMBER&&(reg(0x102)&0x80)){
  if(s->pcmSamplesPerVBlank<=0||s->pcmSamplesPerVBlank>PCM_DMA_BUF_SIZE)return -1;
  count=s->pcmSamplesPerVBlank;
  if(280896%count||s->pcmDmaPeriod!=PCM_DMA_BUF_SIZE/count||s->pcmDmaCounter>s->pcmDmaPeriod)return -1;
  if((reg(0x102)&3)||65536-reg(0x100)!=280896/count)return -1;
  if(s->pcmDmaCounter>1)offset=(s->pcmDmaPeriod-(s->pcmDmaCounter-1))*count;
  if(offset+count>PCM_DMA_BUF_SIZE)return -1;
 }
 int16_t psg[2048],pcm[2048];
 int n=pmd_psg_render_frame(psg,1024);
 if(n<0)return -1;
 int m=pmd_pcm_render_frame(s->pcmBuffer+offset,s->pcmBuffer+PCM_DMA_BUF_SIZE+offset,count,control,master,pcm,1024);
 if(m!=n)return -1;
 pmd_audio_mix(output,pcm,psg,n);return n;
}
void pmd_audio_game_update(void){
 int16_t output[2048];int n=pmd_audio_game_render(output,1024);
 if(n<0||!sink(sink_context,output,(size_t)n))abort();
}
