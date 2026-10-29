#include "platform_frame.h"
#include "platform_speed.h"
#include "platform_memory.h"
#include "platform_video.h"
#include <stdlib.h>
#include <string.h>
uint16_t pmd_interrupt_check;
void *pmd_interrupt_vector;
static PmdFrameHooks host;
static uint64_t frame_number;
static uint32_t pixels[240*160];
static int advancing;
static unsigned read_reg(unsigned offset){uint16_t n;memcpy(&n,(char*)pmd_io_words+offset,2);return n;}
static void write_reg(unsigned offset,unsigned value){uint16_t n=value;memcpy((char*)pmd_io_words+offset,&n,2);}
static void lcd_status(unsigned y,int hblank){
 unsigned stat=read_reg(4)&~7u;
 if(y>=160)stat|=1;
 if(hblank)stat|=2;
 if((stat>>8)==y)stat|=4;
 write_reg(4,stat);write_reg(6,y);
}
static void interrupt(unsigned flag,unsigned index){
 write_reg(0x202,read_reg(0x202)|flag);
 if((read_reg(0x208)&1)&&(read_reg(0x200)&flag)){
  pmd_native_interrupt(index);
  write_reg(0x202,read_reg(0x202)&~flag);
 }
}
void pmd_frame_configure(const PmdFrameHooks *hooks){
 if(advancing)abort();
 host=hooks?*hooks:(PmdFrameHooks){0};frame_number=0;
 pmd_interrupt_check=0;pmd_interrupt_vector=NULL;
}
uint64_t pmd_frame_number(void){return frame_number;}
int pmd_frame_advance(void){
 if(!host.present||advancing)return 0;
 /* Do not partly advance an unsupported frame. Forced blank is mode-independent. */
 if((read_reg(0)&7)&&!(read_reg(0)&0x80))return 0;
 advancing=1;
 unsigned held=host.poll_keys?host.poll_keys(host.context):0;
 int draw=pmd_speed_draw_frame();
 write_reg(0x130,(~held)&0x3ff);
 for(unsigned y=0;y<160;y++){
  lcd_status(y,0);
  if((read_reg(4)&0x24)==0x24){interrupt(4,2);lcd_status(y,0);}
  if(draw&&!pmd_video_line(y,pixels+y*240)){advancing=0;return 0;}
  lcd_status(y,1);pmd_dma_event(2);
 }
 lcd_status(160,0);
 pmd_dma_event(1);
 if(read_reg(4)&8)interrupt(1,1);
 lcd_status(160,0); /* restore hardware-owned bits after handler writes */
 if((read_reg(4)&0x24)==0x24){interrupt(4,2);lcd_status(160,0);}
 if(draw)host.present(host.context,pixels,frame_number);
 frame_number++;
 advancing=0;return 1;
}
void VBlankIntrWait(void){
 pmd_interrupt_check&=~1u;
 if(!pmd_frame_advance() || !(pmd_interrupt_check&1))abort();
}
