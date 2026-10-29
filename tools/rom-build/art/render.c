#include "prototype.h"
#include "decompress_at.h"
/* Validate the supported AT4PX subset before invoking the original decoder. */
int decode_at_checked(const u8 *s, size_t n, u8 *out, size_t capacity) {
    if (n < 18 || memcmp(s,"AT4PX",5) || (size_t)(s[5]|s[6]<<8) != n ||
        (size_t)(s[16]|s[17]<<8) > capacity || (s[16]|s[17]<<8) == 0) return 0;
    size_t expected=s[16]|s[17]<<8;
    memset(out,0,capacity);
    size_t p=18, written=0; unsigned mask=0, flags=0;
    while(p<n) {
        if(!mask) { flags=s[p++]; mask=128; if(p==n) return 0; }
        if(flags & mask) { p++; written++; }
        else {
            unsigned cmd=(s[p]>>4)+3;
            for(int i=0;i<9;i++) if(cmd==(unsigned)s[7+i]+3) cmd=31-i;
            if(cmd>=23 && cmd<=31) { p++; written+=2; }
            else {
                if(p+1>=n) return 0;
                int distance=4096-(((s[p]&15)<<8)|s[p+1]);
                if(distance<=0 || (size_t)distance>written) return 0;
                p+=2; written+=cmd;
            }
        }
        if(written>expected) return 0;
        mask>>=1;
    }
    return written==expected && DecompressAT(out,(s32)expected,s)==expected;
}

int decode_title(const u8 *s,size_t n,u8 *out) {
    if(n<18 || (s[16]|s[17]<<8)<4096)return 0;
    return decode_at_checked(s,n,out,TITLE_BYTES);
}
static void put16(u8 *p,unsigned v) { p[0]=v; p[1]=v>>8; }
void make_test_title(u8 *out,u32 *pal) {
    memset(out,0,TITLE_BYTES);
    for(int i=0;i<256;i++) pal[i]=0xff000000u|((i*19u&255)<<16)|((i*43u&255)<<8)|(i*71u&255);
    pal[0]=0xff201810;
    for(int tile=1;tile<16;tile++) for(int y=0;y<8;y++) for(int x=0;x<8;x+=2) {
        int a=tile==1 ? 1 : ((x+y+tile)%15)+1;
        int b=tile==1 ? 1 : ((x+1+y+tile)%15)+1;
        out[4096+tile*32+y*4+x/2]=a|(b<<4);
    }
    for(int y=0;y<32;y++) for(int x=0;x<32;x++) {
        unsigned tile=1+(x+y)%15, bank=((x/4+y/4)%8)<<12;
        put16(out+2048+2*(y*32+x),tile|bank|((x&1)?1024:0)|((y&1)?2048:0));
        if(x%6==0 && y%4==0) put16(out+2*(y*32+x),2|0x9000);
    }
}
void render_title(const u8 *data,const u32 *pal,u32 *pixels) {
    for(int y=0;y<160;y++) for(int x=0;x<240;x++) {
        u32 color=pal[0];
        for(int layer=1;layer>=0;layer--) {
            int p=layer*2048+2*((y/8)*32+x/8);
            unsigned entry=data[p]|data[p+1]<<8;
            unsigned tx=x&7,ty=y&7;
            if(entry&1024) tx=7-tx;
            if(entry&2048) ty=7-ty;
            size_t at=4096+(entry&1023)*32+ty*4+tx/2;
            if(at>=TITLE_BYTES) continue;
            unsigned index=(data[at]>>((tx&1)*4))&15;
            if(index) color=pal[(entry>>12)*16+index];
        }
        pixels[y*240+x]=color;
    }
}

int decode_palette(const u8 *raw,size_t n,u32 *pal) {
    if(n!=0x380) return 0;
    for(int i=0;i<256;i++) pal[i]=0xff000000;
    for(size_t i=0;i<n/4;i++) {
        /* Original final fade brightness is clamped to 31, then quantized to RGB555. */
        unsigned r=(raw[i*4]*31/256)&31,g=(raw[i*4+1]*31/256)&31,b=(raw[i*4+2]*31/256)&31;
        r=(r<<3)|(r>>2); g=(g<<3)|(g>>2); b=(b<<3)|(b>>2);
        pal[i]=0xff000000|r|(g<<8)|(b<<16);
    }
    return 1;
}
