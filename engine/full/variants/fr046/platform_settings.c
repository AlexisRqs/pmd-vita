#define _POSIX_C_SOURCE 200809L
#include "platform_settings.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
PmdSettings pmd_settings={1,0,1,1,10,0,0,1,0,1,0,1,0,9,1,0};
void pmd_settings_defaults(void){pmd_settings=(PmdSettings){1,0,1,1,10,0,0,1,0,1,0,1,0,9,1,0};}
int pmd_turbo_button(int held,int reset){
 static int previous,latched;
 if(reset||!pmd_settings.turbo){previous=latched=0;return 0;}
 held=!!held;if(held&&!previous)latched=!latched;previous=held;
 return pmd_settings.turbo_toggle?latched:held;
}
int pmd_fast_boot_enabled(void){return pmd_settings.fast_boot;}
static int settings_read(const char *path){
 pmd_settings_defaults();
 FILE *f=fopen(path,"rb");if(!f)return 0;
 unsigned char b[21];size_t n=fread(b,1,sizeof(b),f);int extra=fgetc(f),bad=ferror(f);
 if(fclose(f))bad=1;
 if(bad||extra!=EOF||n<8||memcmp(b,"PMDQ",4)||b[5]>1||b[6]>1||b[7]>1)return 0;
 if(b[4]==1&&n==8){pmd_settings.fast_boot=b[5];pmd_settings.show_fps=b[6];pmd_settings.left_stick=b[7];return 1;}
 if(!((b[4]==2&&n==12)||(b[4]==3&&n==13)||(b[4]==4&&n==18)||(b[4]==5&&n==19)||(b[4]==6&&n==20)||(b[4]==7&&n==21))||b[8]>1||b[9]>10||b[10]>2||b[11]>1)return 0;
 if(b[4]>=3&&b[12]>1)return 0;
 if(b[4]>=4&&(b[13]>1||b[14]>2||b[15]>1||b[16]>1||b[17]>1))return 0;
 if(b[4]>=5&&(b[18]<6||b[18]>10))return 0;
 if(b[4]>=6&&b[19]>2)return 0;
 if(b[4]>=7&&b[20]>1)return 0;
 pmd_settings=(PmdSettings){b[5],b[6],b[7],b[8],b[9],b[10],b[11],b[4]>=3?b[12]:1,b[4]>=4?b[13]:0,b[4]>=4?b[14]:1,b[4]>=4?b[15]:0,b[4]>=4?b[16]:1,b[4]>=4?b[17]:0,b[4]>=5?b[18]:9,b[4]>=6?b[19]:1,b[4]>=7?b[20]:0};return 1;
}
int pmd_settings_load(const char *path){
 if(!path||strlen(path)>1000){pmd_settings_defaults();return 0;}
 if(settings_read(path))return 1;
 char p[1024];const char *suffix[]={".bak",".tmp",".bak.tmp"};
 for(unsigned i=0;i<3;i++){snprintf(p,sizeof(p),"%s%s",path,suffix[i]);if(settings_read(p))return 1;}
 pmd_settings_defaults();return 0;
}
static int settings_protect(const char *path){
 /* Validate old settings without changing the user's currently selected values. */
 PmdSettings chosen=pmd_settings;int valid=settings_read(path);pmd_settings=chosen;if(!valid)return 1;
 FILE *in=fopen(path,"rb");if(!in)return 0;unsigned char bytes[21];size_t n=fread(bytes,1,sizeof(bytes),in);int bad=ferror(in);if(fclose(in))bad=1;if(bad)return 0;
 char temp[1040],dest[1040];snprintf(temp,sizeof(temp),"%s.bak.tmp",path);snprintf(dest,sizeof(dest),"%s.bak",path);
 FILE*out=fopen(temp,"wb");if(!out)return 0;int ok=fwrite(bytes,1,n,out)==n;if(ok&&fflush(out))ok=0;if(ok&&fsync(fileno(out)))ok=0;if(fclose(out))ok=0;
 return ok&&rename(temp,dest)==0;
}
int pmd_settings_save(const char *path){
 char temp[1024];if(!path||strlen(path)>sizeof(temp)-5)return 0;
 snprintf(temp,sizeof(temp),"%s.tmp",path);
 const unsigned char b[21]={'P','M','D','Q',7,!!pmd_settings.fast_boot,!!pmd_settings.show_fps,!!pmd_settings.left_stick,!!pmd_settings.right_stick,pmd_settings.volume,pmd_settings.display,!!pmd_settings.filter,!!pmd_settings.turbo,!!pmd_settings.swap_buttons,pmd_settings.stick_sensitivity,!!pmd_settings.turbo_toggle,!!pmd_settings.pause_menu,!!pmd_settings.mute,pmd_settings.menu_opacity,pmd_settings.left_deadzone,!!pmd_settings.menu_language};
 FILE *f=fopen(temp,"wb");if(!f)return 0;
 int ok=fwrite(b,1,sizeof(b),f)==sizeof(b);
 if(ok&&fflush(f))ok=0;
 if(ok&&fsync(fileno(f)))ok=0;
 if(fclose(f))ok=0;
 if(!ok){remove(temp);return 0;}
 if(!settings_protect(path))return 0;
 return rename(temp,path)==0;
}
uint16_t pmd_stick_directions(unsigned x,unsigned y,uint16_t digital){
 if(!pmd_settings.left_stick||(digital&0xf0))return digital;
 int zone=pmd_settings.left_deadzone==0?32:pmd_settings.left_deadzone==2?64:48;
 if((int)x<128-zone)digital|=32;else if((int)x>128+zone)digital|=16;
 if((int)y<128-zone)digital|=64;else if((int)y>128+zone)digital|=128;
 return digital;
}

