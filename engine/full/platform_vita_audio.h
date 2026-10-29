#ifndef PMD_VITA_AUDIO_H
#define PMD_VITA_AUDIO_H
#include <stdint.h>
#include <stddef.h>
/* Producer API: game-thread only. A private worker drains the bounded audio queue. */
int pmd_vita_audio_open(void);
int pmd_vita_audio_push(const int16_t*,size_t frames);
/* Bounded device recovery; failed streams may have a brief discontinuity. */
int pmd_vita_audio_push_recovering(const int16_t*,size_t frames);
unsigned pmd_vita_audio_recoveries(void);
int pmd_vita_audio_close(void);
int pmd_vita_audio_error(void);
#endif
