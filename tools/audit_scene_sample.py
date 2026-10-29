#!/usr/bin/env python3
"""Compare scene bytecode and every text operand before/after localization."""
import argparse,json,re,struct,ast
from pathlib import Path
from elftools.elf.elffile import ELFFile
from extract_scene_locale import PATTERN,codec
class Elf:
 def __init__(self,path):
  with open(path,'rb') as f:
   e=ELFFile(f);self.symbols={s.name:(int(s['st_value']),int(s['st_size'])) for s in e.get_section_by_name('.symtab').iter_symbols()};self.segments=[(int(s['p_vaddr']),s.data()) for s in e.iter_segments() if s['p_type']=='PT_LOAD']
 def read(self,at,n):
  for base,data in self.segments:
   if base<=at and at+n<=base+len(data):return data[at-base:at-base+n]
  raise ValueError(hex(at))
 def string(self,at):
  for base,data in self.segments:
   if base<=at<base+len(data):return data[at-base:data.index(0,at-base)]
  raise ValueError(hex(at))
p=argparse.ArgumentParser();p.add_argument('root',type=Path);p.add_argument('old');p.add_argument('new');p.add_argument('manifest',type=Path);p.add_argument('output',type=Path);a=p.parse_args();old=Elf(a.old);new=Elf(a.new);encode=codec(a.root);report=json.loads(a.manifest.read_text());selected={(x['file'],x['ordinal']):bytes.fromhex(x['fr']) for x in report['records']};scripts=commands=texts=changed=verified=0
for file in sorted({x['file'] for x in report['records']}):
 source=(a.root/file).read_text().replace('\\\n','');ordinal=0
 for m in re.finditer(r'static const struct ScriptCommand\s+(\w+)\[\]\s*=\s*\{(.*?)\n\};',source,re.S):
  name=m[1];oa,size=old.symbols[name];na,nsize=new.symbols[name];assert size==nsize and size%16==0,name
  expected=[]
  for t in PATTERN.finditer(m[2]):
   text=''.join(ast.literal_eval(x) for x in re.findall(r'"(?:[^"\\]|\\.)*"',t[1]));raw=encode(text);expected.append((raw,selected.get((file,ordinal),raw)));verified+=int((file,ordinal) in selected);ordinal+=1
  slots=[]
  for offset in range(0,size,16):
   before=old.read(oa+offset,16);after=new.read(na+offset,16)
   assert before[:12]==after[:12],(name,offset,'bytecode changed');commands+=1
   if before[0] in (*range(0x32,0x3b),*range(0xd0,0xd6),0xd9,0xf2):
    optr=struct.unpack_from('<I',before,12)[0];nptr=struct.unpack_from('<I',after,12)[0]
    if optr:slots.append((old.string(optr),new.string(nptr)))
  assert slots==expected,(name,'text operands differ',len(slots),len(expected))
  texts+=len(slots);changed+=sum(x!=y for x,y in slots);scripts+=1
assert verified==len(selected),(verified,len(selected))
r={'ok':True,'script_arrays':scripts,'unchanged_numeric_commands':commands,'text_operands_checked':texts,'localized_operands':verified,'different_text_bytes':changed};a.output.write_text(json.dumps(r,indent=2)+'\n');print(r)
