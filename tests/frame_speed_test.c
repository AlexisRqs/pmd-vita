#include "platform_frame.h"
#include "platform_memory.h"
#include "platform_speed.h"
#include <assert.h>
#include <stdio.h>
uint32_t pmd_io_words[256];
static unsigned hblank,vblank,irq,polls,draws,lines;
void pmd_dma_event(unsigned event){if(event==1)vblank++;else if(event==2)hblank++;else assert(0);}
void pmd_native_interrupt(unsigned index){assert(index==1);irq++;pmd_interrupt_check|=1;}
int pmd_video_line(unsigned y,uint32_t *p){assert(y<160);lines++;p[0]=y;return 1;}
static uint16_t poll(void *p){(void)p;polls++;return 0;}
static void present(void *p,const uint32_t *pixels,uint64_t frame){(void)p;assert(frame<12);assert(pixels[0]==0);draws++;}
int main(void){
 uint16_t *io=(uint16_t*)pmd_io_words;io[4/2]=8;io[0x200/2]=1;io[0x208/2]=1;
 PmdFrameHooks hooks={poll,present,0};pmd_frame_configure(&hooks);
 for(int i=0;i<4;i++)assert(pmd_frame_advance());assert(draws==4);
 pmd_speed_update(1);for(int i=0;i<6;i++)assert(pmd_frame_advance());assert(draws==7);
 pmd_speed_update(0);for(int i=0;i<2;i++)assert(pmd_frame_advance());
 assert(draws==9&&lines==9*160&&polls==12&&irq==12&&vblank==12&&hblank==12*160&&pmd_frame_number()==12);
 puts("PASS: turbo skips drawing only; input, VBlank interrupts, scanline DMA and game frames preserved; immediate normal rendering on release");
}
