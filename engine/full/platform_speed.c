#include "platform_speed.h"
#include "platform_settings.h"
static int active,skip,half,fade=128;
static int16_t last[2],edge[2];
void pmd_speed_update(int held){
 int next=!!held&&pmd_settings.turbo;
 if(next!=active){active=next;skip=half=0;fade=0;edge[0]=last[0];edge[1]=last[1];}
}
int pmd_speed_active(void){return active;}
int pmd_speed_draw_frame(void){if(!active)return 1;skip^=1;return skip;}
size_t pmd_speed_audio(int16_t *out,const int16_t *in,size_t frames){
 size_t n=0;
 for(size_t i=0;i<frames;i++){
  if(active){half^=1;if(half)continue;}
  if(fade<128)fade++;
  for(int ch=0;ch<2;ch++){
   int target=active?0:in[i*2+ch];
   int value=fade<128?(edge[ch]*(128-fade)+target*fade)/128:target;
   out[n*2+ch]=last[ch]=(int16_t)value;
  }
  n++;
 }
 return n;
}
