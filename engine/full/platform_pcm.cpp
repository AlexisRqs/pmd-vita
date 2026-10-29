#include "platform_pcm.h"
#include "core/apu/Multi_Buffer.h"
static Stereo_Buffer pcm_buffer;
static Blip_Synth<blip_best_quality,1> pcm_synth;
static int previous[2];
static bool ready;
int pmd_pcm_reset(void){
 ready=false;if(pcm_buffer.set_sample_rate(48000,100))return 0;
 pcm_buffer.clock_rate(16777216);pcm_buffer.bass_freq(30);pcm_buffer.clear();
 /* Match the existing Gb_Snd_Emu integration's Direct Sound normalization.
  * See PORTING.txt: this is an output gain, not a change to M4A PCM arithmetic. */
 pcm_synth.volume(0.66/256.0);previous[0]=previous[1]=0;ready=true;return 1;
}
static int half(int n){return n>=0?n/2:-((-n+1)/2);}
int pmd_pcm_render_frame(const int8_t *a,const int8_t *b,size_t count,uint16_t control,int master,int16_t *out,size_t capacity){
 if(!ready||!out||capacity<1024||count>1584||(count&&(!a||!b||280896%count))||(control&0x4400))return -1;
 unsigned steps=count?count:1,period=280896/steps;
 for(unsigned i=0;i<steps;i++){
  int av=count&&master?a[i]:0,bv=count&&master?b[i]:0;
  if(!(control&4))av=half(av);if(!(control&8))bv=half(bv);
  int values[2]={((control&0x200)?av:0)+((control&0x2000)?bv:0),((control&0x100)?av:0)+((control&0x1000)?bv:0)};
  for(int side=0;side<2;side++){
   Blip_Buffer *target=side?pcm_buffer.right():pcm_buffer.left();
   if(values[side]!=previous[side]){pcm_synth.offset(i*period,values[side]-previous[side],target);previous[side]=values[side];}
   target->set_modified();
  }
 }
 pcm_buffer.end_frame(280896);
 long n=pcm_buffer.samples_avail();if(n<0||n>2048||(n&1))return -1;
 if(pcm_buffer.read_samples(out,n)!=n)return -1;
 return n/2;
}
void pmd_audio_mix(int16_t *out,const int16_t *pcm,const int16_t *psg,size_t frames){
 for(size_t i=0;i<frames*2;i++){int value=int(pcm[i])+int(psg[i]);out[i]=value<-32768?-32768:value>32767?32767:value;}
}
