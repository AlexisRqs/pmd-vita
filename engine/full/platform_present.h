#ifndef PMD_PLATFORM_PRESENT_H
#define PMD_PLATFORM_PRESENT_H
#include <stdint.h>
#include <string.h>
/* The destination is Vita CDRAM. Never read it back to duplicate rows:
 * stage the enlarged row in cached CPU memory, then only write to CDRAM. */
static inline void pmd_present_scale3(uint32_t *target,unsigned pitch,const uint32_t *pixels){
 uint32_t expanded[720];
 for(unsigned y=0;y<160;y++){
  for(unsigned x=0;x<240;x++){
   uint32_t color=pixels[y*240+x];
   expanded[x*3]=expanded[x*3+1]=expanded[x*3+2]=color;
  }
  uint32_t *row=target+(y*3+32)*pitch+120;
  memcpy(row,expanded,sizeof(expanded));
  memcpy(row+pitch,expanded,sizeof(expanded));
  memcpy(row+pitch*2,expanded,sizeof(expanded));
 }
}
#endif
