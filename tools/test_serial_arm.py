#!/usr/bin/env python3
"""Compare original/native ARM serial routines; Unicorn is build-time only."""
import argparse,json,random,struct,subprocess
from pathlib import Path
from elftools.elf.elffile import ELFFile
from unicorn import Uc,UC_ARCH_ARM,UC_MODE_ARM
from unicorn.arm_const import UC_ARM_REG_SP,UC_ARM_REG_LR,UC_ARM_REG_PC,UC_ARM_REG_R0,UC_ARM_REG_R4,UC_ARM_REG_R5,UC_ARM_REG_R6,UC_ARM_REG_R7,UC_ARM_REG_R8,UC_ARM_REG_R9,UC_ARM_REG_R10,UC_ARM_REG_R11
p=argparse.ArgumentParser(description=__doc__)
for n in ('upstream','sdk','serial','output'):p.add_argument(n,type=Path)
a=p.parse_args();root,sdk,serial,out=(getattr(a,n).resolve() for n in ('upstream','sdk','serial','output'))
out.mkdir(parents=True,exist_ok=True)
(out/'original.s').write_bytes(subprocess.check_output(['git','show','HEAD:src/arm_funcs.s'],cwd=root))
subprocess.run([str(sdk/'bin/arm-vita-eabi-gcc'),'-c','-x','assembler-with-cpp','-I','.','-iquote','include',str(out/'original.s'),'-o',str(out/'original.o')],cwd=root,check=True)
images={}
for name,obj in [('original',out/'original.o'),('native',serial/'arm_funcs.o')]:
 path=out/(name+'.elf')
 subprocess.run([str(sdk/'bin/arm-vita-eabi-ld'),'-Ttext=0x10000000','--defsym=gUnknown_202DCF8=0x81000000','--defsym=pmd_io_words=0x84000000','-e','sub_80001E8',str(obj),'-o',str(path)],check=True)
 with path.open('rb') as f:
  e=ELFFile(f);symbols={s.name:s['st_value'] for s in e.get_section_by_name('.symtab').iter_symbols()}
  images[name]=(symbols,[(s['p_vaddr'],s['p_memsz'],s.data()) for s in e.iter_segments() if s['p_type']=='PT_LOAD'])
regs=[UC_ARM_REG_R4,UC_ARM_REG_R5,UC_ARM_REG_R6,UC_ARM_REG_R7,UC_ARM_REG_R8,UC_ARM_REG_R9,UC_ARM_REG_R10,UC_ARM_REG_R11]
def run(name,fn,state,data,io):
 u=Uc(UC_ARCH_ARM,UC_MODE_ARM);symbols,segments=images[name]
 low=min(s[0] for s in segments)&~4095;high=(max(s[0]+s[1] for s in segments)+4095)&~4095;u.mem_map(low,high-low)
 for addr,size,raw in segments:u.mem_write(addr,raw)
 iobase=0x04000000 if name=='original' else 0x84000000
 for addr in (0x81000000,0x82000000,0x83000000,iobase):u.mem_map(addr,4096)
 u.mem_write(0x81000000,bytes(state));u.mem_write(0x82000000,bytes(data));u.mem_write(iobase,bytes(io))
 u.reg_write(UC_ARM_REG_SP,0x83000f00);u.reg_write(UC_ARM_REG_LR,0x83000000)
 for i,r in enumerate(regs):u.reg_write(r,0x11220000+i)
 u.emu_start(symbols[fn],0x83000000,count=10000)
 assert u.reg_read(UC_ARM_REG_PC)==0x83000000 and u.reg_read(UC_ARM_REG_SP)==0x83000f00
 assert [u.reg_read(r) for r in regs]==[0x11220000+i for i in range(8)]
 return (bytes(u.mem_read(0x81000000,4096)),bytes(u.mem_read(0x82000000,4096)),bytes(u.mem_read(iobase,1024)),u.reg_read(UC_ARM_REG_R0))
for seed in range(256):
 rng=random.Random(seed);state=bytearray(rng.randbytes(4096));data=bytearray(rng.randbytes(4096));io=bytearray(rng.randbytes(1024))
 def put(offset,value):struct.pack_into('<I',state,offset,value&0xffffffff)
 state[0]=seed%2;put(0x14,(-2,-1,0,9,10,11)[seed%6]);put(0x28,0x82000020);put(0x2c,0x82000120)
 for i in range(4):
  put(0x18+4*i,(-1,0,9,10,11)[(seed+i)%5])
  for off,base in ((0x30,0x200),(0x40,0x600),(0x50,0xa00)):put(off+4*i,0x82000000+base+i*0x80+0x20)
  if (seed+i)%3==0:struct.pack_into('<H',io,0x120+2*i,0xfefe)
 for fn in ('sub_80001E8','sub_8000228'):
  assert run('original',fn,state,data,io)==run('native',fn,state,data,io),(seed,fn)
(out/'report.json').write_text(json.dumps({'ok':True,'cases':512,'runtime':'test only','link_transport_tested':False},indent=2)+'\n')
print('PASS: 512 serial routine comparisons, state/data/register writes and preserved ARM registers exact')
