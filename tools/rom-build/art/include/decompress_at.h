#ifndef NATIVE_AT_H
#define NATIVE_AT_H
#include "global.h"
typedef struct { const void *file; const void *data; } OpenedFile;
u32 DecompressAT(u8 *, s32, const u8 *);
#endif
