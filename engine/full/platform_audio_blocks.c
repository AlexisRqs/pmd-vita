#include "platform_audio_blocks.h"
#include <string.h>
void pmd_audio_blocks_init(PmdAudioBlocks *q,PmdAudioEmit emit,void *context){
 *q=(PmdAudioBlocks){.emit=emit,.context=context};
}
static int send_block(PmdAudioBlocks*q){
 if(!q->emit||!q->emit(q->context,q->samples)){q->failed=1;return 0;}
 q->used=0;return 1;
}
int pmd_audio_blocks_push(PmdAudioBlocks*q,const int16_t*data,size_t frames){
 if(!q||q->failed||q->finished||(!data&&frames))return 0;
 while(frames){
  size_t n=PMD_AUDIO_BLOCK_FRAMES-q->used;if(n>frames)n=frames;
  memcpy(q->samples+q->used*2,data,n*2*sizeof(*data));q->used+=n;data+=n*2;frames-=n;
  if(q->used==PMD_AUDIO_BLOCK_FRAMES&&!send_block(q))return 0;
 }
 return 1;
}
int pmd_audio_blocks_finish(PmdAudioBlocks*q){
 if(!q||q->failed)return 0;
 if(q->finished)return 1;
 q->finished=1;
 if(q->used){memset(q->samples+q->used*2,0,(PMD_AUDIO_BLOCK_FRAMES-q->used)*2*sizeof(int16_t));return send_block(q);}
 return 1;
}
