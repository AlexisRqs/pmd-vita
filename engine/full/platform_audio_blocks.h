#ifndef PMD_AUDIO_BLOCKS_H
#define PMD_AUDIO_BLOCKS_H
#include <stddef.h>
#include <stdint.h>
enum { PMD_AUDIO_BLOCK_FRAMES=512 };
/* emit consumes/copies the block synchronously, returns nonzero on success. */
typedef int (*PmdAudioEmit)(void*,const int16_t*);
typedef struct {int16_t samples[PMD_AUDIO_BLOCK_FRAMES*2];size_t used;PmdAudioEmit emit;void *context;int failed,finished;} PmdAudioBlocks;
void pmd_audio_blocks_init(PmdAudioBlocks*,PmdAudioEmit,void*);
int pmd_audio_blocks_push(PmdAudioBlocks*,const int16_t*,size_t frames);
/* Pad only the final partial block; subsequent pushes fail until reinitialized. */
int pmd_audio_blocks_finish(PmdAudioBlocks*);
#endif
