#include "platform_vita_video.h"
#include "platform_settings.h"
#include "platform_speed.h"
#include <math.h>
#include "debugScreen.h"
#include <vita2d.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct vita2d_texture { unsigned w,h,stride,filter_count; unsigned char *data; uint32_t submitted_hash; };
static vita2d_texture *textures[2];
static int initialized,init_result=1,init_calls,fini_calls,create_calls,fail_texture;
static int stage,inflight,waits,swaps,frees;
static int expected_hud=1,in_menu,capture;
struct vita2d_pgf {int alive;};
static struct vita2d_pgf test_font;
vita2d_pgf *vita2d_load_default_pgf(void){test_font.alive=1;return &test_font;}
void vita2d_free_pgf(vita2d_pgf *f){assert(f==&test_font);f->alive=0;}
int vita2d_pgf_text_width(vita2d_pgf *f,float scale,const char *s){assert(f->alive);int n=0;for(;*s;s++)if(((unsigned char)*s&0xc0)!=0x80)n++;return (int)(n*10*scale);}
int vita2d_pgf_draw_text(vita2d_pgf *f,int x,int y,unsigned color,float scale,const char *s){assert(f->alive&&x>=56&&y<=544);if(capture)printf("TEXT\t%d\t%d\t%f\t%u\t%s\n",x,y,scale,color,s);return 0;}
static int badge_backgrounds,badge_pixels;
static unsigned char glyphs[256*8];
static PsvDebugScreenFont font={glyphs,8,8,0,255,8,8};
PsvDebugScreenFont *psvDebugScreenGetFont(void){return &font;}
static uint32_t hash(const vita2d_texture *t){
 uint32_t value=2166136261u;
 for(unsigned i=0;i<t->stride*t->h;i++)value=(value^t->data[i])*16777619u;
 return value;
}
static void padding_intact(const vita2d_texture *t){
 for(unsigned y=0;y<t->h;y++)for(unsigned x=t->w*4;x<t->stride;x++)assert(t->data[y*t->stride+x]==0xA5);
}
int vita2d_init(void){assert(!initialized);init_calls++;if(init_result==1)initialized=1;return init_result;}
int vita2d_fini(void){assert(initialized&&!inflight&&!textures[0]&&!textures[1]);initialized=0;fini_calls++;return 1;}
void vita2d_wait_rendering_done(void){
 assert(initialized&&stage==0);waits++;
 if(inflight){
  /* DMA/GPU may read until this fence: neither texture may change early. */
  for(int i=0;i<2;i++)assert(textures[i]&&hash(textures[i])==textures[i]->submitted_hash);
 }
 inflight=0;
}
void vita2d_set_vblank_wait(int enable){assert(initialized&&enable==0);}
void vita2d_set_clear_color(unsigned color){assert(initialized&&color==0xff000000u);}
vita2d_texture *vita2d_create_empty_texture(unsigned w,unsigned h){
 assert(initialized);int index=create_calls++%2;
 assert((index==0&&w==240&&h==160)||(index==1&&w==960&&h==32));
 if(fail_texture==index+1)return NULL;
 vita2d_texture *t=calloc(1,sizeof(*t));assert(t);t->w=w;t->h=h;
 /* Artificial padding verifies byte-stride handling, not a contiguous shortcut. */
 t->stride=w*4+32;t->data=malloc(t->stride*h);assert(t->data);
 memset(t->data,0xA5,t->stride*h);assert(!textures[index]);textures[index]=t;return t;
}
void vita2d_free_texture(vita2d_texture *t){
 assert(t&&!inflight);int index=t==textures[0]?0:1;assert(t==textures[index]);
 padding_intact(t);free(t->data);free(t);textures[index]=NULL;frees++;
}
void vita2d_texture_set_filters(vita2d_texture *t,SceGxmTextureFilter min,SceGxmTextureFilter mag){
 assert(t&&!inflight&&min==mag&&(min==SCE_GXM_TEXTURE_FILTER_POINT||min==SCE_GXM_TEXTURE_FILTER_LINEAR));t->filter_count++;
}
unsigned vita2d_texture_get_stride(const vita2d_texture *t){assert(t);return t->stride;}
void *vita2d_texture_get_datap(const vita2d_texture *t){assert(t&&!inflight);return t->data;}
void vita2d_start_drawing(void){assert(initialized&&!inflight&&stage==0);stage=1;}
void vita2d_clear_screen(void){assert(stage==1);stage=2;}
void vita2d_draw_texture_scale(const vita2d_texture *t,float x,float y,float sx,float sy){
 assert(stage==2&&t==textures[0]&&sx==sy);
 if(pmd_settings.display==0)assert(x==120&&y==32&&sx==3);
 if(pmd_settings.display==1)assert(fabsf(x-72)<.01f&&fabsf(y)<.01f&&fabsf(sx-3.4f)<.01f);
 if(pmd_settings.display==2)assert(x==240&&y==112&&sx==2);
 if(capture)printf("GAME\t%f\t%f\t%f\t%f\n",x,y,sx,sy);
 stage=3;
}
void vita2d_draw_texture(const vita2d_texture *t,float x,float y){
 assert(stage==3&&t==textures[1]&&x==0&&y==0);assert(t->filter_count==1);stage=4;
}
void vita2d_draw_rectangle(float x,float y,float w,float h,unsigned color){
 if(in_menu||y==510){assert(in_menu?(stage==2||stage==3):stage==(expected_hud?4:3));assert(x>=0&&y>=0&&x+w<=960&&y+h<=544);if(capture)printf("RECT\t%f\t%f\t%f\t%f\t%u\n",x,y,w,h,color);return;}
 assert(stage==(expected_hud?4:3));assert(pmd_speed_active());
 if(w==36){assert(x==916&&y==40&&h==20&&color==0xb0000000u);badge_backgrounds++;}
 else{assert(w==2&&h==2&&x>=921&&x+2<=952&&y>=43&&y+2<=60&&color==0xffa8e8ffu);badge_pixels++;}
}
void vita2d_end_drawing(void){assert(in_menu?(stage==2||stage==3):stage==(expected_hud?4:3));stage=5;}
void vita2d_swap_buffers(void){
 assert(stage==5);stage=0;inflight=1;swaps++;
 for(int i=0;i<2;i++){padding_intact(textures[i]);textures[i]->submitted_hash=hash(textures[i]);}
}
static void verify_game(const uint32_t *pixels){
 for(unsigned y=0;y<160;y++)assert(!memcmp(textures[0]->data+y*textures[0]->stride,pixels+y*240,240*4));
}
static uint32_t hud_pixel(unsigned x,unsigned y){uint32_t p;memcpy(&p,textures[1]->data+y*textures[1]->stride+x*4,4);return p;}
int main(void){
 static uint32_t pixels[240*160];
 for(unsigned i=0;i<240*160;i++)pixels[i]=0xff000000u|(i*127u);
 glyphs['A'*8]=0x81;glyphs['B'*8+7]=0x42;
 pmd_vita_video_close();assert(!waits&&!fini_calls);
 init_result=0;assert(!pmd_vita_video_open());assert(!initialized&&!fini_calls);init_result=1;
 for(int failure=1;failure<=2;failure++){
  fail_texture=failure;assert(!pmd_vita_video_open());assert(!initialized&&!textures[0]&&!textures[1]);
 }
 fail_texture=0;assert(pmd_vita_video_open());int calls=init_calls;assert(!pmd_vita_video_open());assert(init_calls==calls);
 pmd_vita_video_hud("A","B");pmd_vita_video_present(pixels);verify_game(pixels);
 assert(hud_pixel(0,0)==0xffffffffu&&hud_pixel(7,0)==0xffffffffu&&hud_pixel(1,0)==0xff000000u);
 assert(hud_pixel(1,23)==0xffffffffu&&hud_pixel(6,23)==0xffffffffu&&hud_pixel(1,16)==0xff000000u);
 uint32_t hud_before=hash(textures[1]);
 for(unsigned i=0;i<240*160;i++)pixels[i]^=0x00ffffffu;
 pmd_vita_video_present(pixels);verify_game(pixels);assert(hash(textures[1])==hud_before);
 /* HUD requests only modify CPU staging while the GPU owns both textures. */
 pmd_vita_video_hud("B","A");assert(hash(textures[1])==hud_before);
 pmd_vita_video_present(pixels);assert(hash(textures[1])!=hud_before);
 assert(hud_pixel(0,0)==0xff000000u&&hud_pixel(0,16)==0xffffffffu);
 char long_line[2048];memset(long_line,'A',sizeof(long_line)-1);long_line[sizeof(long_line)-1]=0;
 pmd_vita_video_hud(long_line,long_line);pmd_vita_video_present(pixels);
 assert(hud_pixel(959,0)==0xffffffffu&&hud_pixel(959,16)==0xffffffffu);
 pmd_vita_video_show_hud(0);expected_hud=0;pmd_vita_video_present(pixels);verify_game(pixels);
 uint32_t frozen=hash(textures[0]);in_menu=1;pmd_vita_video_menu_begin(1);
 for(unsigned pass=0;pass<2;pass++)for(unsigned selection=0;selection<21;selection++){
  pmd_settings.menu_language=pass;
  capture=1;printf("SCREEN %u\n",selection);pmd_vita_video_menu(selection,1,0,1,"test");capture=0;
  assert(hash(textures[0])==frozen);
 }
 const char *dialog[]={"Copie du 23/10/2026 00:45","Remplacer la sauvegarde ?","Le jeu sera fermé ensuite."};
 capture=1;puts("SCREEN 9");pmd_vita_video_dialog("Restaurer une copie",dialog,3,0,"X : confirmer   O : annuler");capture=0;assert(hash(textures[0])==frozen);
 pmd_vita_video_menu_end();pmd_vita_video_menu_begin(0);capture=1;puts("SCREEN 10");pmd_vita_video_menu(0,1,0,1,"test");capture=0;assert(hash(textures[0])==frozen);
 pmd_vita_video_menu_end();in_menu=0;
 assert(pmd_vita_menu_move(0,-1,0)==14&&pmd_vita_menu_move(14,1,0)==0);
 unsigned sel=0;for(int i=0;i<6;i++)sel=pmd_vita_menu_move(sel,1,1);assert(sel==0);
 assert(pmd_vita_menu_touch(0,410,80)==5);
 assert(pmd_vita_menu_touch(0,400,365)==14);
 assert(pmd_vita_menu_touch(0,10,10)==-1);
 in_menu=1;pmd_vita_video_menu_begin(1);pmd_vita_video_live_menu(1,4);
 pixels[0]^=0xffffff;pmd_vita_video_present(pixels);verify_game(pixels);
 pmd_vita_video_notify("Réglages enregistrés");pmd_vita_video_menu_end();in_menu=0;

 pmd_vita_video_show_hud(1);expected_hud=1;pmd_vita_video_present(pixels);verify_game(pixels);
 for(int size=0;size<3;size++)for(int filter=0;filter<2;filter++){
  pmd_settings.display=size;pmd_settings.filter=filter;pmd_vita_video_present(pixels);verify_game(pixels);
 }
 assert(badge_backgrounds==0);
 pmd_vita_video_show_hud(0);expected_hud=0;pmd_speed_update(1);
 pmd_vita_video_present(pixels);assert(badge_backgrounds==1&&badge_pixels>0);verify_game(pixels);
 pmd_vita_video_show_hud(1);expected_hud=1;pmd_vita_video_present(pixels);assert(badge_backgrounds==2);
 pmd_speed_update(0);pmd_vita_video_present(pixels);assert(badge_backgrounds==2);
 pmd_settings.turbo=0;pmd_speed_update(1);pmd_vita_video_present(pixels);assert(badge_backgrounds==2);
 pmd_vita_video_close();assert(!initialized&&!inflight&&!textures[0]&&!textures[1]);
 int count=fini_calls;pmd_vita_video_close();assert(fini_calls==count);
 assert(pmd_vita_video_open());pmd_vita_video_present(pixels);pmd_vita_video_close();
 assert(swaps==62&&frees==6&&fini_calls==4);
 puts("PASS: padded stride, pixel identity, nearest filtering, draw geometry/order, GPU fence ownership, HUD staging/clipping, allocation cleanup/reopen");
}
