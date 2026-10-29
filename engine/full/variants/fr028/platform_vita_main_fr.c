/* Full-engine host entrypoint. Experimental until asset/runtime audit and boot. */
#include "platform_frame.h"
#include "platform_vita_video.h"
#include "platform_flash.h"
#include "platform_audio_game.h"
#include "platform_vita_audio.h"
#include "platform_settings.h"
#include "platform_speed.h"
#include "platform_backup.h"
#include <time.h>
#include <psp2/appmgr.h>
#include <psp2/sysmodule.h>
#include "debugScreen.h"
#include <psp2/ctrl.h>
#include <psp2/power.h>
#include <psp2/display.h>
#include <psp2/io/stat.h>
#include <psp2/kernel/processmgr.h>
#include <psp2/kernel/threadmgr.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static uint64_t frame_started,stats_started,render_time,copy_time,audio_wait_time;
static unsigned stats_frames;
static const char *settings_path="ux0:data/PMDFR0001/settings.bin";
static const char *save_path="ux0:data/PMDFR0001/game.sav";
static const char *backup_notice="Copies au prochain lancement";
static unsigned previous_buttons;
static int release_keys;
static int previous_cpu=-1,previous_bus=-1;
/* This SDK has the import stub but predates psp2/livearea.h. */
extern int sceLiveAreaReplaceAllSync(const char *contents_path);
static void refresh_livearea(void){
 const char *status_path="ux0:data/PMDFR0001/livearea-014.txt";
 int revision=0,result=-1;FILE *f=fopen(status_path,"r");
 if(f){if(fscanf(f,"%d %d",&revision,&result)!=2)revision=0;fclose(f);}
 if(revision==14&&result==0)return;
 result=sceSysmoduleLoadModule(SCE_SYSMODULE_LIVEAREA);
 if(result>=0){
  /* Refresh only this title, using the permitted app0 source directory. */
  result=sceLiveAreaReplaceAllSync("app0:/sce_sys/livearea/contents");
  sceSysmoduleUnloadModule(SCE_SYSMODULE_LIVEAREA);
 }
 /* Failures are nonfatal and retried next launch; never mark failure as done. */
 f=fopen(status_path,"w");
 if(f){fprintf(f,"14 %d\nLiveArea refresh: 0x%08x\n",result,(unsigned)result);fclose(f);}
}
static void restore_clocks(void){
 if(previous_bus>0)scePowerSetBusClockFrequency(previous_bus);
 if(previous_cpu>0)scePowerSetArmClockFrequency(previous_cpu);
 previous_cpu=previous_bus=-1;
}
extern void AgbMain(void);
static int startup_error(const char *message);
static int audio_sink(void *context,const int16_t *samples,size_t frames){
 (void)context;uint64_t start=sceKernelGetProcessTimeWide();
 int result=1;int16_t scaled[1024];
 while(frames&&result){size_t n=frames>512?512:frames;
  size_t emitted=pmd_speed_audio(scaled,samples,n);
  pmd_volume_scale(scaled,scaled,(unsigned)emitted*2);
  if(emitted)result=pmd_vita_audio_push_recovering(scaled,emitted);samples+=n*2;frames-=n;
 }
 audio_wait_time+=sceKernelGetProcessTimeWide()-start;
 if(!result){
  char message[128];snprintf(message,sizeof(message),"Audio device unavailable (error %d). Closing game.\n",pmd_vita_audio_error());
  startup_error(message);sceKernelExitProcess(1);
 }
 return result;
}
static void shutdown_game(void){
 pmd_vita_audio_close();pmd_vita_video_close();pmd_flash_close();restore_clocks();sceKernelExitProcess(0);
}

