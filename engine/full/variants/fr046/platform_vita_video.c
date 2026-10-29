static void ui_notification(void);
#include "platform_ui_locale.h"
#include "platform_vita_video.h"
#include "platform_settings.h"
#include "port-menu/port_model.h"
#include "platform_speed.h"
#include "debugScreen.h"
#include <vita2d.h>
#include <string.h>
#include <stdio.h>
static vita2d_texture *game_texture,*hud_texture;
static int initialized,hud_dirty;
static int hud_visible=1;
static int active_filter,has_frame,menu_background;
static vita2d_pgf *menu_font;
static int live_menu;static unsigned live_selected;
void pmd_vita_video_live_menu(int active,unsigned selected){live_menu=active;live_selected=selected;}
static uint32_t hud_pixels[960*32];
void pmd_vita_video_close(void){
 if(!initialized)return;
 vita2d_wait_rendering_done();
 if(game_texture)vita2d_free_texture(game_texture);
 if(hud_texture)vita2d_free_texture(hud_texture);
 if(menu_font)vita2d_free_pgf(menu_font);menu_font=NULL;
 game_texture=hud_texture=NULL;has_frame=menu_background=0;vita2d_fini();initialized=0;
}
int pmd_vita_video_open(void){
 if(initialized)return 0;
 if(vita2d_init()!=1)return 0;
 initialized=1;
 /* The audio queue owns cadence. Vita2d owns display buffers and their sync. */
 vita2d_set_vblank_wait(0);vita2d_set_clear_color(0xff000000u);
 active_filter=0;
 game_texture=vita2d_create_empty_texture(240,160);
 hud_texture=vita2d_create_empty_texture(960,32);
 if(!game_texture||!hud_texture){pmd_vita_video_close();return 0;}
 vita2d_texture_set_filters(game_texture,SCE_GXM_TEXTURE_FILTER_POINT,SCE_GXM_TEXTURE_FILTER_POINT);
 vita2d_texture_set_filters(hud_texture,SCE_GXM_TEXTURE_FILTER_POINT,SCE_GXM_TEXTURE_FILTER_POINT);
 pmd_vita_video_hud("PMD 0.13 | GPU | mesure FPS en cours","");return 1;
}
static void hud_line(const char *text,unsigned y){
 const PsvDebugScreenFont *font=psvDebugScreenGetFont();
 if(!font||font->width!=8||font->height!=8)return;
 for(unsigned x=0;*text&&x+8<=960;text++,x+=8){
  unsigned ch=(unsigned char)*text;if(ch<font->first||ch>font->last)ch='?';
  const unsigned char *glyph=font->glyphs+(ch-font->first)*8;
  for(unsigned row=0;row<8;row++)for(unsigned bit=0;bit<8;bit++)
   if(glyph[row]&(0x80u>>bit))hud_pixels[(y+row)*960+x+bit]=0xffffffffu;
 }
}
void pmd_vita_video_hud(const char *first,const char *second){
 for(unsigned i=0;i<960*32;i++)hud_pixels[i]=0xff000000u;
 hud_line(first,0);hud_line(second,16);hud_dirty=1;
}
static void upload(vita2d_texture *texture,const uint32_t *pixels,unsigned width,unsigned height){
 unsigned stride=vita2d_texture_get_stride(texture);
 unsigned char *dest=vita2d_texture_get_datap(texture);
 for(unsigned y=0;y<height;y++)memcpy(dest+y*stride,pixels+y*width,width*4);
}
/* Small ×2 badge in the right black margin, outside every game scale and HUD. */
static void speed_badge(void){
 static const unsigned char glyph[2][7]={{0,17,10,4,10,17,0},{14,17,1,2,4,8,31}};
 vita2d_draw_rectangle(916,40,36,20,0xb0000000u);
 for(unsigned ch=0;ch<2;ch++)for(unsigned y=0;y<7;y++)for(unsigned x=0;x<5;x++)
  if(glyph[ch][y]&(16u>>x))vita2d_draw_rectangle(921+ch*14+x*2,43+y*2,2,2,0xffa8e8ffu);
}
void pmd_vita_video_present(const uint32_t *pixels){
 /* A texture is never changed while the previous GPU submission can read it. */
 vita2d_wait_rendering_done();
 if(active_filter!=!!pmd_settings.filter){
  active_filter=!!pmd_settings.filter;
  SceGxmTextureFilter filter=active_filter?SCE_GXM_TEXTURE_FILTER_LINEAR:SCE_GXM_TEXTURE_FILTER_POINT;
  vita2d_texture_set_filters(game_texture,filter,filter);
 }
 upload(game_texture,pixels,240,160);has_frame=1;
 if(hud_dirty){upload(hud_texture,hud_pixels,960,32);hud_dirty=0;}
 if(live_menu){pmd_vita_video_menu(live_selected,pmd_settings.fast_boot,pmd_settings.show_fps,pmd_settings.left_stick,NULL);return;}
 vita2d_start_drawing();vita2d_clear_screen();
 float scale=pmd_settings.display==1?3.4f:pmd_settings.display==2?2.0f:3.0f;
 float x=(960-240*scale)/2,y=pmd_settings.display==0?32:(544-160*scale)/2;
 vita2d_draw_texture_scale(game_texture,x,y,scale,scale);
 if(hud_visible)vita2d_draw_texture(hud_texture,0,0);
 if(pmd_speed_active())speed_badge();
 ui_notification();
 vita2d_end_drawing();vita2d_swap_buffers();
}

