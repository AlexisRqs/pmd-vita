#ifndef PMD_AUDIO_GAME_H
#define PMD_AUDIO_GAME_H
#include <stdint.h>
#include <stddef.h>
typedef int (*PmdAudioSink)(void*,const int16_t*,size_t);
/* Configure before original SoundInit; called only on the game thread. */
int pmd_audio_game_init(PmdAudioSink,void*);
/* Called after original m4aSoundMain, before the next VSync changes ring counter. */
int pmd_audio_game_render(int16_t*,size_t capacity_frames);
void pmd_audio_game_update(void);
#endif
