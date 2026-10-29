#!/usr/bin/env python3
"""Source-grounded portrait pointers, bounded AT decoding, and original C validation."""
import argparse, hashlib, json, struct, re, subprocess
from pathlib import Path
from elftools.elf.elffile import ELFFile
p=argparse.ArgumentParser(description=__doc__)
for name in ('elf','upstream','output'):p.add_argument(name,type=Path)
a=p.parse_args();a.output.mkdir(parents=True,exist_ok=True)
reportpath=a.output/'report.json';reportpath.write_text(json.dumps({'ok':False}))
with a.elf.open('rb') as f:
 elf=ELFFile(f);names={s.name:int(s['st_value']) for s in elf.get_section_by_name('.symtab').iter_symbols()}
 segments=[(int(s['p_vaddr']),s.data()) for s in elf.iter_segments() if s['p_type']=='PT_LOAD']
def read(addr, n):
    for start, data in segments:
        if start <= addr and addr+n <= start+len(data):
            return data[addr-start:addr-start+n]
    raise ValueError(f'unmapped file-backed pointer {addr:#x}, bytes={n}')


def word(addr):
    return struct.unpack('<I', read(addr, 4))[0]


def string(addr):
    data = bytearray()
    for i in range(256):
        b = read(addr+i, 1)
        if b == b'\0':
            return data.decode('ascii')
        data.extend(b)
    raise ValueError('unterminated archive name')

def decode(blob):
 assert blob[:4]==b'AT4P' and blob[4]==ord('X'),'unsupported portrait AT format'
 n=int.from_bytes(blob[5:7],'little');assert 18<=n<=len(blob),'compressed length outside source resource'
 assert int.from_bytes(blob[16:18],'little')==800,'portrait output must be 5x5 4bpp tiles'
 flags=[b+3 for b in blob[7:16]];i=18;bit=8;out=bytearray()
 def take():
  nonlocal i
  assert i<n,'truncated AT command'
  b=blob[i];i+=1;return b
 while i<n:
  if bit==8: control=take();bit=0
  if control & 128: out.append(take())
  else:
   b=take();command=(b>>4)+3;c=b&15
   for j,flag in enumerate(flags):
    if command==flag: command=31-j
   if command>=23:
    # Exact nibble patterns from original DecompressAT cases0x17..0x1f.
    patterns={31:[0,0,0,0],30:[0,1,1,1],29:[0,-1,0,0],28:[0,0,-1,0],27:[0,0,0,-1],26:[0,-1,-1,-1],25:[0,1,0,0],24:[0,0,1,0],23:[0,0,0,1]}
    ns=[(c+x)&15 for x in patterns[command]];out.extend([(ns[0]<<4)|ns[1],(ns[2]<<4)|ns[3]])
   else:
    back=len(out)-4096+(c<<8)+take()
    assert 0<=back<len(out),'AT backreference before produced pixels'
    for _ in range(command): out.append(out[back]);back+=1
  assert len(out)<=800,'AT write exceeds portrait tile buffer'
  control<<=1;bit+=1
 assert len(out)==800,'incomplete portrait pixels'
 return bytes(out),n

# Resolve tables from original .inc declarations, not guessed pointer-like words.
contracts={}
for source in sorted((a.upstream/'data/kao').glob('*.inc')):
 text=source.read_text();labels=re.findall(r'^(\w+):',text,re.M)
 root=re.search(r'^kao_siro (\w+)',text,re.M).group(1)
 pairs=re.findall(r'^kao_portrait (\w+),\s*(\w+)',text,re.M)
 assert len(pairs)==13,(source,len(pairs))
 contracts[names[labels[0]]]=(source,root,pairs,labels)
archive=names['gMonsterFileArchive'];assert read(archive,8)==b'pksdir0\0'
count,table=struct.unpack('<II',read(archive+8,8));entries=[];errors=[];bundle=bytearray()
for i in range(count):
 label,payload=struct.unpack('<II',read(table+i*8,8));label=string(label)
 if not label.startswith('kao'):continue
 try:
  source,root,pairs,labels=contracts[payload]
  assert read(payload,4)==b'SIRO'
  target=word(payload+4);assert target==names[root],'portrait root relocation differs from source'
  variants=[]
  for index,(palname,gfxname) in enumerate(pairs):
   pal,gfx=struct.unpack('<II',read(target+index*8,8))
   assert (pal,gfx)==(names[palname] if palname!='0' else 0,names[gfxname] if gfxname!='0' else 0),'nested portrait relocation differs from source'
   if not gfx: assert not pal;continue
   assert pal and gfx,'partial null portrait pair'
   assert names[labels[labels.index(palname)+1]]-pal>=64,'palette shorter than16 RGB records'
   palette=read(pal,64)
   end=names[labels[labels.index(gfxname)+1]];assert end>gfx
   pixels,length=decode(read(gfx,end-gfx))
   bundle.extend(struct.pack('<I',length)+read(gfx,length)+pixels)
   variants.append({'index':index,'palette':pal,'gfx':gfx,'resource_bytes':end-gfx,'compressed_bytes':length,'decoded_sha256':hashlib.sha256(pixels).hexdigest()})
  entries.append({'name':label,'source':str(source),'root':target,'variants':variants})
 except (AssertionError,ValueError,KeyError,IndexError) as error:errors.append({'name':label,'error':str(error)})
assert len(entries)+len(errors)==len(contracts),'source/archive portrait coverage differs'
if not errors:
 project=Path(__file__).resolve().parents[1];platform=project/'engine/full';fixture=a.output/'portrait-streams.bin';fixture.write_bytes(bundle)
 flags=['clang','-std=gnu11','-O2','-fno-strict-aliasing','-ffunction-sections','-fsanitize=address,undefined','-fno-sanitize-recover=all','-Wno-pointer-sign','-iquote',str(a.upstream/'include'),'-include',str(platform/'native_prelude.h')]
 obj=a.output/'decompress.o';exe=a.output/'portrait-decode-test'
 subprocess.run(flags+['-c',str(a.upstream/'src/decompress_at.c'),'-o',str(obj)],check=True)
 subprocess.run(flags+[str(project/'tests/portrait_decompress_audit.c'),str(obj),'-Wl,-dead_strip','-o',str(exe)],check=True)
 result=subprocess.run([str(exe.resolve()),str(fixture.resolve())],text=True,capture_output=True)
 (a.output/'decode.log').write_text(result.stdout+result.stderr)
 if result.returncode:errors.append({'error':'original decompressor failed; see decode.log'})
report={'ok':not errors,'elf_sha256':hashlib.sha256(a.elf.read_bytes()).hexdigest(),'scope':'All monster archive kao entries; all13 portrait pairs matched to source declarations,16RGB palette bounds, bounded800byte AT4PX decode compared to actual originalC atO2 ASan/UBSan. Excludes other portrait formats, runtime spriteId selection, flipped drawing and visual correctness.','entries':entries,'portraits':len(entries),'variants':sum(len(x['variants']) for x in entries),'errors':errors}
reportpath.write_text(json.dumps(report,indent=2)+'\n');print(json.dumps({k:report[k] for k in ('ok','portraits','variants','errors')},indent=2));raise SystemExit(bool(errors))
