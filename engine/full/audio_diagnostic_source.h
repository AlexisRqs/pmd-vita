#ifndef PMD_AUDIO_DIAGNOSTIC_SOURCE_H
#define PMD_AUDIO_DIAGNOSTIC_SOURCE_H
#include <stddef.h>
#include <stdint.h>
#define PMD_DIAG_RATE 48000u
#define PMD_DIAG_FADE 960u
#define PMD_DIAG_GAP 24000u
enum {PMD_DIAG_MIXED,PMD_DIAG_PCM,PMD_DIAG_PSG,PMD_DIAG_SINE,PMD_DIAG_SILENCE,PMD_DIAG_MODES};
void pmd_diag_source_init(void);
/* Capture modes repeat with a 20ms edge fade and explicit 500ms silent gap.
 * Sine phase continues across submissions; no periodic reset or silent gap. */
void pmd_diag_render(unsigned mode,const int16_t *capture,size_t capture_frames,
                     uint64_t start,int16_t *out,size_t frames);
#endif
