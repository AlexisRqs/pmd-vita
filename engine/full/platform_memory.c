#include "platform_memory.h"
#include <stdlib.h>
#include <string.h>

struct SoundInfo *pmd_sound_info;
uint32_t pmd_io_words[0x400 / 4];
uint32_t pmd_palette_words[0x400 / 4];
uint32_t pmd_vram_words[0x18000 / 4];
uint32_t pmd_oam_words[0x400 / 4];
typedef struct {uintptr_t src, dst, reload; uint32_t count; uint16_t flags;} Dma;
static Dma channels[4];
static uint16_t io_read16(unsigned offset) {
    uint16_t v; memcpy(&v, (uint8_t *)pmd_io_words+offset, 2); return v;
}
static void io_write16(unsigned offset, uint16_t v) {
    memcpy((uint8_t *)pmd_io_words+offset, &v, 2);
}
void pmd_memory_reset(void) {
    pmd_sound_info=NULL;
    memset(pmd_io_words,0,sizeof(pmd_io_words));
    memset(pmd_palette_words,0,sizeof(pmd_palette_words));
    memset(pmd_vram_words,0,sizeof(pmd_vram_words));
    memset(pmd_oam_words,0,sizeof(pmd_oam_words));
    memset(channels,0,sizeof(channels));
    io_write16(0x130,0x3ff); /* active-low keypad, no buttons */
}
/* Forward transfers deliberately preserve the original sequential behavior
 * on overlap. memcpy of the entire region would have undefined semantics. */
static void cpu_transfer(const void *source, void *dest, uint32_t count,
                         unsigned width, int fixed) {
    uintptr_t src=(uintptr_t)source & ~(uintptr_t)(width-1);
    uintptr_t dst=(uintptr_t)dest & ~(uintptr_t)(width-1);
    uint32_t value=0;
    if (count && fixed) memcpy(&value,(const void *)src,width);
    for (uint32_t i=0;i<count;i++) {
        if (!fixed) {memcpy(&value,(const void *)src,width);src+=width;}
        memcpy((void *)dst,&value,width);dst+=width;
    }
}
void CpuSet(const void *src,void *dst,uint32_t control) {
    cpu_transfer(src,dst,control&0x1fffff,(control&0x04000000)?4:2,control&0x01000000);
}
void CpuFastSet(const void *src,void *dst,uint32_t control) {
    uint32_t count=control&0x1fffff;
    cpu_transfer(src,dst,(count+7)&~7u,4,control&0x01000000);
}
static void dma_run(unsigned channel) {
    Dma *d=&channels[channel];
    unsigned width=(d->flags&0x400)?4:2;
    unsigned sm=(d->flags>>7)&3,dm=(d->flags>>5)&3;
    for(uint32_t i=0;i<d->count;i++) {
        uint32_t value=0;memcpy(&value,(const void *)d->src,width);
        memcpy((void *)d->dst,&value,width);
        if(sm==0)d->src+=width;else if(sm==1)d->src-=width;
        if(dm==0||dm==3)d->dst+=width;else if(dm==1)d->dst-=width;
    }
    if(d->flags&0x4000)io_write16(0x202,io_read16(0x202)|(1u<<(8+channel)));
    if((d->flags&0x200)&&(d->flags&0x3000)) {
        if(dm==3)d->dst=d->reload;
    } else d->flags&=~0x8000;
    io_write16(0xba+channel*12,d->flags);
}
void pmd_dma_set(unsigned channel,const void *src,void *dst,uint32_t control) {
    if(channel>3)abort();
    uint16_t flags=control>>16;
    /* FIFO audio/cart requests need the audio backend, not a silent copy. */
    if((flags&0x8000)&&(((flags&0x3000)==0x3000)||(flags&0x800)||((flags&0x180)==0x180)))abort();
    unsigned width=(flags&0x400)?4:2;
    Dma *d=&channels[channel];
    *d=(Dma){(uintptr_t)src&~(uintptr_t)(width-1),
             (uintptr_t)dst&~(uintptr_t)(width-1),0,0,flags};
    d->reload=d->dst;
    uint32_t mask=channel==3?0xffff:0x3fff;
    d->count=control&mask;if(!d->count)d->count=mask+1;
    pmd_io_words[(0xb0+channel*12)/4]=(uint32_t)(uintptr_t)src;
    pmd_io_words[(0xb4+channel*12)/4]=(uint32_t)(uintptr_t)dst;
    pmd_io_words[(0xb8+channel*12)/4]=control;
    if((flags&0x8000)&&!(flags&0x3000))dma_run(channel);
}
void pmd_dma_stop(unsigned channel) {
    if(channel>3)abort();
    channels[channel].flags&=~0xba00;
    io_write16(0xba+channel*12,channels[channel].flags);
}
void pmd_dma_event(unsigned timing) {
    if(timing<1||timing>2)abort();
    for(unsigned i=0;i<4;i++) {
        Dma *d=&channels[i];
        /* Honor the original VBlank_CB's direct disabling of DMA0. */
        if(!(io_read16(0xba+i*12)&0x8000))d->flags&=~0x8000;
        if((d->flags&0x8000)&&((d->flags>>12)&3)==timing)dma_run(i);
    }
}
