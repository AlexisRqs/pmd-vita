#include "platform_psg.h"
extern "C" {
#include "platform_memory.h"
}
#include "core/apu/Gb_Apu.h"
#include "core/apu/Multi_Buffer.h"
#include <cstdlib>
static Gb_Apu apu;
static Stereo_Buffer buffer;
static bool configured;
static unsigned address(unsigned offset){
 switch(offset){
 case 0x60:return 0xff10;case 0x62:return 0xff11;case 0x63:return 0xff12;case 0x64:return 0xff13;case 0x65:return 0xff14;
 case 0x68:return 0xff16;case 0x69:return 0xff17;case 0x6c:return 0xff18;case 0x6d:return 0xff19;
 case 0x70:return 0xff1a;case 0x72:return 0xff1b;case 0x73:return 0xff1c;case 0x74:return 0xff1d;case 0x75:return 0xff1e;
 case 0x78:return 0xff20;case 0x79:return 0xff21;case 0x7c:return 0xff22;case 0x7d:return 0xff23;
 case 0x80:return 0xff24;case 0x81:return 0xff25;case 0x84:return 0xff26;
 default:return offset>=0x90&&offset<=0x9f?0xff30+offset-0x90:0;
 }
}
int pmd_psg_reset(unsigned rate){
 configured=false;if(rate<8000||rate>48000)return 0;
 if(buffer.set_sample_rate(rate,100))return 0;
 buffer.clock_rate(Gb_Apu::clock_rate);buffer.bass_freq(Gb_Apu::agb_bass);buffer.clear();
 apu.reset(Gb_Apu::mode_agb,true);apu.set_output(buffer.center(),buffer.left(),buffer.right());
 apu.volume(1.0);configured=true;return 1;
}
void pmd_psg_write8(unsigned offset,uint8_t value){
 if(offset>=sizeof(pmd_io_words))std::abort();
 ((uint8_t*)pmd_io_words)[offset]=value;
 unsigned target=address(offset);
 if(target){if(!configured)std::abort();apu.write_register(0,target,value);}
}
void pmd_psg_write16(unsigned offset,uint16_t value){
 if(offset>sizeof(pmd_io_words)-2)std::abort();
 pmd_psg_write8(offset,value&255);pmd_psg_write8(offset+1,value>>8);
}
void pmd_psg_write32(unsigned offset,uint32_t value){
 if(offset>sizeof(pmd_io_words)-4)std::abort();
 for(unsigned i=0;i<4;i++)pmd_psg_write8(offset+i,(value>>(i*8))&255);
}
uint8_t pmd_psg_read8(unsigned offset){
 if(offset>=sizeof(pmd_io_words))std::abort();
 unsigned target=address(offset);
 if(target){if(!configured)std::abort();return apu.read_register(0,target);}
 return ((uint8_t*)pmd_io_words)[offset];
}
int pmd_psg_render_frame(int16_t *output,size_t capacity){
 if(!configured||!output||capacity<1024)return -1;
 apu.end_frame(280896);buffer.end_frame(280896);
 long available=buffer.samples_avail();if(available<0||available>2048)return -1;
 long samples=buffer.read_samples(output,available);
 if(samples!=available||(samples&1))return -1;
 /* SOUNDCNT_H bits0/1 choose PSG amplitude:25%,50%,100%;3 is prohibited. */
 unsigned ratio=((uint8_t*)pmd_io_words)[0x82]&3;
 if(ratio==3)return -1;
 if(ratio<2)for(long i=0;i<samples;i++)output[i]/=(ratio==0?4:2);
 ((uint8_t*)pmd_io_words)[0x84]=(uint8_t)((((uint8_t*)pmd_io_words)[0x84]&0xf0)|(apu.read_register(0,0xff26)&15));
 return (int)(samples/2);
}
