#include "platform_menu_shared.h"
#include "platform_settings.h"
#include "port-menu/port_model.h"
/* Stable PMD option IDs, same settings schema and renderer as 0.45. */
void pmd_common_adjust(unsigned id,int direction){
 int *values[]={&pmd_settings.fast_boot,&pmd_settings.show_fps,&pmd_settings.left_stick,&pmd_settings.right_stick,&pmd_settings.volume,&pmd_settings.display,&pmd_settings.filter,&pmd_settings.turbo,NULL,&pmd_settings.swap_buttons,&pmd_settings.stick_sensitivity,&pmd_settings.turbo_toggle,&pmd_settings.pause_menu,&pmd_settings.mute,NULL,&pmd_settings.menu_opacity,NULL,NULL,NULL,&pmd_settings.left_deadzone,&pmd_settings.menu_language};
 if(id>=sizeof(values)/sizeof(values[0])||!values[id])return;
 PM_Option option={.type=PM_BOOL,.value=*values[id],.minimum=0,.maximum=1,.step=1};
 if(id==4||id==15){option.type=PM_RANGE;option.minimum=id==15?6:0;option.maximum=10;}
 else if(id==5||id==10||id==19){option.type=PM_CHOICE;option.maximum=2;}
 PM_AdjustOption(&option,direction);*values[id]=option.value;
}
void pmd_common_volume(int value){pmd_settings.volume=value<0?0:value>10?10:value;}
