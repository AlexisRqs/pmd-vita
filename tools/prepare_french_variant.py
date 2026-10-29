#!/usr/bin/env python3
from pathlib import Path
import re,ast,json,struct,hashlib,argparse
p=argparse.ArgumentParser(description='Import a bounded official French text subset; leaves upstream unchanged')
p.add_argument('upstream',type=Path);p.add_argument('rom',type=Path);p.add_argument('output',type=Path)
a=p.parse_args();root=a.upstream.resolve();report_dir=a.output.resolve();out=report_dir/'source';out.mkdir(parents=True,exist_ok=True)
r=a.rom.read_bytes();assert hashlib.sha1(r).hexdigest()=='afee3b060dd5fd4a68afb1b003456aef3a2af073'
# Parallel language records: each record starts with its size in 16-bit words.
a,b=0xd2be4,0xfc864;rows=[]
while a<=0xe6df4:
 def get(p):
  n=struct.unpack_from('<H',r,p)[0];assert 2<=n<3000
  block=r[p+2:p+n*2];end=block.index(0);assert all(v==0 for v in block[end:]);return block[:end],p+n*2
 en,an=get(a);fr,bn=get(b);rows.append((en,fr,b+2));a,b=an,bn
assert rows[-1][:2]==(b'New Game',b'Nouvelle partie')
chars={};macros={}
for line in (root/'charmap.txt').read_text().splitlines():
 if not line or line.startswith('@') or '=' not in line:continue
 left,right=line.split('=',1);left=left.strip();hx=right.split('@')[0].strip()
 try:value=bytes.fromhex(hx)
 except ValueError:continue
 if left.startswith("'"):
  try:chars[ast.literal_eval(left)]=value
  except Exception:pass
 else:macros[left]=value

def encode(s):
 data=b'';i=0
 while i<len(s):
  if s[i]=='{':
   end=s.index('}',i);data+=b''.join(macros[t] for t in s[i+1:end].split());i=end+1
  else:data+=chars[s[i]];i+=1
 return data
mapping={}
for en,fr,offset in rows:mapping.setdefault(en,[]).append((fr,offset))
pattern=re.compile(r'_\(\s*((?:"(?:[^"\\]|\\.)*"\s*(?:\\\s*)?)+)\)',re.S)
records=[];missing=[];love_count=0
files=['src/data/main_menu2.h','src/data/locale/personality_test1_usa.h','src/data/personality_test2.h','src/load_screen.c','src/data/ground/ground_data_s01_station.h']
for rel in files:
 s=(root/rel).read_text().replace('\\\n','')
 def replace(m):
  text=''.join(ast.literal_eval(x) for x in re.findall(r'"(?:[^"\\]|\\.)*"',m[1]));raw=encode(text)
  global love_count
  candidates=mapping.get(raw,[])
  if rel.endswith('ground_data_s01_station.h'):
   offset=r.find(raw+b'\0',0x561000,0x562600);assert offset>=0,text
   # Script block language order is EN, DE, FR, IT, ES.
   offset=r.index(0,offset)+1;offset=r.index(0,offset)+1
   fr=r[offset:r.index(0,offset)];candidates=[(fr,offset)]
  if raw==b'Love them!':
   candidates=[candidates[love_count]];love_count+=1
  elif raw in [b'Revive Team',b'Using wireless communication~2c you can',b'Is that OK?']:candidates=candidates[:1]
  if not candidates:
   missing.append({'file':rel,'text':text});return m[0]
  unique={fr for fr,_ in candidates}
  if len(unique)>1:
   # Repeated short answers carry the same meaning but some EU entries differ in punctuation.
   stripped={x.strip() for x in unique}
   if len(stripped)>1:
    missing.append({'file':rel,'text':text,'ambiguous':[x.decode('latin1') for x in unique]});return m[0]
  fr,offset=candidates[0]
  records.append({'file':rel,'en':text,'fr':fr.decode('latin1'),'offset':hex(offset)})
  # Hex byte strings bypass the charmap and preserve control codes verbatim.
  return '("'+''.join('\\x%02x'%v for v in fr)+'")'
 if rel.endswith('load_screen.c'):
  # These MenuItem literals bypass upstream's _() macro; include them explicitly.
  s=re.sub(r'(\{\s*)("(?:[^"\\]|\\.)*")(\s*,)',r'\1_(\2)\3',s)
 s=pattern.sub(replace,s)
 if rel.endswith('main_menu2.h'):s=s.replace('    10, ','    14, ').replace('    11, ','    14, ')
 if rel.endswith('load_screen.c'):s=s.replace('PrintStringOnWindow(64, 36,','PrintStringOnWindow(80, 36,')
 p=out/rel;p.parent.mkdir(parents=True,exist_ok=True);p.write_text(s)
# Unmodified logic, with local translated headers taking precedence.
for rel in ['src/main_menu2.c','src/personality_test1.c','src/personality_test2.c','src/data/personality_test1.h','src/ground_data_s01_station.c']:
 p=out/rel;p.parent.mkdir(parents=True,exist_ok=True);p.write_bytes((root/rel).read_bytes())
assert all(x['text'] in ['Pokémon',' ','？？？？','???'] for x in missing),missing
(report_dir/'translation-report.json').write_text(json.dumps({'records':records,'missing':missing},ensure_ascii=False,indent=2))
assert len([x for x in records if 'personality_test1_usa' in x['file']])==216
assert '_(' not in (out/'src/data/locale/personality_test1_usa.h').read_text()
print('Translated',len(records),'missing',len(missing));print(json.dumps(missing,ensure_ascii=False,indent=2))
