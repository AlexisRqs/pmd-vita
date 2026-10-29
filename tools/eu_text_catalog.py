#!/usr/bin/env python3
"""Read-only, ID-preserving EU text extraction. No gameplay data or ROM is emitted.
The table layout is pinned to the supported EU ROM hash. Language order is
EN, DE, FR, IT, ES; callers choose the output language independently.
"""
import argparse,hashlib,json,struct
from pathlib import Path
LANGUAGES=('en','de','fr','it','es')
SHA1='afee3b060dd5fd4a68afb1b003456aef3a2af073'
class Catalog:
 def __init__(self,rom):
  self.rom=Path(rom).read_bytes();assert hashlib.sha1(self.rom).hexdigest()==SHA1,'Unsupported EU revision'
  self.common=[];pointers=[self.u32(0xbe2d4+i*4)-0x8000000 for i in range(5)]
  assert pointers==[0xbe2e8,0x111ef8,0xe6e00,0x13d114,0x16769c]
  while pointers[0]<0xe6e00:
   row={'id':len(self.common),'values':{},'offsets':{}}
   for lang,i in zip(LANGUAGES,range(5)):
    at=pointers[i];words=struct.unpack_from('<H',self.rom,at)[0];assert 2<=words<4000
    end=at+words*2;raw=self.rom[at+2:end];zero=raw.index(0);assert not any(raw[zero:])
    row['values'][lang]=raw[:zero].hex();row['offsets'][lang]=at+2;pointers[i]=end
   self.common.append(row)
  assert pointers[0]==0xe6e00 and 0<=0x111ef8-pointers[2]<4, [hex(x) for x in pointers]
  # Dungeon UI uses 826 multilingual pointers to identically laid-out data blocks.
  blocks=[tuple(self.u32(at+4*i)-0x8000000 for i in range(5)) for at in range(0x1c9af0,0x1cdb64+1,20)]
  assert len(blocks)==826
  starts=sorted(set(b[0] for b in blocks));self.dungeon=[]
  for block_id,block in enumerate(blocks):
   next_start=next((x for x in starts if x>block[0]),block[0]+4)
   for offset in range(0,min(next_start-block[0],2048),4):
    pointers=[self.u32(base+offset)-0x8000000 for base in block]
    if not all(0x1b0000<=at<0x21b000 for at in pointers):continue
    values=[self.cstring(at) for at in pointers]
    if not values[0] or any(len(v)>4096 for v in values):continue
    self.dungeon.append({'id':f'dungeon:{block_id}:{offset}','values':{lang:v.hex() for lang,v in zip(LANGUAGES,values)},'offsets':dict(zip(LANGUAGES,pointers))})
  self.tables={}
  for kind,header,count in [('item_names',0x565ca8,240),('item_descriptions',0x565cbc,240),('move_names',0x565cf0,413),('move_use',0x565d04,413),('move_descriptions',0x565d18,413)]:
   tables=[self.u32(header+i*4)-0x8000000 for i in range(5)];rows=[]
   for ident in range(count):
    row={'id':ident,'values':{},'offsets':{}}
    for lang,table in zip(LANGUAGES,tables):
     at=self.u32(table+ident*4)-0x8000000;assert 0<=at<len(self.rom)
     raw=self.cstring(at);row['values'][lang]=raw.hex();row['offsets'][lang]=at
    rows.append(row)
   self.tables[kind]=rows
  assert self.text('item_names',55,'fr')==b'Baie Oran'
  assert self.text('move_names',154,'fr')==b'Charge'
 def u32(self,at):return struct.unpack_from('<I',self.rom,at)[0]
 def cstring(self,at):
  end=self.rom.index(0,at);assert end-at<8192;return self.rom[at:end]
 def text(self,kind,ident,lang):return bytes.fromhex(self.tables[kind][ident]['values'][lang])
 def export(self,path):
  Path(path).write_text(json.dumps({'rom_sha1':SHA1,'languages':LANGUAGES,'common':self.common,'dungeon':self.dungeon,'tables':self.tables},indent=2))
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('rom');p.add_argument('output');a=p.parse_args();c=Catalog(a.rom);c.export(a.output);print(len(c.common),'common records;',sum(map(len,c.tables.values())),'indexed item/move records; five languages')
