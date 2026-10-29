#ifndef PMD_VITA_VIDEO_H
#define PMD_VITA_VIDEO_H
#include <stdint.h>
int pmd_vita_video_open(void);
void pmd_vita_video_present(const uint32_t *pixels);
void pmd_vita_video_hud(const char *first,const char *second);
void pmd_vita_video_close(void);
void pmd_vita_video_show_hud(int visible);
void pmd_vita_video_menu(unsigned selected,int fast,int fps,int stick,const char *notice);
void pmd_vita_video_dialog(const char *title,const char *const *lines,unsigned count,int selected,const char *footer);
void pmd_vita_video_menu_begin(int in_game);
void pmd_vita_video_menu_end(void);
unsigned pmd_vita_menu_move(unsigned selected,int direction,int tab);
void pmd_vita_video_live_menu(int active,unsigned selected);
int pmd_vita_menu_touch(unsigned selected,int x,int y);
#endif

void pmd_vita_video_notify(const char *message);
