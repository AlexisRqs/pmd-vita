#include "prototype.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char **argv){
 if(argc!=4)return 2;
 unsigned char packed[0x3e34],pal[0x380],decoded[TITLE_BYTES];
 uint32_t colors[256],pixels[240*160];
 FILE *f=fopen(argv[1],"rb");if(!f)return 3;
 if(fread(packed,1,sizeof(packed),f)!=sizeof(packed))return 4;fclose(f);
 f=fopen(argv[2],"rb");if(!f)return 3;
 if(fread(pal,1,sizeof(pal),f)!=sizeof(pal))return 4;fclose(f);
 if(!decode_title(packed,sizeof(packed),decoded)||!decode_palette(pal,sizeof(pal),colors))return 5;
 render_title(decoded,colors,pixels);f=fopen(argv[3],"wb");if(!f)return 3;
 fprintf(f,"P6\n240 160\n255\n");
 for(unsigned i=0;i<240*160;i++){unsigned char rgb[]={pixels[i]&255,(pixels[i]>>8)&255,(pixels[i]>>16)&255};if(fwrite(rgb,1,3,f)!=3)return 6;}
 return fclose(f)!=0;
}
