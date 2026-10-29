#include "audio_diagnostic_source.h"
#include <math.h>
static int16_t sine_table[1200];
void pmd_diag_source_init(void){
 for(unsigned i=0;i<1200;i++)sine_table[i]=(int16_t)lround(2048.0*sin(6.2831853071795864769*i/1200.0));
}
void pmd_diag_render(unsigned mode,const int16_t *capture,size_t count,uint64_t start,int16_t *out,size_t frames){
 for(size_t i=0;i<frames;i++){
  uint64_t frame=start+i;int left=0,right=0;
  if(mode<PMD_DIAG_SINE&&capture&&count){
   size_t position=(size_t)(frame%(count+PMD_DIAG_GAP));
   if(position<count){
    size_t gain=position;if(gain>PMD_DIAG_FADE)gain=PMD_DIAG_FADE;
    if(count-1-position<gain)gain=count-1-position;
    left=(int)capture[position*2]*(int)gain/(int)PMD_DIAG_FADE;
    right=(int)capture[position*2+1]*(int)gain/(int)PMD_DIAG_FADE;
   }
  }else if(mode==PMD_DIAG_SINE){
   int gain=frame<PMD_DIAG_FADE?(int)frame:PMD_DIAG_FADE;
   left=right=(int)sine_table[((frame%1200)*11)%1200]*gain/(int)PMD_DIAG_FADE;
  }
  out[i*2]=(int16_t)left;out[i*2+1]=(int16_t)right;
 }
}
