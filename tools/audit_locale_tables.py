#!/usr/bin/env python3
"""Check all localized resource texts and unchanged numeric item/move records."""
import argparse,json
from pathlib import Path
from elftools.elf.elffile import ELFFile
class Elf:
 def __init__(self,path):
  with open(path,'rb') as f:
   elf=ELFFile(f);self.symbols={s.name:int(s['st_value']) for s in elf.get_section_by_name('.symtab').iter_symbols()};self.segments=[(int(s['p_vaddr']),s.data()) for s in elf.iter_segments() if s['p_type']=='PT_LOAD']
 def read(self,at,n):
  for base,data in self.segments:
   if base<=at and at+n<=base+len(data):return data[at-base:at-base+n]
  raise ValueError(hex(at))
 def string(self,at):
  raw=bytearray()
  for i in range(8192):
   x=self.read(at+i,1)
   if x==b'\0':return bytes(raw)
   raw+=x
  raise ValueError('unterminated text')
p=argparse.ArgumentParser();p.add_argument('original');p.add_argument('localized');p.add_argument('manifest');p.add_argument('output');a=p.parse_args();old=Elf(a.original);new=Elf(a.localized);manifest=json.loads(Path(a.manifest).read_text());checks=0
for kind,symbol,count,size,fields in [('item','gItemData',240,32,{'name':0,'description':16}),('move','gUnknown_83679A0',413,36,{'name':0,'description':28,'useText':32})]:
 records={ (x['id'],x['field']):x for x in manifest['pointer_replacements'] if x['kind']==kind}
 for i in range(count):
  before=bytearray(old.read(old.symbols[symbol]+i*size,size));after=bytearray(new.read(new.symbols[symbol]+i*size,size))
  for field,offset in fields.items():
   record=records[i,field];ptr=int.from_bytes(after[offset:offset+4],'little');assert ptr==new.symbols[record['symbol']]
   assert new.string(ptr)==bytes.fromhex(record['text']),(kind,i,field)
   before[offset:offset+4]=after[offset:offset+4]=b'\0'*4;checks+=1
  assert before==after,('Numeric record changed',kind,i)
Path(a.output).write_text(json.dumps({'ok':True,'text_pointers_checked':checks,'item_stats_unchanged':240,'move_stats_unchanged':413},indent=2));print('PASS',checks,'localized text pointers; all numeric item/move records unchanged')
