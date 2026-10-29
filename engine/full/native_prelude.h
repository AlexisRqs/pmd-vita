/* Full-game preprocessing: preserve _(), __() and INCBIN for tools/preproc.
 * Do not use the isolated engine/native_engine.h here. */
#define NONMATCHING 1
#include "global.h"
#undef EWRAM_DATA
#undef IWRAM_DATA
#undef EWRAM_INIT
#undef IWRAM_INIT
#undef EWRAM_LIB
#define EWRAM_DATA
#define IWRAM_DATA
#define EWRAM_INIT
#define IWRAM_INIT
#define EWRAM_LIB
#undef asm_comment
#define asm_comment(x) __asm__ volatile("")
#include "platform_memory.h"
#undef REG_BASE
#undef PLTT
#undef VRAM
#undef OAM
#define REG_BASE ((uintptr_t)pmd_io_words)
#define PLTT ((uintptr_t)pmd_palette_words)
#define VRAM ((uintptr_t)pmd_vram_words)
#define OAM ((uintptr_t)pmd_oam_words)
#undef DmaSet
#undef DmaStop
#define DmaSet(channel,src,dst,control) pmd_dma_set(channel,(const void *)(src),(void *)(dst),(uint32_t)(control))
#define DmaStop(channel) pmd_dma_stop(channel)
/* Original transfer macros shift this flag left 16; keep that shift unsigned. */
#undef DMA_ENABLE
#define DMA_ENABLE 0x8000u
#include "platform_frame.h"
#undef INTR_CHECK
#undef INTR_VECTOR
#define INTR_CHECK pmd_interrupt_check
#define INTR_VECTOR pmd_interrupt_vector

#undef SOUND_INFO_PTR
#define SOUND_INFO_PTR pmd_sound_info

#include "platform_flash.h"
