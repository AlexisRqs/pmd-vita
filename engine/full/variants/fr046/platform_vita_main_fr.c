#include "platform_ui_locale.h"
/* Full-engine host entrypoint. Experimental until asset/runtime audit and boot. */
#include "platform_frame.h"
#include "platform_vita_video.h"
#include "platform_flash.h"
#include "platform_audio_game.h"
#include "platform_vita_audio.h"
#include "platform_settings.h"
#include "platform_menu_shared.h"
#include "port-menu/port_model.h"
#include "platform_speed.h"
#include "platform_backup.h"
#include <time.h>
#include <psp2/appmgr.h>
#include <psp2/sysmodule.h>
#include "debugScreen.h"
#include <psp2/ctrl.h>
#include <psp2/touch.h>
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
static char diagnostic_first[128]="Aucune mesure de jeu disponible.",diagnostic_second[128]="Lancer la partie pour obtenir une mesure.";
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

static int menu_active,menu_in_game,menu_audio_paused,menu_save_failed;
static unsigned menu_selected,menu_previous;
static int dialog_touch_row=-1;
static int touch_drag;
static int volume_drag, touch_blocked;
static int touch_down;static SceTouchPanelInfo touch_panel;static int touch_ready;
static unsigned menu_button(void){return pmd_settings.swap_buttons?SCE_CTRL_SQUARE:SCE_CTRL_TRIANGLE;}
static unsigned turbo_button(void){return pmd_settings.swap_buttons?SCE_CTRL_TRIANGLE:SCE_CTRL_SQUARE;}
static int touch_tap(int *x,int *y){
 SceTouchData t={0};if(!touch_ready||sceTouchPeek(SCE_TOUCH_PORT_FRONT,&t,1)<=0){touch_down=0;volume_drag=0;touch_blocked=1;return 0;}
 int down=t.reportNum>0;
 if(!down){touch_down=0;touch_blocked=0;volume_drag=0;return 0;}
 int tap=!touch_down;touch_down=tap?1:2;
 if(touch_blocked)return 0;
 if(!tap&&!touch_drag)return 0;
 int width=touch_panel.maxAaX-touch_panel.minAaX+1,height=touch_panel.maxAaY-touch_panel.minAaY+1;
 *x=((int)t.report[0].x-touch_panel.minAaX)*960/width;*y=((int)t.report[0].y-touch_panel.minAaY)*544/height;
 return *x>=0&&*x<960&&*y>=0&&*y<544;
}
static unsigned dialog_buttons(unsigned *previous){
 SceCtrlData pad={0};sceDisplayWaitVblankStart();
 if(sceCtrlPeekBufferPositive(0,&pad,1)<=0)return 0;
 unsigned pressed=pad.buttons&~*previous;*previous=pad.buttons;
 dialog_touch_row=-1;int x,y;if(touch_tap(&x,&y)){
  if(y>=470){if(x>=600)pressed|=SCE_CTRL_CROSS;else pressed|=SCE_CTRL_CIRCLE;}
  else if(x>=80&&x<880&&y>=121&&y<247)dialog_touch_row=(y-121)/42;
 }
 return pressed;
}
static void restore_menu(void){
 PmdBackupInfo entries[3];pmd_backup_list(save_path,entries);
 unsigned selected=0,previous=~0u;char labels[3][40];const char *lines[7];
 for(int i=0;i<3;i++){
  char date[24];snprintf(date,sizeof(date),"%s",pmd_ui("date inconnue"));char formatted[24];
  if(PM_FormatDate(entries[i].created,formatted,sizeof(formatted)))snprintf(date,sizeof(date),"%s",formatted);
  snprintf(labels[i],sizeof(labels[i]),"%d: %s",i+1,entries[i].valid==1?date:entries[i].valid<0?pmd_ui("copie invalide"):pmd_ui("aucune copie"));lines[i]=labels[i];
 }
 lines[3]="Du plus recent au plus ancien";lines[4]=backup_notice;
 for(;;){
  pmd_vita_video_dialog("COPIES DE SAUVEGARDE",lines,5,(int)selected,"O / toucher à gauche : retour       X / toucher à droite : choisir");
  unsigned pressed=dialog_buttons(&previous);
  if(dialog_touch_row>=0)selected=(unsigned)dialog_touch_row;
  if(pressed&(SCE_CTRL_CIRCLE|menu_button()))return;
  if(pressed&SCE_CTRL_UP)selected=(selected+2)%3;
  if(pressed&SCE_CTRL_DOWN)selected=(selected+1)%3;
  if((pressed&SCE_CTRL_CROSS)&&entries[selected].valid==1){
   const char *confirm[]={labels[selected],"Remplacer la sauvegarde?","Progres non sauve perdu.","Copie actuelle mise de cote.","Le jeu sera ferme ensuite."};
   for(;;){
    pmd_vita_video_dialog("CONFIRMER RESTAURATION",confirm,5,-1,"O / toucher à gauche : annuler       X / toucher à droite : confirmer");
    pressed=dialog_buttons(&previous);
    if(pressed&(SCE_CTRL_CIRCLE|menu_button()))break;
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

static void menu_reset_confirmation(void){
 unsigned previous=~0u;const char *lines[]={"Rétablir les options du portage ?","Ta sauvegarde restera intacte.","Les commandes et le volume seront réinitialisés."};
 for(;;){
  pmd_vita_video_dialog("Réglages par défaut",lines,3,-1,"O / toucher à gauche : annuler       X / toucher à droite : confirmer");
  unsigned pressed=dialog_buttons(&previous);
  if(pressed&(SCE_CTRL_CIRCLE|menu_button()))return;
  if(pressed&SCE_CTRL_CROSS){int language=pmd_settings.menu_language;pmd_settings_defaults();pmd_settings.menu_language=language;pmd_vita_video_notify("Réglages réinitialisés");return;}
 }
}
static void menu_profiles(void){
 unsigned selected=0,previous=~0u;
 const char *names[]={"Fidèle GBA","Confort Vita","Rapide"};
 const char *detail[]={"Croix seule, démarrage complet, accélération désactivée.","Sticks actifs, démarrage rapide, accélération désactivée.","Sticks actifs, démarrage rapide, ×2 en maintenant Triangle."};
 for(;;){
  int current=pmd_settings_current_profile();char status[100];snprintf(status,sizeof(status),pmd_ui("Profil actuel : %s"),pmd_ui(current<0?"Personnalisé":names[current]));
  const char *lines[]={names[0],names[1],names[2],status,detail[selected],"Image nette ×3 ; pause dans le menu ; FPS masqués.","Volume, sourdine et opacité conservés."};
  pmd_vita_video_dialog("Profils de réglages",lines,7,(int)selected,"O : retour           X / toucher à droite : choisir");
  unsigned pressed=dialog_buttons(&previous);
  if(pressed&(SCE_CTRL_CIRCLE|menu_button()))return;
  if(pressed&SCE_CTRL_UP)selected=(selected+2)%3;
  if(pressed&SCE_CTRL_DOWN)selected=(selected+1)%3;
  if(dialog_touch_row>=0&&dialog_touch_row<3)selected=(unsigned)dialog_touch_row;
  if(pressed&SCE_CTRL_CROSS){
   unsigned confirm_previous=~0u;touch_blocked=1;
   for(;;){
    const char *confirm[]={names[selected],detail[selected],"Image nette ×3 ; pause dans le menu ; FPS masqués.",selected==2?"Carré : menu ; Triangle : accélération.":"Triangle : menu ; accélération désactivée.","Volume, sourdine et opacité conservés.","Appliquer ces réglages ?"};
    pmd_vita_video_dialog("Confirmer le profil",confirm,6,-1,"O : annuler           X / toucher à droite : appliquer");
    unsigned choice=dialog_buttons(&confirm_previous);
    if(choice&(SCE_CTRL_CIRCLE|menu_button())){previous=~0u;touch_blocked=1;break;}
    if(choice&SCE_CTRL_CROSS){pmd_settings_apply_profile(selected);pmd_vita_video_notify("Profil appliqué");return;}
   }
  }
 }
}

static int export_diagnostic(void){
 FILE *f=fopen("ux0:data/PMDFR0001/diagnostic.txt","w");if(!f)return 0;
 int ok=fprintf(f,"PMD FR 0.46 - derniere mesure de jeu (pas une mesure du menu)\n%s\n%s\nfast_boot=%d fps=%d display=%d filter=%d volume=%d mute=%d\nleft_stick=%d left_deadzone=%d right_stick=%d right_sensitivity=%d\nturbo=%d toggle=%d swap=%d pause=%d opacity=%d\n",
 diagnostic_first,diagnostic_second,pmd_settings.fast_boot,pmd_settings.show_fps,pmd_settings.display,pmd_settings.filter,pmd_settings.volume,pmd_settings.mute,pmd_settings.left_stick,pmd_settings.left_deadzone,pmd_settings.right_stick,pmd_settings.stick_sensitivity,pmd_settings.turbo,pmd_settings.turbo_toggle,pmd_settings.swap_buttons,pmd_settings.pause_menu,pmd_settings.menu_opacity)>=0;
 if(fclose(f))ok=0;return ok;
}
static void menu_help(unsigned page){
 unsigned previous=~0u;const char *notice="X : exporter le rapport technique";
 for(;;){
  if(page==17){
   const char *lines[]={"Croix : déplacer / naviguer ; X : valider ; Rond : retour / course.",pmd_settings.swap_buttons?"Carré : menu Vita ; Triangle : accélération.":"Triangle : menu Vita ; Carré : accélération.",pmd_settings.turbo?(pmd_settings.turbo_toggle?"×2 : appui pour activer ou désactiver ; son coupé.":"×2 : maintenir le bouton ; son coupé."):"Accélération ×2 désactivée.",pmd_settings.left_stick?"Stick gauche : déplacement en jeu (croix prioritaire).":"Stick gauche désactivé.",pmd_settings.right_stick?"Stick droit : orientation en donjon, sans jouer un tour.":"Stick droit désactivé.","Menu Vita : croix pour naviguer ; L / R pour les onglets.","Tactile : toucher une option ; glisser sur le volume."};
   pmd_vita_video_dialog("Commandes actuelles",lines,7,-1,"O / bouton du menu : retour");
  }else{
   const char *lines[]={"Version 0.46 — dernière mesure avant ouverture du menu",diagnostic_first,diagnostic_second,"Le rapport contient uniquement les mesures et réglages.","Aucune sauvegarde ni donnée de partie dans le rapport.","Fichier : ux0:data/PMDFR0001/diagnostic.txt",notice};
   pmd_vita_video_dialog("Diagnostic",lines,7,-1,"O : retour       X / toucher à droite : exporter");
  }
  unsigned pressed=dialog_buttons(&previous);
  if(pressed&(SCE_CTRL_CIRCLE|menu_button()))return;
  if(page==18&&(pressed&SCE_CTRL_CROSS))notice=export_diagnostic()?"Rapport enregistré. Aucun envoi automatique.":"Échec de l'écriture du rapport.";
 }
}

static int menu_finish(unsigned buttons){
 if(!pmd_settings_save(settings_path)){menu_save_failed=1;return 0;}
 pmd_vita_video_notify("Réglages enregistrés");menu_active=0;pmd_vita_video_menu_end();previous_buttons=buttons;release_keys=1;return 1;
}
static void menu_step(SceCtrlData *pad){
 unsigned pressed=pad->buttons&~menu_previous;menu_previous=pad->buttons;
 unsigned closing_button=menu_button();int x,y;
 /* Physical controls own this update; do not replay an existing touch. */
 if(pressed){touch_blocked=1;volume_drag=0;}
 touch_drag=volume_drag;
 if(touch_tap(&x,&y)){
  if(volume_drag){
   if(x<500)x=500;if(x>820)x=820;
   pmd_common_volume((x-500+16)/32);
  }else if(y>=470)pressed|=SCE_CTRL_CIRCLE;
  else{
   int target=pmd_vita_menu_touch(menu_selected,x,y);
   if(target>=0){
    int same=menu_selected==(unsigned)target;menu_selected=(unsigned)target;
    if(y<102){}
    else if(target==4&&x>=500&&x<=820){volume_drag=1;pmd_common_volume((x-500+16)/32);}
    else if(touch_down==2){}
    else if(x>=640&&x<688&&target!=8&&target!=14&&target!=16&&target!=17&&target!=18)pressed|=SCE_CTRL_LEFT;
    else if(x>=688||(same&&x>=304&&(target==8||target==14||target==16||target==17||target==18)))pressed|=SCE_CTRL_CROSS;
   }
  }
 }
 touch_drag=0;
 if(pressed&SCE_CTRL_UP)menu_selected=pmd_vita_menu_move(menu_selected,-1,0);
 if(pressed&SCE_CTRL_DOWN)menu_selected=pmd_vita_menu_move(menu_selected,1,0);
 if(pressed&SCE_CTRL_LTRIGGER)menu_selected=pmd_vita_menu_move(menu_selected,-1,1);
 if(pressed&SCE_CTRL_RTRIGGER)menu_selected=pmd_vita_menu_move(menu_selected,1,1);
 if((menu_selected==8||menu_selected==14||menu_selected==16||menu_selected==17||menu_selected==18)&&(pressed&SCE_CTRL_CROSS)){
  if(menu_in_game&&!menu_audio_paused){pmd_vita_audio_close();menu_audio_paused=1;}
  pmd_vita_video_live_menu(0,menu_selected);
  if(menu_selected==8)restore_menu();else if(menu_selected==16)menu_profiles();else if(menu_selected==17||menu_selected==18)menu_help(menu_selected);else menu_reset_confirmation();
  sceCtrlPeekBufferPositive(0,pad,1);menu_previous=pad->buttons;volume_drag=0;touch_blocked=1;
 }else if(pressed&(SCE_CTRL_CROSS|SCE_CTRL_LEFT|SCE_CTRL_RIGHT)){
  pmd_common_adjust(menu_selected,(pressed&SCE_CTRL_LEFT)?-1:1);
 }
 if(pressed&(SCE_CTRL_CIRCLE|closing_button|SCE_CTRL_START)){
  if(menu_save_failed&&(pressed&SCE_CTRL_START)){menu_active=0;pmd_vita_video_menu_end();previous_buttons=pad->buttons;release_keys=1;}
  else menu_finish(pad->buttons);
 }
}
static int menu_run(void){
 SceCtrlData pad={0};
 for(;;){
  int paused=!menu_in_game||pmd_settings.pause_menu;
  if(menu_in_game&&paused&&!menu_audio_paused){if(!pmd_vita_audio_close())return 0;menu_audio_paused=1;}
  if(!paused&&menu_audio_paused){if(!pmd_vita_audio_open())return 0;menu_audio_paused=0;}
  pmd_vita_video_live_menu(!paused,menu_selected);
  if(paused){pmd_vita_video_menu(menu_selected,0,0,0,menu_save_failed?"Non sauve":NULL);sceDisplayWaitVblankStart();}
  if(sceCtrlPeekBufferPositive(0,&pad,1)>0)menu_step(&pad);
  if(!menu_active){
   if(menu_audio_paused){if(!pmd_vita_audio_open())return 0;menu_audio_paused=0;}
   pmd_vita_video_show_hud(pmd_settings.show_fps);stats_started=frame_started=sceKernelGetProcessTimeWide();stats_frames=0;render_time=copy_time=audio_wait_time=0;return 1;
  }
  if(menu_in_game&&!pmd_settings.pause_menu){
   if(menu_audio_paused){if(!pmd_vita_audio_open())return 0;menu_audio_paused=0;}
   pmd_vita_video_live_menu(1,menu_selected);return 1;
  }
 }
}
static int open_settings(int in_game){
 pmd_speed_update(0);pmd_turbo_button(0,1);menu_active=1;menu_in_game=in_game;menu_save_failed=0;
 SceCtrlData pad={0};sceCtrlPeekBufferPositive(0,&pad,1);menu_previous=pad.buttons;
 /* Consume contacts already held when opening; require a fresh tap. */
 int x,y;touch_drag=volume_drag=0;touch_blocked=1;touch_tap(&x,&y);pmd_vita_video_menu_begin(in_game);return menu_run();
}

static uint16_t keys(void *context){
 (void)context;pmd_right_stick_update(128,128,0);frame_started=sceKernelGetProcessTimeWide();SceCtrlData pad={0};if(sceCtrlPeekBufferPositive(0,&pad,1)<=0){pmd_speed_update(0);return 0;}unsigned b=pad.buttons;
 unsigned pressed=b&~previous_buttons;previous_buttons=b;
 if(menu_active){pmd_speed_update(0);if(!menu_run()){startup_error("Audio resume failed\n");sceKernelExitProcess(1);}return 0;}
 if(release_keys){pmd_speed_update(0);pmd_turbo_button(0,1);if(!b&&(!pmd_settings.right_stick||(pad.rx>=96&&pad.rx<=160&&pad.ry>=96&&pad.ry<=160))&&(!pmd_settings.left_stick||(pad.lx>=80&&pad.lx<=176&&pad.ly>=80&&pad.ly<=176)))release_keys=0;return 0;}
 if((pressed&menu_button())||((b&(SCE_CTRL_START|SCE_CTRL_SELECT))==(SCE_CTRL_START|SCE_CTRL_SELECT)&&(pressed&(SCE_CTRL_START|SCE_CTRL_SELECT)))){
  if(!open_settings(1)){startup_error("Audio resume failed\n");sceKernelExitProcess(1);}
  return 0;
 }
 pmd_speed_update(pmd_turbo_button(!!(b&turbo_button()),0));
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
  snprintf(first,sizeof(first),"PMD FR 0.46 | %u.%u FPS | rendu %u.%u ms | GPU %u.%u ms",fps10/10,fps10%10,render10/10,render10%10,copy10/10,copy10%10);
  unsigned audio10=(unsigned)(audio_wait_time/(stats_frames*100));
  snprintf(second,sizeof(second),"Attente son %u.%u ms/image | CPU %d MHz | reprises audio %u | %s",audio10/10,audio10%10,scePowerGetArmClockFrequency(),pmd_vita_audio_recoveries(),pmd_speed_active()?"x2 muet":"x1");
  snprintf(diagnostic_first,sizeof(diagnostic_first),pmd_ui("%u.%u FPS ; rendu %u.%u ms ; GPU %u.%u ms"),fps10/10,fps10%10,render10/10,render10%10,copy10/10,copy10%10);snprintf(diagnostic_second,sizeof(diagnostic_second),pmd_ui("Son %u.%u ms ; CPU %d MHz ; reprises %u ; %s"),audio10/10,audio10%10,scePowerGetArmClockFrequency(),pmd_vita_audio_recoveries(),pmd_speed_active()?"x2":"x1");
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
 touch_ready=sceTouchGetPanelInfo(SCE_TOUCH_PORT_FRONT,&touch_panel)>=0&&touch_panel.maxAaX>touch_panel.minAaX&&touch_panel.maxAaY>touch_panel.minAaY&&sceTouchSetSamplingState(SCE_TOUCH_PORT_FRONT,SCE_TOUCH_SAMPLING_STATE_START)>=0;
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
