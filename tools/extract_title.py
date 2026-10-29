#!/usr/bin/env python3
"""Extract raw title resources from the exact pmd-red input ROM; no ROM download."""
import argparse, hashlib
from pathlib import Path
p=argparse.ArgumentParser()
p.add_argument('rom',type=Path)
p.add_argument('--output',type=Path,default=Path('private-assets'))
a=p.parse_args()
data=a.rom.read_bytes()
expected='9f4cfc5b5f4859d17169a485462e977c7aac2b89'
actual=hashlib.sha1(data).hexdigest()
if actual!=expected: p.error(f'ROM incompatible: SHA-1 {actual}; attendu {expected}')
a.output.mkdir(parents=True,exist_ok=True)
for name,start,length in [('titlen0.at4px',0x384c9c,0x3e34),('titlen0p.raw',0x388ad0,0x380)]:
    chunk=data[start:start+length]
    if len(chunk)!=length: p.error('ROM tronquée')
    (a.output/name).write_bytes(chunk)
print('Ressources extraites. Vérifier palette et en-têtes avant intégration au prototype.')

import struct
base=0x08000000
header=struct.unpack_from('<I',data,0x30f670)[0]-base
count,table=struct.unpack_from('<II',data,header)
table-=base
glyphs={}
for i in range(count):
    ptr,code,width,height,unused,flags,unused2=struct.unpack_from('<IHhBBBB',data,table+i*12)
    if 32<=code<127:
        bitmap=data[ptr-base:ptr-base+66]
        if len(bitmap)!=66 or not 0<=width<=12: raise ValueError('Invalid glyph')
        glyphs[code]=bytes([width])+bytes((bitmap[y*6+x//2]>>((x%2)*4))&15 for y in range(11) for x in range(12))
assert len(glyphs)==95
(a.output/'font-ascii.bin').write_bytes(b''.join(glyphs[c] for c in range(32,127)))

import json
manifest=json.loads((Path(__file__).parent/'portrait-manifest.json').read_text())
pack=bytearray(b'PMDP'+struct.pack('<HH',1,len(manifest)))
for m in manifest:
    pack+=struct.pack('<HBB20s',m['id'],*m['types'],m['name'].encode('ascii'))
    for portrait in m['portraits']:
        at=portrait['graphics'];length=struct.unpack_from('<H',data,at+5)[0]
        assert data[at:at+5]==b'AT4PX' and struct.unpack_from('<H',data,at+16)[0]==800
        pack+=data[portrait['palette']:portrait['palette']+64]
        pack+=struct.pack('<H',length)+data[at:at+length]
(a.output/'portraits.pack').write_bytes(pack)

for name,offset,size in [("D01P01.bpl",0x19fe070,304),("D01P01c.bpc",0x19fe1a0,8496),("D01P01m.bma",0x1a002d0,424)]:
    (a.output/name).write_bytes(data[offset:offset+size])

from extract_sprites import extract_sprites
extract_sprites(data,a.output)

# Resolve archive entry names and SIRO indirection, without copying ROM pointers.
def dungeon_entry(name):
    count=struct.unpack_from('<I',data,0x3b0008)[0]
    table=struct.unpack_from('<I',data,0x3b000c)[0]-base
    for i in range(count):
        np,dp=struct.unpack_from('<II',data,table+i*8)
        if data[np-base:data.index(0,np-base)].decode('ascii')==name:
            at=dp-base
            if data[at:at+4]==b'SIRO':at=struct.unpack_from('<I',data,at+4)[0]-base
            return at
    raise ValueError('Missing dungeon archive entry: '+name)
for suffix in ['fon','cel','cex','pal']:
    name='b14'+suffix;at=dungeon_entry(name)
    if suffix=='pal':size=0x300
    else:
        assert data[at:at+5]==b'AT4PX'
        size=struct.unpack_from('<H',data,at+5)[0]
    (a.output/name).write_bytes(data[at:at+size])

# Native monster parameter records. Replace both GBA string pointers with bytes.
monster_table=struct.unpack_from('<I',data,0x357b8c)[0]-base
monster_pack=bytearray(b'PMDM'+struct.pack('<HH',1,424))
for ident in range(424):
    at=monster_table+ident*0x48
    for pointer in struct.unpack_from('<II',data,at):
        begin=pointer-base;end=data.index(0,begin);value=data[begin:end]
        if len(value)>31:raise ValueError('Monster string exceeds native record')
        monster_pack+=value.ljust(32,b'\0')
    monster_pack+=data[at+8:at+0x48]
(a.output/'monsters.pack').write_bytes(monster_pack)
