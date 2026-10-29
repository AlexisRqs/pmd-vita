#ifndef PMD_PLATFORM_SPEED_H
#define PMD_PLATFORM_SPEED_H
#include <stdint.h>
#include <stddef.h>
void pmd_speed_update(int held);
int pmd_speed_active(void);
int pmd_speed_draw_frame(void);
size_t pmd_speed_audio(int16_t *out,const int16_t *in,size_t frames);
#endif
