#!/usr/bin/env python3
"""Audit ARM mixer ABI fields, original PCM bytes and voicegroup relocations."""
from pathlib import Path
import re,struct,json,subprocess,hashlib
from elftools.elf.elffile import ELFFile
import argparse
p=argparse.ArgumentParser(description=__doc__)
for name in ('elf','upstream','sdk','output'):p.add_argument(name,type=Path)
a=p.parse_args()
project=Path(__file__).resolve().parents[1]
up=a.upstream.resolve();out=a.output.resolve();out.mkdir(parents=True,exist_ok=True)
path=a.elf.resolve()
(out/'report.json').write_text(json.dumps({'ok':False,'status':'in progress'}))
with path.open('rb') as f:
 e=ELFFile(f);sy={s.name:int(s['st_value']) for s in e.get_section_by_name('.symtab').iter_symbols()};segs=[(int(s['p_vaddr']),s.data()) for s in e.iter_segments() if s['p_type']=='PT_LOAD']
header=(up/'include/gba/m4a_internal.h').read_text()
checks=[]
for typename in ['WaveData','ToneData','SoundInfo','SoundChannel','MusicPlayerTrack','MusicPlayerInfo']:
 body=re.search(r'struct '+typename+r'\s*\{(.*?)\n\};',header,re.S).group(1)
 for name,value in sy.items():
  prefix='o_'+typename+'_'
  if not name.startswith(prefix):continue
  member=name[len(prefix):]
  if member.startswith('ToneData_'):
   member='tone.'+member[len('ToneData_'):]
   if member=='tone.keySplitTable':continue
  elif not re.search(r'\b'+member+r'\s*(?:\[|;)',body):continue
  checks.append(f'_Static_assert(__builtin_offsetof(struct {typename},{member})=={value},"{name}");')
source=out/'offsets.c';source.write_text('#include "gba/m4a_internal.h"\n'+'\n'.join(checks))
r=subprocess.run([str(a.sdk.resolve()/'bin/arm-vita-eabi-gcc'),'-iquote',str(up/'include'),'-include',str(project/'engine/full/native_prelude.h'),'-c',str(source),'-o',str(out/'offsets.o')],capture_output=True,text=True)
print('offsets',len(checks),r.returncode,r.stderr);assert r.returncode==0

def read(addr,n):
 for start,data in segs:
  if start<=addr and addr+n<=start+len(data):return data[addr-start:addr-start+n]
 raise ValueError(hex(addr))
waves=[]
for src in sorted((up/'sound/wave').glob('wave_*.s')):
 name=src.stem;addr=sy[name];blob=read(addr,16);typ,status,freq,loop,size=struct.unpack('<HHIII',blob)
 assert addr%4==0 and typ==0 and 0<=loop<size and 0<size<10000000,(name,typ,loop,size)
 data=read(addr+16,size)
 # Original generated assembly contains only literal signed PCM bytes after header.
 vals=[]
 for line in src.read_text().splitlines():
  clean=line.split('@')[0].strip()
  if clean.startswith('.byte'):
   vals.extend(int(x.strip(),0)&255 for x in clean[5:].split(','))
 assert bytes(vals[:size])==data,(name,'wave payload mismatch')
 waves.append({'name':name,'samples':size,'loop':loop,'frequency':freq,'bytes_match_original_source':True})
report={'elf_sha256':hashlib.sha256(path.read_bytes()).hexdigest(),'offset_checks':len(checks),'wave_count':len(waves),'total_samples':sum(w['samples'] for w in waves),'waves':waves}
print('waves',len(waves),report['total_samples'])

words_checked=0
for src in sorted((up/'sound/voicegroups').glob('*.s')):
 addr=None
 for line in src.read_text().splitlines():
  clean=line.split('@')[0].strip()
  if clean.endswith(':'):
   addr=sy[clean[:-1]];continue
  if addr is None:continue
  if clean.startswith('.byte'):addr+=len(clean[5:].split(','))
  elif clean.startswith('.word'):
   for expr in clean[5:].split(','):
    expr=expr.strip()
    if expr in sy:
     assert struct.unpack('<I',read(addr,4))[0]==sy[expr],(src,hex(addr),expr)
     words_checked+=1
    else:
     try: int(expr,0)
     except ValueError: raise ValueError(('unhandled pointer expression',expr))
    addr+=4
  elif clean.startswith('.global'):pass
  elif clean.startswith('.align'):
   alignment=1<<int(clean.split()[1],0);addr=(addr+alignment-1)&~(alignment-1)
  elif clean and clean.startswith('.'):
   raise ValueError(('unhandled directive after label',src,clean))
report['voicegroup_symbolic_words_checked']=words_checked
report['ok']=True
(out/'report.json').write_text(json.dumps(report,indent=2));print('voicegroup symbolic words',words_checked)
