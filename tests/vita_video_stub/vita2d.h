#ifndef PMD_TEST_VITA2D_H
#define PMD_TEST_VITA2D_H
#include <stdint.h>
typedef struct vita2d_texture vita2d_texture;
typedef enum { SCE_GXM_TEXTURE_FILTER_POINT = 0, SCE_GXM_TEXTURE_FILTER_LINEAR = 1 } SceGxmTextureFilter;
int vita2d_init(void);
int vita2d_fini(void);
void vita2d_wait_rendering_done(void);
void vita2d_set_vblank_wait(int enable);
void vita2d_set_clear_color(unsigned int color);
vita2d_texture *vita2d_create_empty_texture(unsigned int width,unsigned int height);
void vita2d_free_texture(vita2d_texture *texture);
void vita2d_texture_set_filters(vita2d_texture *texture,SceGxmTextureFilter min,SceGxmTextureFilter mag);
unsigned int vita2d_texture_get_stride(const vita2d_texture *texture);
void *vita2d_texture_get_datap(const vita2d_texture *texture);
void vita2d_start_drawing(void);
void vita2d_clear_screen(void);
void vita2d_draw_texture_scale(const vita2d_texture *texture,float x,float y,float sx,float sy);
void vita2d_draw_texture(const vita2d_texture *texture,float x,float y);
void vita2d_end_drawing(void);
void vita2d_swap_buffers(void);
void vita2d_draw_rectangle(float x,float y,float w,float h,unsigned int color);
typedef struct vita2d_pgf vita2d_pgf;
vita2d_pgf *vita2d_load_default_pgf(void);
void vita2d_free_pgf(vita2d_pgf *font);
int vita2d_pgf_draw_text(vita2d_pgf *,int,int,unsigned,float,const char *);
int vita2d_pgf_text_width(vita2d_pgf *,float,const char *);
#endif
