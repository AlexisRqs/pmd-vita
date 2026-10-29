#include "platform_speed.h"
#include "platform_settings.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
int main(int argc,char **argv){
 assert(argc==2);int16_t in[1024],out[1024];for(int i=0;i<1024;i++)in[i]=i%2?-12000:16000;
 assert(!pmd_speed_active());assert(pmd_speed_audio(out,in,512)==512&&!memcmp(out,in,sizeof(in)));
 pmd_speed_update(1);assert(pmd_speed_active());int draws=0;for(int i=0;i<120;i++)draws+=pmd_speed_draw_frame();assert(draws==60);
 size_t n=pmd_speed_audio(out,in,511);assert(n==255);for(int i=256;i<510;i++)assert(out[i]==0);
 assert(pmd_speed_audio(out,in,1)==1);assert(out[0]==0&&out[1]==0);
 pmd_speed_update(0);assert(pmd_speed_audio(out,in,512)==512);assert(out[0]==125&&out[1]==-93);assert(!memcmp(out+256,in+256,sizeof(in)-512));assert(pmd_speed_draw_frame());
 pmd_settings.turbo=0;pmd_speed_update(1);assert(!pmd_speed_active());assert(pmd_speed_audio(out,in,512)==512&&!memcmp(out,in,sizeof(in)));
 unsigned char v2[]={ 'P','M','D','Q',2,0,1,0,1,7,2,1 };FILE*f=fopen(argv[1],"wb");assert(f);assert(fwrite(v2,1,12,f)==12);fclose(f);
 assert(pmd_settings_load(argv[1]));assert(pmd_settings.turbo&&pmd_settings.volume==7&&pmd_settings.display==2&&!pmd_settings.fast_boot);
 pmd_settings.turbo=0;assert(pmd_settings_save(argv[1]));assert(pmd_settings_load(argv[1])&&!pmd_settings.turbo);remove(argv[1]);
 puts("PASS: exact normal audio, 2:1 pacing, odd sample carry, mute/ramp transitions, release, disabled option, v2 migration and v3 persistence");
}
