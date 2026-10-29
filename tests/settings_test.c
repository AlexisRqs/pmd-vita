#include "platform_settings.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
int main(int argc,char **argv){
 assert(argc==2);const char *p=argv[1];remove(p);
 assert(!pmd_settings_load(p));assert(pmd_settings.fast_boot&&!pmd_settings.show_fps&&pmd_settings.left_stick);
 assert(pmd_stick_directions(128,128,0)==0);
 assert(pmd_stick_directions(79,79,0)==(32|64));
 assert(pmd_stick_directions(177,177,0)==(16|128));
 assert(pmd_stick_directions(80,176,0)==0);
 assert(pmd_stick_directions(0,0,16)==16);
 pmd_settings=(PmdSettings){0,1,0,1,5,2,1};assert(pmd_settings_save(p));
 pmd_settings=(PmdSettings){1,0,1};assert(pmd_settings_load(p));
 assert(!pmd_fast_boot_enabled()&&pmd_settings.show_fps&&!pmd_settings.left_stick);
 assert(pmd_stick_directions(0,0,1)==1);
 FILE *f=fopen(p,"wb");assert(f);fwrite("PMDQ\1\1\2\1",1,8,f);fclose(f);
 assert(!pmd_settings_load(p));assert(pmd_settings.fast_boot&&!pmd_settings.show_fps);
 assert(!pmd_settings_save("/nonexistent-pmd-test-dir/settings.bin"));
 assert(pmd_settings.volume==10&&pmd_settings.right_stick&&pmd_settings.display==0);
 f=fopen(p,"wb");assert(f);fwrite("PMDQ\1\0\1\0",1,8,f);fclose(f);
 assert(pmd_settings_load(p));assert(!pmd_settings.fast_boot&&pmd_settings.show_fps&&!pmd_settings.left_stick&&pmd_settings.volume==10&&pmd_settings.right_stick);
 pmd_settings.volume=5;pmd_settings.display=2;pmd_settings.filter=1;assert(pmd_settings_save(p));assert(pmd_settings_load(p));assert(pmd_settings.volume==5&&pmd_settings.display==2&&pmd_settings.filter==1);
 const unsigned xy[8][2]={{128,255},{255,255},{255,128},{255,0},{128,0},{0,0},{0,128},{0,255}};
 for(int i=0;i<8;i++){pmd_right_stick_update(xy[i][0],xy[i][1],0);assert(pmd_right_direction()==i);}
 pmd_right_stick_update(80,176,0);assert(pmd_right_direction()==-1);
 pmd_right_stick_update(0,0,16);assert(pmd_right_direction()==-1);
 pmd_settings.right_stick=0;pmd_right_stick_update(0,0,0);assert(pmd_right_direction()==-1);
 int16_t input[]={-32768,-100,0,100,32767},output[5];
 for(int volume=0;volume<=10;volume++){pmd_settings.volume=volume;pmd_volume_scale(output,input,5);for(int i=0;i<5;i++)assert(output[i]==(int)input[i]*volume/10);}
 remove(p);puts("PASS: persistence, invalid config fallback, independent options, stick dead zone and D-pad priority");
}
