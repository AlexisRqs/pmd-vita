#!/usr/bin/env python3
"""Execute linked native resource/graphics startup in ARM tests; no Vita/CPU emulator shipped."""
import argparse,hashlib,json,struct
from pathlib import Path
from elftools.elf.elffile import ELFFile
from unicorn import Uc,UC_ARCH_ARM,UC_MODE_ARM,UcError,UC_PROT_READ,UC_PROT_WRITE,UC_PROT_EXEC,UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_SP,UC_ARM_REG_LR,UC_ARM_REG_PC,UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3,UC_ARM_REG_C1_C0_2,UC_ARM_REG_FPEXC
p=argparse.ArgumentParser(description=__doc__);p.add_argument('elf',type=Path);p.add_argument('audit',type=Path);p.add_argument('output',type=Path)
a=p.parse_args();out=a.output.resolve();out.mkdir(parents=True,exist_ok=True);report=out/'report.json';report.write_text(json.dumps({'ok':False,'reason':'test in progress'}))
audit=json.loads(a.audit.read_text())
assert audit.get('elf_sha256')==hashlib.sha256(a.elf.read_bytes()).hexdigest(),'Resource audit must be regenerated for this exact ELF'
with a.elf.open('rb') as f:
 elf=ELFFile(f);symbols={s.name:int(s['st_value']) for s in elf.get_section_by_name('.symtab').iter_symbols()}
 segments=[(int(s['p_vaddr']),int(s['p_memsz']),s.data(),int(s['p_flags'])) for s in elf.iter_segments() if s['p_type']=='PT_LOAD']
u=Uc(UC_ARCH_ARM,UC_MODE_ARM)
# Vita enables VFP/NEON; O2 original C now uses vector instructions.
u.reg_write(UC_ARM_REG_C1_C0_2,0x00f00000);u.reg_write(UC_ARM_REG_FPEXC,0x40000000)
for address,size,data,flags in segments:
 low=address&~4095;high=(address+size+4095)&~4095
 perm=(UC_PROT_READ if flags&4 else 0)|(UC_PROT_WRITE if flags&2 else 0)|(UC_PROT_EXEC if flags&1 else 0)
 u.mem_map(low,high-low,perm);u.mem_write(address,data)
u.mem_map(0x90000000,0x200000);stop=0x90000000;stack=0x901ff000;scratch=0x90001000
regs=(UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3)
# Vita imports are resolved by the OS, not executable ARM functions in this ELF.
# Supply only these three OS memory primitives, never game/resource routines.
os_calls={}
def memory_service(name):
 def callback(machine,address,size,context):
  dest=machine.reg_read(UC_ARM_REG_R0);source=machine.reg_read(UC_ARM_REG_R1);count=machine.reg_read(UC_ARM_REG_R2)
  assert count<0x1000000,(name,'unexpected count',count)
  writable=0x90000000<=dest and dest+count<=0x90200000
  writable|=any((flags&2) and start<=dest and dest+count<=start+length for start,length,raw,flags in segments)
  assert writable,(name,'invalid write target',hex(dest),count)
  raw=bytes([source&255])*count if name=='sceClibMemset' else bytes(machine.mem_read(source,count))
  if count:machine.mem_write(dest,raw)
  os_calls[name]=os_calls.get(name,0)+1
  machine.reg_write(UC_ARM_REG_PC,machine.reg_read(UC_ARM_REG_LR))
 return callback
for name in ('sceClibMemset','sceClibMemcpy','sceClibMemmove'):
 u.hook_add(UC_HOOK_CODE,memory_service(name),begin=symbols[name]&~1,end=symbols[name]&~1)

def call(name,*args):
 u.reg_write(UC_ARM_REG_SP,stack);u.reg_write(UC_ARM_REG_LR,stop)
 for i,r in enumerate(regs):u.reg_write(r,args[i] if i<len(args) else 0)
 try:u.emu_start(symbols[name],stop,count=50000000)
 except UcError as error:raise RuntimeError(f'{name}: {error}, PC={u.reg_read(UC_ARM_REG_PC):#x}') from error
 assert u.reg_read(UC_ARM_REG_PC)==stop,(name,'instruction budget exhausted',hex(u.reg_read(UC_ARM_REG_PC)))
 assert u.reg_read(UC_ARM_REG_SP)==stack,(name,'stack mismatch')
 return u.reg_read(UC_ARM_REG_R0)
call('pmd_memory_reset');call('InitFileSystem');checked=0
for archive in audit['archives']:
 for entry in archive['files']:
  u.mem_write(scratch,entry['name'].encode()+b'\0')
  handle=call('OpenFileAndGetFileDataPtr',scratch,archive['address']);assert handle,(archive['name'],entry['name'])
  data=struct.unpack('<I',u.mem_read(handle+4,4))[0];assert data==entry.get('target',entry['address']),(entry,hex(data))
  call('CloseFile',handle);checked+=1
print(f'PASS: actual original OpenFile/GetSiroPtr/CloseFile on {checked} entries',flush=True)
for name in ('InitBGPaletteBuffer','LoadCharmaps','ResetScheduledMemCopies','InitGraphics'):
 call(name);print('PASS: native ARM '+name,flush=True)
charmaps=struct.unpack('<II',u.mem_read(symbols['gCharmaps'],8));assert all(charmaps)
glyphs=0
for font,ptr in enumerate(charmaps):
 count,table=struct.unpack('<II',u.mem_read(ptr,8));assert 0<count<10000
 assert any(start<=table and table+count*12<=start+len(raw) for start,size,raw,flags in segments),(font,'unrelocated glyph table',hex(table))
 u.mem_write(symbols['gCurrentCharmap'],struct.pack('<I',font))
 for index in range(count):
  record=table+index*12;data,code,width=struct.unpack('<IHh',u.mem_read(record,8))
  if data:u.mem_read(data,2)
  if code<=63487:
   found=call('GetCharacter',code);assert found==record,(font,index,code,hex(found),hex(record))
  glyphs+=1
print(f'PASS: {glyphs} glyph records and original character lookup across both fonts',flush=True)
vram=bytes(u.mem_read(symbols['pmd_vram_words'],0x18000));assert any(vram[0x4f00:0x5000])
(out/'startup-vram.bin').write_bytes(vram)
report.write_text(json.dumps({'ok':True,'elf_sha256':hashlib.sha256(a.elf.read_bytes()).hexdigest(),'archive_entries':checked,'glyph_records':glyphs,'startup':['InitBGPaletteBuffer','LoadCharmaps','ResetScheduledMemCopies','InitGraphics'],'os_test_doubles':os_calls,'full_boot':False,'runtime':'build-time ARM instruction test only'},indent=2)+'\n')
