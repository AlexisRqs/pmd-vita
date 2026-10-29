#ifndef PROTOTYPE_H
#define PROTOTYPE_H
#include "global.h"
#define TITLE_BYTES 0x5B20
int decode_at_checked(const u8 *,size_t,u8 *,size_t);
int decode_title(const u8 *data, size_t size, u8 *out);
int decode_palette(const u8 *,size_t,u32 *);
void make_test_title(u8 *out, u32 *palette);
void render_title(const u8 *data, const u32 *palette, u32 *pixels);
#endif
