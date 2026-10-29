#ifndef PMD_PLATFORM_PCM_H
#define PMD_PLATFORM_PCM_H
#include <stddef.h>
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
int pmd_pcm_reset(void);
/* Signed samples from M4A's FIFO A/B ring slices, for exactly one GBA frame.
 * count=0 supplies silence. Other counts must divide280896 and be<=1584.
 * SOUNDCNT_H controls gains/routing; timer1 is not supported by this adapter.
 * Returns48kHz stereo frame count or-1; capacity>=1024 stereo frames. */
int pmd_pcm_render_frame(const int8_t *a,const int8_t *b,size_t count,uint16_t control,int master,int16_t *out,size_t capacity);
void pmd_audio_mix(int16_t *out,const int16_t *pcm,const int16_t *psg,size_t frames);
#ifdef __cplusplus
}
#endif
#endif