static unsigned dialog_buttons(unsigned *previous){
 SceCtrlData pad={0};sceDisplayWaitVblankStart();
 if(sceCtrlPeekBufferPositive(0,&pad,1)<=0)return 0;
 unsigned pressed=pad.buttons&~*previous;*previous=pad.buttons;return pressed;
}
static void restore_menu(void){
 PmdBackupInfo entries[3];pmd_backup_list(save_path,entries);
 unsigned selected=0,previous=~0u;char labels[3][40];const char *lines[7];
 for(int i=0;i<3;i++){
  char date[24]="date inconnue";time_t t=(time_t)entries[i].created;struct tm *tm=localtime(&t);
  if(entries[i].created&&tm)strftime(date,sizeof(date),"%d/%m/%Y %H:%M",tm);
  snprintf(labels[i],sizeof(labels[i]),"%d: %s",i+1,entries[i].valid==1?date:entries[i].valid<0?"copie invalide":"aucune copie");lines[i]=labels[i];
 }
 lines[3]="Du plus recent au plus ancien";lines[4]=backup_notice;
 for(;;){
  pmd_vita_video_dialog("COPIES DE SAUVEGARDE",lines,5,(int)selected,"X : choisir  O : retour");
  unsigned pressed=dialog_buttons(&previous);
  if(pressed&(SCE_CTRL_CIRCLE|SCE_CTRL_TRIANGLE))return;
  if(pressed&SCE_CTRL_UP)selected=(selected+2)%3;
  if(pressed&SCE_CTRL_DOWN)selected=(selected+1)%3;
  if((pressed&SCE_CTRL_CROSS)&&entries[selected].valid==1){
   const char *confirm[]={labels[selected],"Remplacer la sauvegarde?","Progres non sauve perdu.","Copie actuelle mise de cote.","Le jeu sera ferme ensuite."};
   for(;;){
    pmd_vita_video_dialog("CONFIRMER RESTAURATION",confirm,5,-1,"X : confirmer  O : annuler");
    pressed=dialog_buttons(&previous);
    if(pressed&(SCE_CTRL_CIRCLE|SCE_CTRL_TRIANGLE))break;
    if(pressed&SCE_CTRL_CROSS){
     /* No game frame or flash commit may run after attempting restoration. */
     pmd_flash_close();int ok=pmd_backup_restore(save_path,entries[selected].slot);
     const char *result[]={ok==1?"Restauration terminee.":"Restauration non terminee.",ok==1?"Relance le jeu.":pmd_backup_error(),"Copies auto conservees.","Le jeu va maintenant fermer."};
     for(;;){pmd_vita_video_dialog("RESTAURATION",result,4,-1,"X / O : fermer le jeu");if(dialog_buttons(&previous)&(SCE_CTRL_CROSS|SCE_CTRL_CIRCLE)){shutdown_game();return;}}
    }
   }
  }
 }
}

static int open_settings(int in_game){
 /* Pause only at the input boundary. Game RAM and mixer state stay intact. */
 pmd_speed_update(0);
 if(in_game&&!pmd_vita_audio_close())return 0;
 unsigned selected=0;int save_failed=0;SceCtrlData pad={0};sceCtrlPeekBufferPositive(0,&pad,1);
 unsigned previous=pad.buttons;const char *notice="Triangle : reglages en jeu";
 for(;;){
  pmd_vita_video_menu(selected,pmd_settings.fast_boot,pmd_settings.show_fps,pmd_settings.left_stick,notice);
  sceDisplayWaitVblankStart();
  sceCtrlPeekBufferPositive(0,&pad,1);unsigned pressed=pad.buttons&~previous;previous=pad.buttons;
  if(pressed&SCE_CTRL_UP)selected=(selected+8)%9;
  if(pressed&SCE_CTRL_DOWN)selected=(selected+1)%9;
  if(selected==8&&(pressed&SCE_CTRL_CROSS)){
   restore_menu();sceCtrlPeekBufferPositive(0,&pad,1);previous=pad.buttons;continue;
  }
  if(selected<8&&(pressed&(SCE_CTRL_CROSS|SCE_CTRL_LEFT|SCE_CTRL_RIGHT))){
   int *values[]={&pmd_settings.fast_boot,&pmd_settings.show_fps,&pmd_settings.left_stick,&pmd_settings.right_stick,&pmd_settings.volume,&pmd_settings.display,&pmd_settings.filter,&pmd_settings.turbo};
   int *value=values[selected];int step=(pressed&SCE_CTRL_LEFT)?-1:1;
   if(selected==4){*value+=step;if(*value<0)*value=0;if(*value>10)*value=10;}
   else if(selected==5)*value=(*value+step+3)%3;
   else *value=!*value;
  }
  if(pressed&(SCE_CTRL_CIRCLE|SCE_CTRL_TRIANGLE|SCE_CTRL_START)){
   if(save_failed&&(pressed&SCE_CTRL_START))break;
   if(pmd_settings_save(settings_path))break;
   save_failed=1;notice="Non sauve: START pour sortir";
  }
 }
 pmd_vita_video_show_hud(pmd_settings.show_fps);
 stats_started=frame_started=sceKernelGetProcessTimeWide();stats_frames=0;
 render_time=copy_time=audio_wait_time=0;previous_buttons=pad.buttons;release_keys=1;
 return !in_game||pmd_vita_audio_open();
}

