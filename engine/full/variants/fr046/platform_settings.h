#ifndef PMD_PLATFORM_SETTINGS_H
#define PMD_PLATFORM_SETTINGS_H
#include <stdint.h>
typedef struct { int fast_boot,show_fps,left_stick,right_stick,volume,display,filter,turbo,swap_buttons,stick_sensitivity,turbo_toggle,pause_menu,mute,menu_opacity,left_deadzone,menu_language; } PmdSettings;
extern PmdSettings pmd_settings;
int pmd_settings_load(const char *path);
int pmd_settings_save(const char *path);
void pmd_settings_defaults(void);
int pmd_settings_current_profile(void);
int pmd_settings_apply_profile(unsigned profile);
int pmd_turbo_button(int held,int reset);
int pmd_fast_boot_enabled(void);
uint16_t pmd_stick_directions(unsigned x,unsigned y,uint16_t digital);
int pmd_right_direction(void);
void pmd_right_stick_update(unsigned x,unsigned y,uint16_t movement);
void pmd_volume_scale(int16_t *out,const int16_t *in,unsigned samples);
#endif
