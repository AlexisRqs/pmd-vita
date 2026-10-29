#!/usr/bin/env python3
"""Differential ARM execution test only; Unicorn is NOT a runtime game dependency.
Compare original low-address GBA PCM mixer to adapted native mixer at high pointers.
Unused externals are ignored in test ELFs; only SoundMain and umul3232H32 run.
"""
import argparse,struct,subprocess
from pathlib import Path
from elftools.elf.elffile import ELFFile
from unicorn import Uc,UC_ARCH_ARM,UC_MODE_ARM
from unicorn.arm_const import UC_ARM_REG_SP,UC_ARM_REG_LR,UC_ARM_REG_PC,UC_ARM_REG_R0,UC_ARM_REG_R1
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('upstream',type=Path);p.add_argument('sdk',type=Path);p.add_argument('audio',type=Path);p.add_argument('output',type=Path)
a=p.parse_args();root,sdk,audio,out=(x.resolve() for x in (a.upstream,a.sdk,a.audio,a.output));out.mkdir(parents=True,exist_ok=True)
original=out/'original.s';original.write_bytes(subprocess.check_output(['git','show','HEAD:src/m4a_1.s'],cwd=root))
cc=str(sdk/'bin/arm-vita-eabi-gcc');ld=str(sdk/'bin/arm-vita-eabi-ld')
subprocess.run([cc,'-E','-x','assembler-with-cpp','-iquote','include','-I','.',str(original),'-o',str(out/'original-expanded.s')],cwd=root,check=True)
subprocess.run([cc,'-c','-x','assembler',str(out/'original-expanded.s'),'-o',str(out/'original.o')],check=True)
for name,obj in [('original',out/'original.o'),('native',audio/'m4a_1.o')]:
 subprocess.run([ld,'-Ttext=0x10000000','-Tdata=0x10010000','--unresolved-symbols=ignore-all',
  '--defsym=pmd_sound_info=0x01000000','--defsym=pmd_io_words=0x01001000',
  '--defsym=SoundMainRAM_Buffer=0x03002000','-e','SoundMain',str(obj),'-o',str(out/(name+'.elf'))],check=True)

def elf(path):
 with path.open('rb') as f:
  e=ELFFile(f);symbols={s.name:s['st_value'] for s in e.get_section_by_name('.symtab').iter_symbols()}
  segments=[(s['p_vaddr'],s['p_memsz'],s.data()) for s in e.iter_segments() if s['p_type']=='PT_LOAD']
 return symbols,segments
images={name:elf(out/(name+'.elf')) for name in ('original','native')}

class Run:
 def __init__(self,name,base,samples,reverb,loop,fixed,voices):
  self.u=Uc(UC_ARCH_ARM,UC_MODE_ARM);self.s,segments=images[name];self.base=base
  for address,size in ((0x01000000,0x10000),(0x02000000,0x20000)):
   self.u.mem_map(address,size)
  if name=='original':
   self.u.mem_map(0x03000000,0x10000);self.u.mem_map(0x04000000,0x1000)
  if base!=0x02001000:self.u.mem_map(base&~0xffff,0x10000)
  low=min(x[0] for x in segments)&~4095;high=(max(x[0]+x[1] for x in segments)+4095)&~4095
  self.u.mem_map(low,high-low)
  for addr,size,data in segments:self.u.mem_write(addr,data)
  self.u.mem_write(0x01002000,b'\x1e\xff\x2f\xe1') # ARM bx lr: empty CgbSound callback
  if name=='original':
   code=self.u.mem_read(self.s['SoundMainRAM']&~1,0x400);self.u.mem_write(0x03002000,bytes(code))
   self.write(0x03007ff0,base,4)
  else:self.write(0x01000000,base,4)
  def field(key,value,width=1):self.write(base+self.s['o_SoundInfo_'+key],value,width)
  field('ident',self.s['ID_NUMBER'],4);field('maxChans',voices);field('masterVolume',14)
  field('maxLines',10);field('reverb',reverb);field('pcmDmaCounter',1);field('pcmDmaPeriod',1584//samples)
  field('pcmSamplesPerVBlank',samples,4);field('divFreq',1,4);field('CgbSound',0x01002000,4)
  for voice in range(voices):
   wave=base+0x5000+voice*0x1000;ch=base+self.s['o_SoundInfo_chans']+voice*64
   def channel(key,value,width=1):self.write(ch+self.s['o_SoundChannel_'+key],value,width)
   channel('statusFlags',0x80);channel('type',8 if fixed else 0)
   channel('rightVolume',180-voice*30);channel('leftVolume',40+voice*25)
   channel('attack',91);channel('decay',170);channel('sustain',100);channel('release',160)
   channel('frequency',0x00a00000+voice*0x00100000,4);channel('wav',wave,4)
   self.write(wave+3,0xc0 if loop else 0,1);self.write(wave+8,17,4);self.write(wave+12,673,4)
   self.u.mem_write(wave+16,bytes(((i*73+voice*11)%255 for i in range(900))))
  self.samples=samples;self.voices=voices
 def write(self,addr,value,width):self.u.mem_write(addr,int(value).to_bytes(width,'little'))
 def call(self,symbol):
  self.u.reg_write(UC_ARM_REG_SP,0x0201ff00);self.u.reg_write(UC_ARM_REG_LR,0x01003000)
  self.u.emu_start(self.s[symbol],0x01003000,count=2000000)
  assert self.u.reg_read(UC_ARM_REG_PC)==0x01003000,'Instruction limit or invalid return'
  assert self.u.reg_read(UC_ARM_REG_SP)==0x0201ff00,'Stack imbalance'
 def tick(self,frame):
  self.write(self.base+self.s['o_SoundInfo_pcmDmaCounter'],1584//self.samples-frame%(1584//self.samples),1)
  if frame==9:
   for voice in range(self.voices):
    addr=self.base+self.s['o_SoundInfo_chans']+voice*64
    self.write(addr,self.u.mem_read(addr,1)[0]|0x40,1)
  self.call('SoundMain')
  pcm=bytes(self.u.mem_read(self.base+self.s['o_SoundInfo_pcmBuffer'],3168))
  channels=[]
  for voice in range(self.voices):
   addr=self.base+self.s['o_SoundInfo_chans']+voice*64
   data=bytearray(self.u.mem_read(addr,64))
   for key in ('wav','currentPointer'):
    offset=self.s['o_SoundChannel_'+key];pointer=struct.unpack_from('<I',data,offset)[0]
    struct.pack_into('<I',data,offset,pointer-self.base if pointer else 0)
   channels.append(bytes(data))
  return pcm,channels

cases=frames=0;nonzero=False
for base in (0x02001000,0x41001000,0x81001000,0xc1001000):
 for samples in (96,264,304):
  for reverb in (0,64):
   for loop in (False,True):
    for fixed in (False,True):
     for voices in (1,3):
      original=Run('original',0x02001000,samples,reverb,loop,fixed,voices)
      native=Run('native',base,samples,reverb,loop,fixed,voices)
      for frame in range(16):
       expected=original.tick(frame);actual=native.tick(frame)
       assert actual==expected,(hex(base),samples,reverb,loop,fixed,voices,frame)
       nonzero=nonzero or any(actual[0]);frames+=1
      cases+=1
assert nonzero
print(f'PASS: {cases} differential mixer cases, {frames} frames, PCM/state exact at all four pointer high-bit combinations')