static uint16_t keys(void *context){
 (void)context;pmd_right_stick_update(128,128,0);frame_started=sceKernelGetProcessTimeWide();SceCtrlData pad={0};if(sceCtrlPeekBufferPositive(0,&pad,1)<=0){pmd_speed_update(0);return 0;}unsigned b=pad.buttons;
 unsigned pressed=b&~previous_buttons;previous_buttons=b;
 if(release_keys){pmd_speed_update(0);if(!b&&(!pmd_settings.right_stick||(pad.rx>=80&&pad.rx<=176&&pad.ry>=80&&pad.ry<=176))&&(!pmd_settings.left_stick||(pad.lx>=80&&pad.lx<=176&&pad.ly>=80&&pad.ly<=176)))release_keys=0;return 0;}
 if((pressed&SCE_CTRL_TRIANGLE)||((b&(SCE_CTRL_START|SCE_CTRL_SELECT))==(SCE_CTRL_START|SCE_CTRL_SELECT)&&(pressed&(SCE_CTRL_START|SCE_CTRL_SELECT)))){
  if(!open_settings(1)){startup_error("Audio resume failed\n");sceKernelExitProcess(1);}
  return 0;
 }
 pmd_speed_update(b&SCE_CTRL_SQUARE);
 uint16_t result=0;
 if(b&SCE_CTRL_CROSS)result|=1;
 if(b&SCE_CTRL_CIRCLE)result|=2;
 if(b&SCE_CTRL_SELECT)result|=4;
 if(b&SCE_CTRL_START)result|=8;
 if(b&SCE_CTRL_RIGHT)result|=16;
 if(b&SCE_CTRL_LEFT)result|=32;
 if(b&SCE_CTRL_UP)result|=64;
 if(b&SCE_CTRL_DOWN)result|=128;
 if(b&SCE_CTRL_RTRIGGER)result|=256;
 if(b&SCE_CTRL_LTRIGGER)result|=512;
 result=pmd_stick_directions(pad.lx,pad.ly,result);
 pmd_right_stick_update(pad.rx,pad.ry,result);return result;
}
static void present(void *context,const uint32_t *pixels,uint64_t number){
 (void)context;(void)number;
 uint64_t render_finished=sceKernelGetProcessTimeWide();
 pmd_vita_video_present(pixels);
 uint64_t now=sceKernelGetProcessTimeWide();
 render_time+=render_finished-frame_started;
 copy_time+=now-render_finished;stats_frames++;
 if(!stats_started)stats_started=now;
 if(now-stats_started>=1000000){
  char first[128],second[128];
  unsigned fps10=(unsigned)((uint64_t)stats_frames*10000000/(now-stats_started));
  unsigned render10=(unsigned)(render_time/(stats_frames*100));
  unsigned copy10=(unsigned)(copy_time/(stats_frames*100));
  snprintf(first,sizeof(first),"PMD FR 0.28 | %u.%u FPS | rendu %u.%u ms | GPU %u.%u ms",fps10/10,fps10%10,render10/10,render10%10,copy10/10,copy10%10);
  unsigned audio10=(unsigned)(audio_wait_time/(stats_frames*100));
  snprintf(second,sizeof(second),"Attente son %u.%u ms/image | CPU %d MHz | reprises audio %u | %s",audio10/10,audio10%10,scePowerGetArmClockFrequency(),pmd_vita_audio_recoveries(),pmd_speed_active()?"x2 muet":"x1");
  pmd_vita_video_hud(first,second);
  stats_started=now;stats_frames=0;render_time=0;copy_time=0;audio_wait_time=0;
 }
 /* The bounded audio queue owns cadence; device playback overlaps game work. */
}
static int startup_error(const char *message){
 pmd_vita_audio_close();pmd_vita_video_close();pmd_flash_close();
 restore_clocks();psvDebugScreenInit();psvDebugScreenPuts(message);sceKernelDelayThread(5000000);return 1;
}
int main(void){
 previous_cpu=scePowerGetArmClockFrequency();previous_bus=scePowerGetBusClockFrequency();
 scePowerSetArmClockFrequency(444);scePowerSetBusClockFrequency(222);
 if(!pmd_vita_video_open())return startup_error("GPU initialization failed\n");
 sceIoMkdir("ux0:data/PMDFR0001",0777);
 refresh_livearea();
 pmd_settings_load(settings_path);
 int copied=pmd_backup_auto(save_path);
 backup_notice=copied<0?"Copie auto non effectuee":copied>0?"Copie auto verifiee":"Pas de nouvelle copie";
 pmd_vita_video_show_hud(pmd_settings.show_fps);
 sceCtrlSetSamplingMode(SCE_CTRL_MODE_ANALOG_WIDE);
 char launch[1024]={0};
 if(sceAppMgrGetAppParam(launch)>=0){
  launch[sizeof(launch)-1]=0;
  if(strstr(launch,"settings")&&!open_settings(0))return startup_error("Settings unavailable\n");
 }
 if(!pmd_flash_open(save_path))return startup_error("Save file unavailable or malformed\n");
 if(!pmd_vita_audio_open())return startup_error("Audio port initialization failed\n");
 if(!pmd_audio_game_init(audio_sink,NULL))return startup_error("Audio mixer initialization failed\n");

 PmdFrameHooks hooks={keys,present,NULL};pmd_frame_configure(&hooks);
 AgbMain();shutdown_game();return 0;
}