void pmd_vita_video_show_hud(int visible){hud_visible=!!visible;}
/* Paused overlay: game_texture remains untouched until normal play resumes. */
static const char *notification;
static unsigned notification_frames;
void pmd_vita_video_notify(const char *message){notification=message;notification_frames=120;}
static void ui_notification(void);
static const unsigned menu_ids[6][7]={{0,7,11,1,12,16,14},{9,2,3,10,19},{5,6,15},{4,13},{8},{20,17,18}};
static int visible_setting(unsigned id){return !(id==11&&!pmd_settings.turbo)&&!(id==10&&!pmd_settings.right_stick)&&!(id==19&&!pmd_settings.left_stick);}
static bool shared_visible(unsigned id,void*ctx){(void)ctx;return visible_setting(id)!=0;}
static const PM_Group shared_groups[]={{menu_ids[0],7},{menu_ids[1],5},{menu_ids[2],3},{menu_ids[3],2},{menu_ids[4],1},{menu_ids[5],3}};
static PM_Nav shared_nav={.groups=shared_groups,.count=6,.visible=shared_visible};
static unsigned visible_count(unsigned group){return PM_NavCount(&shared_nav,group);}
static unsigned visible_id(unsigned group,unsigned row){return PM_NavAt(&shared_nav,group,row);}
static unsigned menu_group(unsigned selected){return PM_NavGroup(&shared_nav,selected);}
static unsigned remembered_id(unsigned group){return PM_NavRecall(&shared_nav,group);}
unsigned pmd_vita_menu_move(unsigned selected,int direction,int tab){
 if(!visible_setting(selected))selected=selected==11?7:selected==10?3:2;
 return PM_NavMove(&shared_nav,selected,direction,tab!=0);
}
int pmd_vita_menu_touch(unsigned selected,int x,int y){
 if(x>=80&&x<880&&y>=58&&y<102){unsigned group=(x-80)*6/800;return remembered_id(group);}
 unsigned group=menu_group(selected);
 if(x>=80&&x<880&&y>=122&&y<122+(int)visible_count(group)*38)return visible_id(group,(y-122)/38);
 return -1;
}
void pmd_vita_video_menu_begin(int in_game){menu_background=in_game&&has_frame;}
void pmd_vita_video_menu_end(void){menu_background=0;live_menu=0;}
static void ui_text(int x,int y,const char *text,unsigned color,float scale){
 text=pmd_ui(text);
 if(menu_font){int width=vita2d_pgf_text_width(menu_font,scale,text);if(width>880-x&&width>0)scale*=((float)(880-x))/width;vita2d_pgf_draw_text(menu_font,x,y,color,scale,text);return;}
 /* Readable fallback if the system font could not be loaded. */
 const PsvDebugScreenFont *font=psvDebugScreenGetFont();if(!font)return;
 for(;*text&&x<910;text++){
  unsigned ch=(unsigned char)*text;if((ch&0xc0)==0x80)continue;
  if(ch<font->first||ch>font->last)ch='?';
  const unsigned char *glyph=font->glyphs+(ch-font->first)*8;
  for(unsigned r=0;r<8;r++)for(unsigned c=0;c<8;c++)if(glyph[r]&(0x80>>c))vita2d_draw_rectangle(x+c*2,y-16+r*2,2,2,color);
  x+=16;
 }
}
static void ui_begin(const char *title){
 vita2d_wait_rendering_done();
 if(!menu_font)menu_font=vita2d_load_default_pgf();
 int filter=!!pmd_settings.filter;
 if(active_filter!=filter){active_filter=filter;SceGxmTextureFilter f=filter?SCE_GXM_TEXTURE_FILTER_LINEAR:SCE_GXM_TEXTURE_FILTER_POINT;vita2d_texture_set_filters(game_texture,f,f);}
 vita2d_start_drawing();vita2d_clear_screen();
 if(menu_background){
  float scale=pmd_settings.display==1?3.4f:pmd_settings.display==2?2:3;
  vita2d_draw_texture_scale(game_texture,(960-240*scale)/2,pmd_settings.display==0?32:(544-160*scale)/2,scale,scale);
  vita2d_draw_rectangle(0,0,960,544,0x50000000u);
 }else vita2d_draw_rectangle(0,0,960,544,0xff282016u);
 vita2d_draw_rectangle(56,36,848,472,((unsigned)(pmd_settings.menu_opacity*255/10)<<24)|0x002e241bu);
 vita2d_draw_rectangle(56,36,848,3,0xff8bcbea);
 if(title){ui_text(80,79,title,0xffd0edff,1.35f);
 ui_text(80,105,menu_background?(live_menu?"Jeu en cours · commandes réservées au menu":"Partie en pause"):"Réglages du portage",0xffc3beb3,0.85f);
 vita2d_draw_rectangle(80,120,800,1,0x506f8d99);}
}
static void ui_notification(void){
 if(!notification_frames||!menu_font)return;
 notification_frames--;vita2d_draw_rectangle(280,510,400,30,0xe02e241b);ui_text(296,532,notification,0xffa8deff,0.8f);
}
static void ui_end(const char *footer){
 vita2d_draw_rectangle(80,470,800,1,0x506f8d99);
 ui_text(80,494,footer,0xffded9ce,0.85f);
 ui_notification();
 vita2d_end_drawing();vita2d_swap_buffers();
}
void pmd_vita_video_menu(unsigned selected,int fast,int fps,int stick,const char *notice){
 (void)fast;(void)fps;(void)stick;if(selected>20)selected=0;if(!visible_setting(selected))selected=selected==11?7:selected==10?3:2;
 const char *tabs[]={"Jeu","Commandes","Image","Son","Sauvegardes","Aide"};
 const char *names[]={"Démarrage rapide","Afficher les FPS","Stick gauche","Stick droit : orientation","Volume","Taille de l'image","Filtre d'image","Accélération ×2","Copies et restauration","Menu / Accélération","Sensibilité stick droit","Activation du ×2","Pause dans le menu","Couper le son","Réglages par défaut","Opacité du menu","Profils de réglages","Commandes actuelles","Diagnostic","Zone morte stick gauche","Langue du menu"};
 const char *help[]={"Au prochain lancement : accès direct à l'écran titre.","Le petit indicateur ×2 reste visible même sans les FPS.","Déplacement ; la croix directionnelle reste prioritaire.","Change de direction en donjon, sans jouer un tour.","Conserve ce volume même quand le son est coupé.","Proportions conservées ; aperçu immédiat derrière le menu.","Net : pixels précis. Lissé : contours adoucis.","Vitesse ×2 visée. Le son est coupé pendant l'accélération.","Trois copies datées ; confirmation avant toute restauration.","Inverser facilite le maintien de Triangle avec Rond.","Forte : moins de course nécessaire. Faible : moins sensible.","Bascule : un appui active, un autre désactive le ×2.","Désactivée : animations en cours, commandes du jeu bloquées.","Coupe le son sans modifier la valeur du volume.","Confirmation requise. Aucun changement de sauvegarde.","De 60 % à 100 %. Le jeu reste visible autour du panneau.","Fidèle GBA, Confort Vita ou Rapide : aperçu avant application.","Voir les commandes adaptées aux réglages actuels.","Dernière mesure de jeu ; export technique sur demande.","Grande : limite les mouvements involontaires. Petite : plus réactif.","Uniquement le menu Vita ; la langue du jeu ne change pas."};
 unsigned group=menu_group(selected);ui_begin(NULL);
 for(unsigned i=0;i<6;i++){
  if(i==group)vita2d_draw_rectangle(80+i*800/6,58,129,44,0xb0625135);
  ui_text(88+i*800/6,87,tabs[i],i==group?0xffd0edff:0xffc3beb3,0.9f);
 }

 for(unsigned row=0;row<visible_count(group);row++){
  unsigned id=visible_id(group,row);int y=122+row*38;char value[64];
  const int flags[]={pmd_settings.fast_boot,pmd_settings.show_fps,pmd_settings.left_stick,pmd_settings.right_stick};
  if(id<4)snprintf(value,sizeof(value),"%s",flags[id]?"Oui":"Non");
  else if(id==4)snprintf(value,sizeof(value),"%d %%",pmd_settings.volume*10);
  else if(id==5)snprintf(value,sizeof(value),"%s",pmd_settings.display==1?"Maximum":pmd_settings.display==2?"2×":"3×");
  else if(id==6)snprintf(value,sizeof(value),"%s",pmd_settings.filter?"Lissé":"Net");
  else if(id==7)snprintf(value,sizeof(value),"%s",pmd_settings.turbo?"Oui":"Non");
  else if(id==9)snprintf(value,sizeof(value),"%s",pmd_settings.swap_buttons?"Carré / Triangle":"Triangle / Carré");
  else if(id==10)snprintf(value,sizeof(value),"%s",pmd_settings.stick_sensitivity==0?"Faible":pmd_settings.stick_sensitivity==2?"Forte":"Normale");
  else if(id==11)snprintf(value,sizeof(value),"%s",pmd_settings.turbo_toggle?"Bascule":"Maintien");
  else if(id==12)snprintf(value,sizeof(value),"%s",pmd_settings.pause_menu?"Oui":"Non");
  else if(id==19)snprintf(value,sizeof(value),"%s",pmd_settings.left_deadzone==0?"Petite":pmd_settings.left_deadzone==2?"Grande":"Normale");
  else if(id==15)snprintf(value,sizeof(value),"%d %%",pmd_settings.menu_opacity*10);
  else if(id==13)snprintf(value,sizeof(value),"%s",pmd_settings.mute?"Oui":"Non");
  else if(id==20)snprintf(value,sizeof(value),"%s",pmd_settings.menu_language?"Français":"English");
  else if(id==16){int profile=pmd_settings_current_profile();snprintf(value,sizeof(value),"%s",profile<0?"Personnalisé":profile==0?"Fidèle GBA":profile==1?"Confort Vita":"Rapide");}
  else snprintf(value,sizeof(value),"Ouvrir");
  if(id==selected){vita2d_draw_rectangle(80,y,800,36,0xc0635033);vita2d_draw_rectangle(80,y,3,36,0xff8bcbea);}
  ui_text(100,y+27,names[id],0xfff4eee3,0.90f);
  int toggle=id<4||id==7||id==12||id==13;
  int action=id==8||id==14||id==16||id==17||id==18;
  if(toggle){
   int on=!strcmp(value,"Oui");
   vita2d_draw_rectangle(796,y+9,52,22,on?0xffbd9865:0xff75685a);
   vita2d_draw_rectangle(on?825:799,y+12,20,16,0xfff4eee3);
  }else{
   int width=menu_font?vita2d_pgf_text_width(menu_font,0.82f,pmd_ui(value)):(int)strlen(pmd_ui(value))*16;
   if(action)vita2d_draw_rectangle(824-width,y+5,width+28,27,0xff574535);
   ui_text(838-width,y+26,value,0xffa8deff,0.82f);
   if(!action){ui_text(648,y+26,"‹",0xffa8deff,1);ui_text(856,y+26,"›",0xffa8deff,1);}
  }
  if(id==4){vita2d_draw_rectangle(500,y+30,320,5,0xff655a4a);vita2d_draw_rectangle(500,y+30,pmd_settings.volume*32,5,0xffa8deff);}

 }
 vita2d_draw_rectangle(80,402,800,54,0x80332a20);
 ui_text(96,426,help[selected],0xffded9ce,0.74f);
 if(group==4){ui_text(100,205,"Copies automatiques au lancement.",0xffc3beb3,0.9f);ui_text(100,238,"La restauration ferme ensuite le jeu.",0xffc3beb3,0.9f);}
 char footer[160];snprintf(footer,sizeof(footer),pmd_ui("L/R : onglet · X : choisir · O / %s : retour"),pmd_ui(pmd_settings.swap_buttons?"Carré":"Triangle"));
 ui_end(notice&&strncmp(notice,"Non sauve",9)==0?"Non enregistré · START : sortir quand même":footer);
}
void pmd_vita_video_dialog(const char *title,const char *const *lines,unsigned count,int selected,const char *footer){
 ui_begin(title);
 for(unsigned i=0;i<count&&i<7;i++){
  int y=145+i*42;
  if((int)i==selected){vita2d_draw_rectangle(80,y-24,800,36,0xc0635033);vita2d_draw_rectangle(80,y-24,3,36,0xff8bcbea);}
  ui_text(100,y+2,lines[i],(int)i==selected?0xffa8deff:0xfff4eee3,1.0f);
 }
 ui_end(footer);
}
