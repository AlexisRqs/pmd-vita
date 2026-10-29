#!/usr/bin/env python3
"""Execute the shipped ARM/NEON presenter with a write-only framebuffer.

Vita memory service imports are explicit test doubles. This checks pixels and
absence of framebuffer readback, not physical CDRAM throughput or Vita FPS.
"""
import argparse, hashlib, json, struct
from pathlib import Path
from elftools.elf.elffile import ELFFile
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM, UC_PROT_READ, UC_PROT_WRITE, UC_PROT_EXEC, UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_C1_C0_2, UC_ARM_REG_FPEXC
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('elf',type=Path);p.add_argument('output',type=Path)
a=p.parse_args();a.output.mkdir(parents=True,exist_ok=True)
report=a.output/'report.json';report.write_text(json.dumps({'ok':False,'reason':'running'}))
with a.elf.open('rb') as f:
 elf=ELFFile(f);symbols={s.name:int(s['st_value']) for s in elf.get_section_by_name('.symtab').iter_symbols()}
 segments=[(int(s['p_vaddr']),int(s['p_memsz']),s.data(),int(s['p_flags'])) for s in elf.iter_segments() if s['p_type']=='PT_LOAD']
u=Uc(UC_ARCH_ARM,UC_MODE_ARM)
u.reg_write(UC_ARM_REG_C1_C0_2,0x00f00000);u.reg_write(UC_ARM_REG_FPEXC,0x40000000)
for addr,size,data,flags in segments:
 lo=addr&~4095;hi=(addr+size+4095)&~4095
 perms=(UC_PROT_READ if flags&4 else 0)|(UC_PROT_WRITE if flags&2 else 0)|(UC_PROT_EXEC if flags&1 else 0)
 u.mem_map(lo,hi-lo,perms);u.mem_write(addr,data)
stop=0x90000000;stack=0x901ff000;src=0x90200000;dst=0xa0000000
u.mem_map(stop,0x200000);u.mem_map(src,0x40000)
u.mem_map(dst,0x300000,UC_PROT_WRITE) # CPU reads here fail immediately.
colors=[0xff000000|((i*173)&0xffffff) for i in range(240*160)]
u.mem_write(src,struct.pack('<38400I',*colors))
service_calls=0

def copy_service(machine,address,size,context):
 global service_calls
 d=machine.reg_read(UC_ARM_REG_R0);s=machine.reg_read(UC_ARM_REG_R1);n=machine.reg_read(UC_ARM_REG_R2)
 assert not (s<dst+0x300000 and s+n>dst),'OS memcpy read framebuffer'
 assert 0<=n<=0x300000
 machine.mem_write(d,bytes(machine.mem_read(s,n)));service_calls+=1
 machine.reg_write(UC_ARM_REG_PC,machine.reg_read(UC_ARM_REG_LR))
for name in ('sceClibMemcpy','sceClibMemmove'):
 if name in symbols:u.hook_add(UC_HOOK_CODE,copy_service,begin=symbols[name]&~1,end=symbols[name]&~1)
results=[]
for pitch in (960,1024):
 count=pitch*544;sentinel=0xa5c36e19
 u.mem_write(dst,struct.pack('<I',sentinel)*(count+2))
 u.reg_write(UC_ARM_REG_SP,stack);u.reg_write(UC_ARM_REG_LR,stop)
 for reg,val in ((UC_ARM_REG_R0,dst+4),(UC_ARM_REG_R1,pitch),(UC_ARM_REG_R2,src)):u.reg_write(reg,val)
 u.emu_start(symbols['pmd_present_scale3'],stop,count=10000000)
 assert u.reg_read(UC_ARM_REG_PC)==stop and u.reg_read(UC_ARM_REG_SP)==stack
 raw=bytes(u.mem_read(dst,(count+2)*4));actual=struct.unpack('<'+'I'*(count+2),raw)
 assert actual[0]==sentinel and actual[-1]==sentinel
 for y in range(544):
  for x in range(pitch):
   expected=colors[(y-32)//3*240+(x-120)//3] if 120<=x<840 and 32<=y<512 else sentinel
   assert actual[1+y*pitch+x]==expected,(pitch,x,y)
 results.append({'pitch':pitch,'pixels_and_guards_match':True,'framebuffer_readable':False})
report.write_text(json.dumps({'ok':True,'elf_sha256':hashlib.sha256(a.elf.read_bytes()).hexdigest(),'results':results,'memory_service_calls':service_calls,'native_vita_tested':False},indent=2)+'\n')
print('PASS: shipped ARM/NEON presenter pixels, stride/borders/guards and zero framebuffer reads')
