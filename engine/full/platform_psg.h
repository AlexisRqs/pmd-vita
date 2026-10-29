#ifndef PMD_PLATFORM_PSG_H
#define PMD_PLATFORM_PSG_H
#include <stdint.h>
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Configure before original SoundInit. Use 48000Hz for exact clock ratio.
 * Other rates 8000..48000 use the library 20-bit quantized clock ratio. */
int pmd_psg_reset(unsigned rate);
void pmd_psg_write8(unsigned gba_offset,uint8_t value);
void pmd_psg_write16(unsigned gba_offset,uint16_t value);
void pmd_psg_write32(unsigned gba_offset,uint32_t value);
uint8_t pmd_psg_read8(unsigned gba_offset);
/* Output interleaved signed16 stereo; capacity must be >=1024 frames.
 * One GBA frame=280896 cycles at16777216Hz. Returns frames, or -1 on failure. */
int pmd_psg_render_frame(int16_t *output,size_t capacity_frames);
#ifdef __cplusplus
}
#endif
#endif
