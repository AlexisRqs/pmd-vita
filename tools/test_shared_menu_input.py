from pathlib import Path
import subprocess,json
import tempfile, atexit, shutil
root=Path(__file__).resolve().parents[1]
base=root/'engine/full'
out=Path(tempfile.mkdtemp(prefix='pmd-menu-input-'))
atexit.register(shutil.rmtree, out)
def function(s,name):
 start=s.index('static ',s.index(name)-20);brace=s.index('{',s.index(name));level=1;i=brace+1
 while level:
  level+=(s[i]=='{')-(s[i]=='}');i+=1
 return s[start:i]
s=(base/'variants/fr046/platform_vita_main_fr.c').read_text()
prefix=r'''
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "platform_settings.h"
#include "platform_menu_shared.h"
#include "port-menu/port_model.h"
#include "platform_ui_locale.h"
static void pmd_vita_video_notify(const char *s){}
typedef struct {unsigned buttons;} SceCtrlData;
typedef struct {int minAaX,maxAaX,minAaY,maxAaY;} SceTouchPanelInfo;
typedef struct {int reportNum;struct {int x,y;} report[1];} SceTouchData;
enum {SCE_TOUCH_PORT_FRONT=0,SCE_CTRL_CIRCLE=1,SCE_CTRL_CROSS=2,SCE_CTRL_UP=4,SCE_CTRL_DOWN=8,SCE_CTRL_LEFT=16,SCE_CTRL_RIGHT=32,SCE_CTRL_LTRIGGER=64,SCE_CTRL_RTRIGGER=128,SCE_CTRL_TRIANGLE=256,SCE_CTRL_START=512};
static int touch_drag,volume_drag,touch_blocked,touch_down,touch_ready=1;
static SceTouchPanelInfo touch_panel={0,959,0,543};static SceTouchData feed;static int feed_ok=1;
static int menu_active=1,menu_in_game,menu_audio_paused,menu_save_failed,previous_buttons,release_keys,closed,dialogs;
static unsigned menu_selected,menu_previous;
static int sceTouchPeek(int port,SceTouchData*t,int count){*t=feed;return feed_ok;}
static int sceCtrlPeekBufferPositive(int port,SceCtrlData*p,int count){return 1;}
static unsigned menu_button(void){return SCE_CTRL_TRIANGLE;}
static int pmd_vita_audio_close(void){return 1;}
static void pmd_vita_video_live_menu(int live,int selected){}
static void pmd_vita_video_menu_end(void){}
static void restore_menu(void){dialogs++;}
static void menu_reset_confirmation(void){dialogs++;}
static void menu_help(unsigned p){dialogs++;}
static void menu_profiles(void){dialogs++;}
static int menu_finish(unsigned b){closed++;menu_active=0;return 1;}
'''
video=(base/'platform_vita_video.c').read_text();a=video.index('static const unsigned menu_ids');b=video.index('void pmd_vita_video_menu_begin',a)
prefix=prefix.replace('static void menu_profiles(void){dialogs++;}', """
static int dialog_touch_row=-1, event_index;
static unsigned events[8];
static unsigned dialog_buttons(unsigned *previous){assert(event_index<8);return events[event_index++];}
static void pmd_vita_video_dialog(const char*t,const char*const*l,unsigned n,int selected,const char*f){}
""")
body=prefix+video[a:b]+function(s,'touch_tap(')+'\n'+function(s,'menu_profiles(')+'\n'+function(s,'menu_step(')
tests=r'''
static void step(unsigned buttons,int n,int x,int y){feed=(SceTouchData){.reportNum=n,.report={{x,y}}};SceCtrlData pad={buttons};menu_step(&pad);}
static void reset(void){pmd_settings_defaults();menu_selected=menu_previous=0;touch_drag=volume_drag=touch_down=touch_blocked=0;closed=dialogs=0;menu_active=1;memset(shared_nav.remembered,0,sizeof(shared_nav.remembered));}
int main(void){
 reset();menu_selected=20;step(SCE_CTRL_CROSS,0,0,0);assert(pmd_settings.menu_language==1);step(0,0,0,0);step(SCE_CTRL_RIGHT,0,0,0);assert(!pmd_settings.menu_language);
 reset();pmd_settings.left_stick=pmd_settings.right_stick=0;assert(pmd_vita_menu_move(3,1,0)==9);assert(pmd_vita_menu_touch(9,100,245)==-1);

 reset();menu_previous=SCE_CTRL_TRIANGLE;
 step(SCE_CTRL_TRIANGLE,0,800,500);assert(!closed);step(0,0,800,500);assert(!closed);
 step(SCE_CTRL_DOWN,0,800,500);assert(menu_selected==7&&!closed);step(0,0,100,125);assert(menu_selected==7);
 step(SCE_CTRL_DOWN,0,100,125);assert(menu_selected==11);step(0,0,100,125);assert(menu_selected==11);
 step(SCE_CTRL_RTRIGGER,0,90,80);assert(menu_selected==9);step(0,0,90,80);assert(menu_selected==9);
 reset();step(0,1,100,130);assert(menu_selected==0);step(SCE_CTRL_DOWN,1,100,130);assert(menu_selected==7);step(0,1,100,130);assert(menu_selected==7);
 step(0,0,0,0);step(0,1,100,130);assert(menu_selected==0);
 reset();touch_blocked=1;step(0,1,800,500);assert(!closed);step(0,0,0,0);step(0,1,800,500);assert(closed==1);
 reset();step(0,1,580,80);step(0,0,0,0);assert(menu_selected==4);
 step(0,1,660,150);assert(volume_drag&&pmd_settings.volume==5);step(0,1,500,150);assert(pmd_settings.volume==0);
 step(0,1,900,500);assert(pmd_settings.volume==10&&!closed); // captured drag never activates footer
 step(SCE_CTRL_LTRIGGER,1,600,150);assert(!volume_drag&&menu_selected==5);step(0,1,600,150);assert(menu_selected==5&&pmd_settings.volume==10);
 step(0,0,0,0);assert(!touch_blocked);
 step(SCE_CTRL_TRIANGLE,0,0,0);assert(closed==1);
 reset();feed_ok=0;step(0,1,800,500);assert(!closed);feed_ok=1;step(0,1,800,500);assert(!closed);step(0,0,0,0);step(0,1,800,500);assert(closed==1);
 reset();step(0,1,400,320);assert(menu_selected==16);step(0,0,0,0);events[0]=SCE_CTRL_CIRCLE;event_index=0;step(SCE_CTRL_CROSS,0,0,0);assert(event_index==1&&!closed);
 reset();pmd_settings.turbo=1;events[0]=SCE_CTRL_CROSS;events[1]=SCE_CTRL_CIRCLE;events[2]=SCE_CTRL_CIRCLE;event_index=0;menu_profiles();assert(pmd_settings.turbo==1&&event_index==3);
 events[0]=SCE_CTRL_DOWN;events[1]=SCE_CTRL_DOWN;events[2]=SCE_CTRL_CROSS;events[3]=SCE_CTRL_CROSS;event_index=0;menu_profiles();assert(pmd_settings.swap_buttons&&pmd_settings.turbo&&!pmd_settings.turbo_toggle&&event_index==4);
 reset();pmd_settings.turbo=0;assert(visible_count(0)==6);assert(pmd_vita_menu_move(7,1,0)==1);assert(pmd_vita_menu_move(1,-1,0)==7);assert(pmd_vita_menu_touch(7,400,200)==1);assert(pmd_vita_menu_touch(7,400,360)==-1);
 pmd_settings.turbo=1;assert(pmd_vita_menu_move(7,1,0)==11);assert(pmd_vita_menu_touch(7,400,200)==11);
 pmd_vita_menu_move(11,1,1);pmd_settings.turbo=0;assert(pmd_vita_menu_move(9,-1,1)!=11);
 for(unsigned i=0,sel=0;i<30;i++){sel=pmd_vita_menu_move(sel,1,0);assert(sel!=11);}
 puts("PASS: empty/stale reports, opening held button, D-pad, L/R, held touch arbitration, volume capture and release");
}
'''
(out/'input_test.c').write_text(body+tests)
subprocess.run(['clang','-std=c11','-fsanitize=address,undefined','-fno-sanitize-recover=all','-I',str(base),str(out/'input_test.c'),str(base/'platform_settings.c'),str(base/'platform_menu_shared.c'),str(base/'port-menu/port_model.c'),'-o',str(out/'input-test')],check=True)
subprocess.run([str(out/'input-test')],check=True)
(out/'input-report.json').write_text(json.dumps({'ok':True,'actual_functions_extracted':True,'asan_ubsan':True,'real_files_accessed':False,'console_tested':False},indent=2))
