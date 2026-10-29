#ifndef PMD_PLATFORM_VIDEO_H
#define PMD_PLATFORM_VIDEO_H
#include <stdint.h>
/* Renders one mode-0 scanline in RGBA byte order, 240 pixels. No timing side
 * effects: the frame scheduler owns callbacks and HBlank DMA ordering.
 * Returns 0 for an unsupported display mode, 1 on success. */
int pmd_video_line(unsigned y, uint32_t pixels[240]);
#endif
