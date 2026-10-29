#!/usr/bin/env python3
"""Run the actual adapted C+ARM sound engine against original songs/waves.
Unicorn is a build-time test tool only; this produces no runnable Vita package.
PSG writes are recorded in order for host synthesis replay; PCM WAVs are separate.
"""
import argparse,json,struct,subprocess,wave
from pathlib import Path
from elftools.elf.elffile import ELFFile
from unicorn import Uc,UC_ARCH_ARM,UC_MODE_ARM
from unicorn.arm_const import UC_ARM_REG_SP,UC_ARM_REG_LR,UC_ARM_REG_PC,UC_ARM_REG_R0
p=argparse.ArgumentParser(description=__doc__)
for name in ('upstream','sdk','c_objects','data_objects','audio_objects','output'):p.add_argument(name,type=Path)
a=p.parse_args();root,sdk,cdata,data,audio,out=(getattr(a,n).resolve() for n in ('upstream','sdk','c_objects','data_objects','audio_objects','output'))
out.mkdir(parents=True,exist_ok=True);project=Path(__file__).resolve().parents[1]
cc=str(sdk/'bin/arm-vita-eabi-gcc')
subprocess.run([cc,'-std=gnu11','-O0','-iquote',str(root/'include'),'-include',str(project/'engine/full/native_prelude.h'),
 '-c',str(project/'tests/audio_arm_support.c'),'-o',str(out/'support.o')],check=True)
objects=[cdata/'src/m4a.o',cdata/'src/m4a_tables.o',audio/'m4a_1.o',data/'data/sound_data.o',out/'support.o',*sorted((data/'sound/songs').glob('*.o'))]
rsp=out/'audio.rsp';rsp.write_text('\n'.join('"'+str(x)+'"' for x in objects))
elfpath=out/'songs.elf'
# All symbols must resolve: unlike the isolated mixer differential fixture.
subprocess.run([cc,'-nostdlib','-Wl,-Ttext=0x81000000,-Tdata=0x82000000,-e,m4aSoundInit','@'+str(rsp),'-lgcc','-o',str(elfpath)],check=True)
with elfpath.open('rb') as f:
 elf=ELFFile(f);symbols={s.name:s['st_value'] for s in elf.get_section_by_name('.symtab').iter_symbols()}
 segments=[(s['p_vaddr'],s['p_memsz'],s.data()) for s in elf.iter_segments() if s['p_type']=='PT_LOAD']

results=[]
for song in (1,8,12,40):
 u=Uc(UC_ARCH_ARM,UC_MODE_ARM)
 low=min(s[0] for s in segments)&~4095;high=(max(s[0]+s[1] for s in segments)+4095)&~4095
 u.mem_map(low,high-low)
 for address,size,raw in segments:u.mem_write(address,raw)
 u.mem_map(0x90000000,0x100000) # native-address stack, no GBA memory regions mapped
 stop=0x90000000
 def call(name,arg=None):
  u.reg_write(UC_ARM_REG_SP,0x900ff000);u.reg_write(UC_ARM_REG_LR,stop)
  if arg is not None:u.reg_write(UC_ARM_REG_R0,arg)
  u.emu_start(symbols[name],stop,count=10000000)
  assert u.reg_read(UC_ARM_REG_PC)==stop,(name,'did not return')
  assert u.reg_read(UC_ARM_REG_SP)==0x900ff000,(name,'stack mismatch')
 call('pmd_test_port');assert u.reg_read(UC_ARM_REG_R0)==1,'PORT event/command pointer regression'
 call('m4aSoundInit');call('m4aSongNumStart',song)
 info=symbols['gSoundInfo'];frames=[];active_psg=False;events=bytearray();pcm_frames=bytearray();event_total=0
 for frame in range(180):
  call('m4aSoundVSync');call('m4aSoundMain')
  count=struct.unpack('<I',u.mem_read(symbols['pmd_test_psg_count'],4))[0]
  assert count<=4096
  events.extend(struct.pack('<I',count));events.extend(u.mem_read(symbols['pmd_test_psg_events'],count*8));event_total+=count
  u.mem_write(symbols['pmd_test_psg_count'],bytes(4))
  state=bytes(u.mem_read(info,0x350))
  samples=struct.unpack_from('<i',state,16)[0];rate=struct.unpack_from('<i',state,20)[0]
  assert 0<samples<=1584
  counter,period=state[4],state[11]
  offset=0 if counter<=1 else (period-(counter-1))*samples
  assert offset+samples<=1584
  right=bytes(u.mem_read(info+0x350+offset,samples));left=bytes(u.mem_read(info+0x350+1584+offset,samples))
  frames.append(bytes(b for pair in zip(left,right) for b in pair))
  io=bytes(u.mem_read(symbols['pmd_io_words'],1024))
  control=struct.unpack_from('<H',io,0x82)[0];master=bool(io[0x84]&128)
  pcm_frames.extend(struct.pack('<III',samples,control,int(master)));pcm_frames.extend(right);pcm_frames.extend(left)
  cgb=bytes(u.mem_read(symbols['gCgbChans'],256));active_psg|=any(cgb[x*64]&0xc7 for x in range(4))
 assert event_total>100,(song,'missing PSG events')
 (out/f'song-{song}-psg.events').write_bytes(events)
 (out/f'song-{song}-pcm.frames').write_bytes(pcm_frames)
 pcm=b''.join(frames);assert any(pcm),(song,'silent PCM')
 # WAV 8-bit PCM is unsigned; original mixer samples are signed.
 with wave.open(str(out/f'song-{song}-pcm.wav'),'wb') as wav:
  wav.setnchannels(2);wav.setsampwidth(1);wav.setframerate(rate);wav.writeframes(bytes(x^128 for x in pcm))
 results.append({'song':song,'frames':180,'rate':rate,'pcm_bytes':len(pcm),'psg_used':active_psg,'psg_events':event_total})
 print('PASS:',results[-1],flush=True)
(out/'report.json').write_text(json.dumps({'runtime':'test only','psg_synthesized':False,'results':results},indent=2))
