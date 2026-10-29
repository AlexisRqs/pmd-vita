#!/usr/bin/env python3
"""Read-only EU scene catalog and conservative source correspondence audit.
Exact English bytes + a script-command reference are required. Ambiguous
French variants are retained for review, never selected by approximate match.
"""
import argparse,ast,hashlib,json,re,struct
from pathlib import Path
from eu_text_catalog import SHA1,LANGUAGES
PATTERN=re.compile(r'_\(\s*((?:"(?:[^"\\]|\\.)*"\s*)+)\)',re.S)
def codec(root):
 chars={};macros={}
 for line in (root/'charmap.txt').read_text().splitlines():
  if not line or line.startswith('@') or '=' not in line:continue
  left,right=line.rsplit('=',1);left=left.strip()
  try:value=bytes.fromhex(right.split('@')[0].strip())
  except ValueError:continue
  if left.startswith("'"):
   try:chars[ast.literal_eval(left)]=value
   except (ValueError,SyntaxError):pass
  else:macros[left]=value
 def encode(s):
  data=b'';i=0
  while i<len(s):
   if s[i]=='{':
    end=s.index('}',i)
    for t in s[i+1:end].split():data+=bytes([int(t,16)]) if t.startswith('0x') else macros[t]
    i=end+1
   else:data+=chars[s[i]];i+=1
  return data
 return encode

def extract(root,rom):
 r=rom.read_bytes();assert hashlib.sha1(r).hexdigest()==SHA1
 encode=codec(root);refs={}
 # ScriptCommand is 16 bytes; last word points at five consecutive NUL strings.
 # Scan aligned command candidates, then validate exact source strings below.
 for at in range(0x200000,0x565ca8-16,4):
  op=r[at]
  if op not in (*range(0x32,0x3b),*range(0xd0,0xd6),0xd9):continue
  if op!=0x3a and r[at+8:at+12]!=b'\0'*4:continue
  ptr=struct.unpack_from('<I',r,at+12)[0]-0x8000000
  if not 0x200000<=ptr<0x565ca8 or ptr%4:continue
  refs.setdefault(ptr,[]).append({'offset':at,'opcode':op})
 bank={};lookup={}
 for at,uses in refs.items():
  p=at;values={};offsets={}
  try:
   for lang in LANGUAGES:
    end=r.index(0,p,p+4096)
    raw=r[p:end]
    if not raw:raise ValueError('empty language')
    values[lang]=raw.hex();offsets[lang]=p;p=end+1
   if any(r[p:(p+3)&~3]):continue
  except (ValueError,IndexError):continue
  entry={'id':f'eu-scene:{at:08x}','offsets':offsets,'values':values,'references':uses}
  bank[at]=entry;lookup.setdefault(bytes.fromhex(values['en']),[]).append(at)
 occurrences=[]
 for path in sorted((root/'src/data/ground').glob('*station.h')):
  source=path.read_text().replace('\\\n','')
  for ordinal,m in enumerate(PATTERN.finditer(source)):
   text=''.join(ast.literal_eval(x) for x in re.findall(r'"(?:[^"\\]|\\.)*"',m[1]))
   row={'file':str(path.relative_to(root)),'ordinal':ordinal,'en':text}
   try:raw=encode(text)
   except (KeyError,ValueError) as e:row.update(status='encoding',error=str(e));occurrences.append(row);continue
   candidates=lookup.get(raw,[]);variants={bank[x]['values']['fr'] for x in candidates}
   row['candidates']=[bank[x]['id'] for x in candidates]
   # Dynamic substitutions must survive. Line breaks, colors and pauses may
   # differ legitimately in the official translation.
   tokens=lambda b:sorted(re.findall(rb'\$[A-Za-z][0-9]*|%[-+0-9.*]*[sducxX]',b))
   if len(variants)==1:
    fr=bytes.fromhex(next(iter(variants)))
    row.update(status='matched',fr=fr.hex())
    if tokens(raw)!=tokens(fr):row['status']='substitution_review'
   else:row['status']='ambiguous' if candidates else 'missing'
   occurrences.append(row)
 used={i for x in occurrences for i in x.get('candidates',[])}
 summary={status:sum(x['status']==status for x in occurrences) for status in sorted({x['status'] for x in occurrences})}
 return {'rom_sha1':SHA1,'method':'exact source English + referenced five-language block; distinct French variants require review','summary':summary,'occurrences':occurrences,'blocks':[x for x in bank.values() if x['id'] in used]}
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('upstream',type=Path);p.add_argument('rom',type=Path);p.add_argument('output',type=Path);a=p.parse_args();result=extract(a.upstream,a.rom);a.output.parent.mkdir(parents=True,exist_ok=True);a.output.write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n');print(json.dumps(result['summary']))
