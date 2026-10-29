#ifndef NATIVE_GLOBAL_H
#define NATIVE_GLOBAL_H
#include <stdint.h>
#include <stddef.h>
#include <string.h>
typedef uint8_t u8; typedef uint16_t u16; typedef uint32_t u32;
typedef int8_t s8; typedef int16_t s16; typedef int32_t s32;
typedef u8 bool8;
#define EWRAM_DATA
#define EWRAM_INIT
#define UNUSED __attribute__((unused))
#define _(x) ((const u8 *)(x))
#define TRUE 1
#define FALSE 0
#define A_BUTTON 1
#define B_BUTTON 2
#define SELECT_BUTTON 4
#define START_BUTTON 8
#define DPAD_RIGHT 16
#define DPAD_LEFT 32
#define DPAD_UP 64
#define DPAD_DOWN 128
#define R_BUTTON 256
#define L_BUTTON 512
#define DPAD_ANY 240
#endif
