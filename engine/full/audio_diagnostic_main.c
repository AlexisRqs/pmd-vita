/* Standalone audio comparison app. Never opens game saves or starts game logic. */
#include "platform_vita_audio.h"
#include "audio_diagnostic_source.h"
#include "audio_diagnostic_assets.h"
#include "debugScreen.h"
#include <psp2/ctrl.h>
#include <psp2/power.h>
#include <psp2/kernel/processmgr.h>
#include <psp2/kernel/threadmgr.h>
#include <stdio.h>
#include <stdlib.h>
static const char *names[]={"MIXED - musique complete","PCM - instruments echantillonnes","PSG - canaux synthetiques","SINE - sinus 440 Hz faible (-24 dBFS)","SILENCE - zeros numeriques"};
static const char *files[]={"app0:/mixed.pcm","app0:/pcm.pcm","app0:/psg.pcm"};
static int16_t *captures[3];
static void screen(unsigned mode,uint64_t frame){
 int x=0,y=0;psvDebugScreenSetCoordsXY(&x,&y);
 size_t pos=mode<3?(size_t)(frame%(PMD_DIAG_CAPTURE_FRAMES+PMD_DIAG_GAP)):0;
 psvDebugScreenPrintf("PMD AUDIO DIAGNOSTIC 1.00 - application separee\n\n");
 psvDebugScreenPrintf("Mode %u/5 : %-62s\n",mode+1,names[mode]);
 psvDebugScreenPrintf("Croix : mode suivant    START : quitter\n\n");
 psvDebugScreenPrintf("Temps : %llu.%01llu s   Reprises audio : %u           \n",(unsigned long long)(frame/48000),(unsigned long long)(frame%48000/4800),pmd_vita_audio_recoveries());
 psvDebugScreenPrintf("%-78s\n",mode<3?(pos>=PMD_DIAG_CAPTURE_FRAMES?"PAUSE DE BOUCLE : 0.5 s de silence volontaire":"LECTURE : capture 5 s, fondus de 20 ms aux deux extremites"):(mode==PMD_DIAG_SINE?"Sinus continu : aucune boucle audible ni pause periodique":"Silence continu : aucun signal produit"));
 psvDebugScreenPrintf("Meme sortie audio que le jeu 0.12, CPU 444 MHz.\n");
 psvDebugScreenPrintf("Un changement de mode interrompt volontairement la lecture.\n");
 psvDebugScreenPrintf("Aucune sauvegarde de jeu lue ou modifiee.\n");
}
int main(void){
 int result=1;int original_clock=scePowerGetArmClockFrequency();
 psvDebugScreenInit();
 if(scePowerSetArmClockFrequency(444)<0){psvDebugScreenPuts("Impossible de regler le CPU\n");goto cleanup;}
 for(unsigned i=0;i<3;i++){
  FILE *f=fopen(files[i],"rb");
  if(!f){psvDebugScreenPuts("Capture audio absente\n");goto cleanup;}
  captures[i]=malloc(PMD_DIAG_CAPTURE_FRAMES*4);
  int ok=captures[i]&&fread(captures[i],4,PMD_DIAG_CAPTURE_FRAMES,f)==PMD_DIAG_CAPTURE_FRAMES;
  if(ok)ok=fgetc(f)==EOF&&!ferror(f);
  if(fclose(f))ok=0;
  if(!ok){psvDebugScreenPuts("Capture audio invalide\n");goto cleanup;}
 }
 pmd_diag_source_init();
 if(!pmd_vita_audio_open()){psvDebugScreenPuts("Ouverture audio impossible\n");goto cleanup;}
 sceCtrlSetSamplingMode(SCE_CTRL_MODE_DIGITAL);
 unsigned mode=0,previous=0,display_counter=0;uint64_t position=0;
 screen(mode,position);
 for(;;){
  SceCtrlData pad={0};sceCtrlPeekBufferPositive(0,&pad,1);
  unsigned pressed=pad.buttons&~previous;previous=pad.buttons;
  if(pressed&SCE_CTRL_START){result=0;break;}
  if(pressed&SCE_CTRL_CROSS){
   if(!pmd_vita_audio_close()){psvDebugScreenPuts("Fermeture audio impossible\n");goto cleanup;}
   if(!pmd_vita_audio_open()){psvDebugScreenPuts("Reouverture audio impossible\n");goto cleanup;}
   mode=(mode+1)%PMD_DIAG_MODES;position=0;display_counter=0;screen(mode,position);
  }
  int16_t samples[800*2];
  pmd_diag_render(mode,mode<3?captures[mode]:NULL,PMD_DIAG_CAPTURE_FRAMES,position,samples,800);
  if(!pmd_vita_audio_push_recovering(samples,800)){psvDebugScreenPuts("Erreur sortie audio\n");goto cleanup;}
  position+=800;
  if(++display_counter>=15){display_counter=0;screen(mode,position);}
 }
cleanup:
 pmd_vita_audio_close();
 for(unsigned i=0;i<3;i++)free(captures[i]);
 if(original_clock>0)scePowerSetArmClockFrequency(original_clock);
 if(result)sceKernelDelayThread(4000000);
 sceKernelExitProcess(result);return result;
}