static int right_direction=-1;
int pmd_right_direction(void){return right_direction;}
void pmd_right_stick_update(unsigned x,unsigned y,uint16_t movement){
 right_direction=-1;
 if(!pmd_settings.right_stick||(movement&0xf0))return;
 int zone=pmd_settings.stick_sensitivity==0?64:pmd_settings.stick_sensitivity==2?32:48;
 int dx=(int)x<128-zone?-1:(int)x>128+zone?1:0,dy=(int)y<128-zone?-1:(int)y>128+zone?1:0;
 if(dy>0)right_direction=dx<0?7:dx>0?1:0;
 else if(dy<0)right_direction=dx<0?5:dx>0?3:4;
 else if(dx)right_direction=dx<0?6:2;
}
void pmd_volume_scale(int16_t *out,const int16_t *in,unsigned samples){
 int volume=pmd_settings.mute?0:pmd_settings.volume;if(volume<0)volume=0;if(volume>10)volume=10;
 for(unsigned i=0;i<samples;i++)out[i]=(int32_t)in[i]*volume/10;
}

/* Profiles change presentation/input only. Audio preferences and menu opacity stay intact. */
int pmd_settings_apply_profile(unsigned profile){
 if(profile>2)return 0;
 pmd_settings.fast_boot=profile!=0;
 pmd_settings.show_fps=0;
 pmd_settings.display=0; /* integer 3x, original aspect ratio */
 pmd_settings.filter=0;
 pmd_settings.left_stick=profile!=0;
 pmd_settings.right_stick=profile!=0;
 pmd_settings.stick_sensitivity=1;
 pmd_settings.pause_menu=1;
 pmd_settings.swap_buttons=profile==2;
 pmd_settings.turbo=profile==2;
 pmd_settings.turbo_toggle=0;
 pmd_turbo_button(0,1);
 return 1;
}

int pmd_settings_current_profile(void){
 const PmdSettings *s=&pmd_settings;
 if(s->show_fps||s->display||s->filter||s->stick_sensitivity!=1||!s->pause_menu||s->turbo_toggle)return -1;
 for(int p=0;p<3;p++)if(s->fast_boot==(p!=0)&&s->left_stick==(p!=0)&&s->right_stick==(p!=0)&&s->swap_buttons==(p==2)&&s->turbo==(p==2))return p;
 return -1;
}
