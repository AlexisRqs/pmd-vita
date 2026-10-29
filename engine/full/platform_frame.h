#ifndef PMD_PLATFORM_FRAME_H
#define PMD_PLATFORM_FRAME_H
#include <stdint.h>
typedef struct {
 uint16_t (*poll_keys)(void *); /* GBA active-high key bits, sampled once/frame */
 void (*present)(void *,const uint32_t *,uint64_t); /* owns pacing/display upload */
 void *context;
} PmdFrameHooks;
extern uint16_t pmd_interrupt_check;
extern void *pmd_interrupt_vector;
void pmd_frame_configure(const PmdFrameHooks *hooks);
int pmd_frame_advance(void);
uint64_t pmd_frame_number(void);
void VBlankIntrWait(void);
/* Defined by the adapted original reg_control.c, dispatches its real handlers. */
void pmd_native_interrupt(unsigned index);
#endif
