#ifndef PMD_PLATFORM_MEMORY_H
#define PMD_PLATFORM_MEMORY_H
#include <stdint.h>
/* Software-owned GBA graphics state. These are buffers, not fixed mappings. */
struct SoundInfo;
extern struct SoundInfo *pmd_sound_info;
extern uint32_t pmd_io_words[0x400 / 4];
extern uint32_t pmd_palette_words[0x400 / 4];
extern uint32_t pmd_vram_words[0x18000 / 4];
extern uint32_t pmd_oam_words[0x400 / 4];
void pmd_memory_reset(void);
void CpuSet(const void *, void *, uint32_t);
void CpuFastSet(const void *, void *, uint32_t);
void pmd_dma_set(unsigned, const void *, void *, uint32_t);
void pmd_dma_stop(unsigned);
/* 1: VBlank, 2: HBlank. Caller must supply actual frame/scanline timing. */
void pmd_dma_event(unsigned);
#endif
