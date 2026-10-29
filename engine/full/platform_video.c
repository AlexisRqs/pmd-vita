#include "platform_video.h"
#include "platform_memory.h"
#include <string.h>
/* A pixel travels in one ARM register (the old five-word struct forced
 * stack copies/structure returns in every background and ordering operation).
 * Bits16..21 are a sortable priority key: OBJ wins ties, then BG0..BG3. */
typedef uint32_t Pixel;
#define PIXEL_COLOR(p) ((p)&0x7fffu)
#define PIXEL_LAYER(p) (((p)>>22)&7u)
#define PIXEL_PRIORITY(p) (((p)>>19)&7u)
#define PIXEL_SEMI(p) ((p)&(1u<<25))
static Pixel pixel(unsigned color,unsigned priority,unsigned layer,unsigned semi){
 unsigned rank=layer==4?0:layer+1;
 return color|((priority*8+rank)<<16)|(layer<<22)|(semi<<25)|0x80000000u;
}
static unsigned read16(const void *base,unsigned offset){uint16_t v;memcpy(&v,(const char*)base+offset,2);return v;}
static unsigned reg(unsigned o){return read16(pmd_io_words,o);}
static unsigned pal(unsigned i){return read16(pmd_palette_words,(i&511)*2)&0x7fff;}
static unsigned vram(unsigned i){return ((const unsigned char*)pmd_vram_words)[i];}
static uint32_t rgba(unsigned c){unsigned r=c&31,g=(c>>5)&31,b=(c>>10)&31;return 0xff000000u|((r<<3)|(r>>2))|(((g<<3)|(g>>2))<<8)|(((b<<3)|(b>>2))<<16);}
static unsigned min16(unsigned x){return x>16?16:x;}
static unsigned effect(unsigned a,unsigned b,unsigned mode,unsigned eva,unsigned evb,unsigned evy){
 unsigned r=a&31,g=(a>>5)&31,bl=(a>>10)&31;
 if(mode==1){
  r=(r*eva+(b&31)*evb)>>4;
  g=(g*eva+((b>>5)&31)*evb)>>4;
  bl=(bl*eva+((b>>10)&31)*evb)>>4;
  if(r>31)r=31;
  if(g>31)g=31;
  if(bl>31)bl=31;
 }else if(mode==2){r+=((31-r)*evy)>>4;g+=((31-g)*evy)>>4;bl+=((31-bl)*evy)>>4;}
 else if(mode==3){r-=(r*evy)>>4;g-=(g*evy)>>4;bl-=(bl*evy)>>4;}
 return r|(g<<5)|(bl<<10);
}
static int interval(unsigned p,unsigned limits){unsigned begin=limits>>8,end=limits&255;return begin<=end?(p>=begin&&p<end):(p>=begin||p<end);}
static void window_fill(unsigned char masks[240],unsigned limits,unsigned value){
 unsigned begin=limits>>8,end=limits&255;
 if(begin<=end){
  if(begin<240){if(end>240)end=240;memset(masks+begin,value,end-begin);}
 }else{
  if(begin<240)memset(masks+begin,value,240-begin);
  if(end>240)end=240;
  memset(masks,value,end);
 }
}
static int ahead(Pixel a,Pixel b){return (a&0x3f0000u)<(b&0x3f0000u);}
/* Cache only within one scanline: HBlank DMA may change any register or tile
 * before the next call. A tile entry is shared by up to eight output pixels. */
