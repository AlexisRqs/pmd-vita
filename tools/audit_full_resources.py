#!/usr/bin/env python3
"""Check relocated archive structures in the linked ARM ELF, without running game."""
import argparse,hashlib,json,struct
from pathlib import Path
from elftools.elf.elffile import ELFFile
p=argparse.ArgumentParser(description=__doc__);p.add_argument('elf',type=Path);p.add_argument('output',type=Path)
a=p.parse_args();out=a.output.resolve();out.mkdir(parents=True,exist_ok=True)
with a.elf.open('rb') as f:
 elf=ELFFile(f);symbols={s.name:int(s['st_value']) for s in elf.get_section_by_name('.symtab').iter_symbols()}
 segments=[(int(s['p_vaddr']),s.data()) for s in elf.iter_segments() if s['p_type']=='PT_LOAD']
def read(addr,n):
 for start,data in segments:
  if start<=addr and addr+n<=start+len(data):return data[addr-start:addr-start+n]
 raise ValueError(f'unmapped file-backed address {addr:#x}, size {n}')
def word(addr):return struct.unpack('<I',read(addr,4))[0]
def string(addr):
 result=bytearray()
 for i in range(256):
  b=read(addr+i,1)
  if b==b'\0':return result.decode('ascii')
  result.extend(b)
 raise ValueError(f'unterminated string {addr:#x}')
archives=[];errors=[]
for name,addr in sorted(symbols.items()):
 if not name.endswith('FileArchive'):continue
 files=[]
 try:
  assert read(addr,8)==b'pksdir0\0','bad magic'
  count,table=struct.unpack('<II',read(addr+8,8));assert 0<count<10000,count
  prior=''
  for i in range(count):
   label,payload=struct.unpack('<II',read(table+i*8,8));label=string(label)
   assert label>prior,('unsorted/duplicate archive',prior,label)
   prior=label;magic=read(payload,4);entry={'name':label,'address':payload}
   if magic in (b'SIRO',b'SIR0'):
    target=word(payload+4);read(target,1);entry.update({'siro':magic.decode(),'target':target})
   files.append(entry)
 except (ValueError,AssertionError,UnicodeDecodeError) as error:errors.append({'archive':name,'index':len(files),'error':str(error)})
 archives.append({'name':name,'address':addr,'files':files})
assert archives,'No archive symbols found; audit cannot validate this ELF'
report={'elf_sha256':hashlib.sha256(a.elf.read_bytes()).hexdigest(),'scope':'archive names/tables, file starts and SIRO roots only; nested resource pointers not yet checked','archives':archives,'errors':errors}
(out/'report.json').write_text(json.dumps(report,indent=2)+'\n')
print(f'{len(archives)} archives, {sum(len(x["files"]) for x in archives)} entries checked, {len(errors)} errors')
for error in errors:print(error)
raise SystemExit(bool(errors))