typedef struct {
 unsigned cnt, width_mask, sx, sy, map_base, char_base, mosaic_x;
 unsigned cached_tile, entry, row_address;
} Background;
static Background background_setup(unsigned bg,unsigned y){
 unsigned cnt=reg(8+bg*2),size=cnt>>14,mos=reg(0x4c);
 unsigned width=(size&1)?512:256,height=(size&2)?512:256;
 if(cnt&0x40)y-=y%(((mos>>4)&15)+1);
 Background b={cnt,width-1,reg(0x10+bg*4),
  (y+reg(0x12+bg*4))&(height-1),((cnt>>8)&31)*0x800,
  ((cnt>>2)&3)*0x4000,(cnt&0x40)?(mos&15)+1:1,~0u,0,0};
 return b;
}
static Pixel background(Background *b,unsigned bg,unsigned x){
 Pixel p=0;
 if(b->mosaic_x!=1)x-=x%b->mosaic_x;
 unsigned sx=(x+b->sx)&b->width_mask,tile=sx>>3;
 if(tile!=b->cached_tile){
  unsigned block=(sx/256)+(b->sy/256)*((b->width_mask+1)/256);
  unsigned map=(b->map_base+block*0x800+((b->sy/8%32)*32+tile%32)*2)&0xffff;
  b->entry=read16(pmd_vram_words,map);b->cached_tile=tile;
  unsigned ty=b->sy&7;if(b->entry&0x800)ty=7-ty;
  b->row_address=b->char_base+(b->entry&1023)*((b->cnt&0x80)?64:32)+ty*((b->cnt&0x80)?8:4);
 }
 unsigned tx=sx&7,index;if(b->entry&0x400)tx=7-tx;
 if(b->cnt&0x80){unsigned addr=b->row_address+tx;if(addr>=0x10000)return p;index=vram(addr);}
 else {unsigned addr=b->row_address+tx/2;if(addr>=0x10000)return p;index=(vram(addr)>>((tx&1)*4))&15;if(index)index+=(b->entry>>12)*16;}
 if(index)p=pixel(pal(index),b->cnt&3,bg,0);
 return p;
}
static void background_line(Background *b,unsigned bg,Pixel out[240]){
 if(b->mosaic_x!=1){for(unsigned x=0;x<240;x++)out[x]=background(b,bg,x);return;}
 unsigned x=0,key=pixel(0,b->cnt&3,bg,0),eight=b->cnt&0x80;
 while(x<240){
  unsigned sx=(x+b->sx)&b->width_mask,tx=sx&7,n=8-tx;
  if(n>240-x)n=240-x;
  unsigned block=sx/256+(b->sy/256)*((b->width_mask+1)/256);
  unsigned map=(b->map_base+block*0x800+((b->sy/8%32)*32+sx/8%32)*2)&0xffff;
  unsigned entry=read16(pmd_vram_words,map),ty=b->sy&7;
  if(entry&0x800)ty=7-ty;
  unsigned addr=b->char_base+(entry&1023)*(eight?64:32)+ty*(eight?8:4);
  unsigned bank=(entry>>12)*16;
  if(n==8&&addr<0x10000){
   Pixel *dst=out+x;const unsigned char *src=(const unsigned char*)pmd_vram_words+addr;
   uint32_t nonzero;memcpy(&nonzero,src,4);
   if(eight){uint32_t other;memcpy(&other,src+4,4);nonzero|=other;}
   if(!nonzero){memset(dst,0,8*sizeof(*dst));x+=8;continue;}
   int flip=entry&0x400;
   #define STORE_PIXEL(J) do { unsigned v=eight?src[J]:((src[(J)/2]>>(((J)&1)*4))&15); dst[flip?7-(J):(J)]=v?(key|pal(v+(eight?0:bank))):0; } while(0)
   STORE_PIXEL(0);STORE_PIXEL(1);STORE_PIXEL(2);STORE_PIXEL(3);
   STORE_PIXEL(4);STORE_PIXEL(5);STORE_PIXEL(6);STORE_PIXEL(7);
   #undef STORE_PIXEL
   x+=8;continue;
  }
  for(unsigned j=0;j<n;j++){
   unsigned u=(entry&0x400)?7-tx-j:tx+j,index=0;
   if(eight){if(addr+u<0x10000)index=vram(addr+u);}
   else if(addr+u/2<0x10000){index=(vram(addr+u/2)>>((u&1)*4))&15;if(index)index+=bank;}
   out[x+j]=index?key|pal(index):0;
  }
  x+=n;
 }
}
static int fixed_floor(int v){return v>=0?v/256:-((-v+255)/256);}
static void objects(unsigned y,unsigned dispcnt,Pixel out[240],unsigned char objwin[240]){
 static const unsigned widths[3][4]={{8,16,32,64},{16,32,32,64},{8,8,16,32}};
 static const unsigned heights[3][4]={{8,16,32,64},{8,8,16,32},{16,32,32,64}};
 if(!(dispcnt&0x1000))return;
 for(unsigned i=0;i<128;i++){
  unsigned a=read16(pmd_oam_words,i*8),b=read16(pmd_oam_words,i*8+2),c=read16(pmd_oam_words,i*8+4);
  unsigned shape=a>>14,size=b>>14,affine=a&0x100,mode=(a>>10)&3;
  if(shape==3||mode==3||(!affine&&(a&0x200)))continue;
  unsigned w=widths[shape][size],h=heights[shape][size],double_size=affine&&(a&0x200);
  unsigned bw=w<<double_size,bh=h<<double_size,dy=(y-(a&255))&255;
  if(dy>=bh)continue;
  int left=b&511;if(left>=256)left-=512;
  int pa=256,pb=0,pc=0,pd=256;
  if(affine){unsigned matrix=((b>>9)&31)*32;pa=(int16_t)read16(pmd_oam_words,matrix+6);pb=(int16_t)read16(pmd_oam_words,matrix+14);pc=(int16_t)read16(pmd_oam_words,matrix+22);pd=(int16_t)read16(pmd_oam_words,matrix+30);}
  for(unsigned dx=0;dx<bw;dx++){
   int x=left+(int)dx;if(x<0||x>=240)continue;
   int u=dx,v=dy;
   if(a&0x1000){unsigned mos=reg(0x4c);u-=u%(((mos>>8)&15)+1);v-=v%(((mos>>12)&15)+1);}
   if(affine){int rx=u-(int)bw/2,ry=v-(int)bh/2;u=fixed_floor(pa*rx+pb*ry)+(int)w/2;v=fixed_floor(pc*rx+pd*ry)+(int)h/2;}
   else {if(b&0x1000)u=(int)w-1-u;if(b&0x2000)v=(int)h-1-v;}
   if(u<0||v<0||u>=(int)w||v>=(int)h)continue;
   unsigned eight=a&0x2000,tile=c&1023;if(eight)tile&=~1u;
   unsigned row=(dispcnt&0x40)?(w/8)*(eight?2:1):32;
   unsigned addr=(tile+(v/8)*row+(u/8)*(eight?2:1))*32;
   addr+=(v%8)*(eight?8:4)+(eight?u%8:u%8/2);
   unsigned index=vram(0x10000+(addr&0x7fff));
   if(!eight)index=(index>>((u&1)*4))&15;
   if(!index)continue;
   if(mode==2){objwin[x]=1;continue;}
   unsigned priority=(c>>10)&3;
   if(!out[x]||priority<PIXEL_PRIORITY(out[x]))out[x]=pixel(pal(256+index+(eight?0:(c>>12)*16)),priority,4,mode==1);
  }
 }
}
int pmd_video_line(unsigned y,uint32_t pixels[240]){
 if(y>=160||!pixels)return 0;
 unsigned dc=reg(0),blend=reg(0x50),mode=(blend>>6)&3;
 if(dc&0x80){for(unsigned x=0;x<240;x++)pixels[x]=0xffffffffu;return 1;}
 if(dc&7)return 0; /* PMD's original main/bg_control use text mode 0. */
 unsigned eva=min16(reg(0x52)&31),evb=min16((reg(0x52)>>8)&31),evy=min16(reg(0x54)&31);
 unsigned win0=reg(0x40),win1=reg(0x42),winin=reg(0x48),winout=reg(0x4a);
 int win0row=(dc&0x2000)&&interval(y,reg(0x44)),win1row=(dc&0x4000)&&interval(y,reg(0x46));
 unsigned char masks[240];unsigned used=0;
 memset(masks,(dc&0xe000)?winout&63:63,sizeof(masks));
 if(win1row)window_fill(masks,win1,((winin>>8)&63)|128);
 if(win0row)window_fill(masks,win0,(winin&63)|128);
 for(unsigned x=0;x<240;x++)used|=masks[x];
 if(dc&0x8000)used|=(winout>>8)&63;
 Pixel layers[4][240];unsigned order[4],count=0;
 for(unsigned bg=0;bg<4;bg++)if((dc&(0x100u<<bg))&&(used&(1u<<bg))){
  Background b=background_setup(bg,y);background_line(&b,bg,layers[bg]);
  unsigned pos=count++;
  while(pos&&(reg(8+order[pos-1]*2)&3)>(b.cnt&3)){order[pos]=order[pos-1];pos--;}
  order[pos]=bg;
 }
 Pixel obj[240]={0};unsigned char objwin[240]={0};objects(y,dc,obj,objwin);
 const Pixel *rows[4]={NULL,NULL,NULL,NULL};unsigned bits[4]={0};
 for(unsigned i=0;i<count;i++){rows[i]=layers[order[i]];bits[i]=1u<<order[i];}
 Pixel backdrop=pixel(pal(0),4,5,0);
 for(unsigned x=0;x<240;x++){
  unsigned mask=masks[x];
  if((dc&0x8000)&&objwin[x]&&!(mask&128))mask=(winout>>8)&63;
  Pixel top=0,second=0;
  #define FIND_BG(I) do {if(!second&&(mask&bits[I])){Pixel p=rows[I][x];if(p){if(!top)top=p;else second=p;}}}while(0)
  FIND_BG(0);FIND_BG(1);FIND_BG(2);FIND_BG(3);
  #undef FIND_BG
  if(!top)top=backdrop;
  if(!second)second=backdrop;
  if((mask&16)&&obj[x]){Pixel p=obj[x];if(ahead(p,top)){second=top;top=p;}else if(ahead(p,second))second=p;}
  unsigned color=PIXEL_COLOR(top);
  if(mask&32){
   unsigned first=blend&(1u<<PIXEL_LAYER(top)),last=blend&(0x100u<<PIXEL_LAYER(second));
   if((PIXEL_SEMI(top)||(mode==1&&first))&&last)color=effect(color,PIXEL_COLOR(second),1,eva,evb,evy);
   else if(first&&mode>=2)color=effect(color,0,mode,eva,evb,evy);
  }
  pixels[x]=rgba(color);
 }
 return 1;
}
