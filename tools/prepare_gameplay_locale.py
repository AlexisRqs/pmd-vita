#!/usr/bin/env python3
"""Generate isolated localized gameplay strings and resource pointer tables.
Stats, effects and IDs are kept from the existing native build. Unknown or
ambiguous UI matches are reported, never guessed by approximate matching.
"""
from pathlib import Path
import argparse,ast,json,re,shutil
from eu_text_catalog import Catalog,LANGUAGES
p=argparse.ArgumentParser(description=__doc__)
for name in ['upstream','rom','prior_variant','native_data','output']:p.add_argument(name,type=Path)
p.add_argument('--language',choices=LANGUAGES,default='fr');a=p.parse_args();root=a.upstream.resolve();out=a.output.resolve();out.mkdir(parents=True,exist_ok=True);lang=a.language
catalog=Catalog(a.rom);catalog.export(out/'eu-catalog.json');shutil.copytree(a.prior_variant/'source',out/'source',dirs_exist_ok=True)
chars={};macros={}
for line in (root/'charmap.txt').read_text().splitlines():
 if not line or line.startswith('@') or '=' not in line:continue
 left,right=line.split('=',1);left=left.strip();hx=right.split('@')[0].strip()
 try:value=bytes.fromhex(hx)
 except ValueError:continue
 if left.startswith("'"):
  try:chars[ast.literal_eval(left)]=value
  except (ValueError,SyntaxError):pass
 else:macros[left]=value

def encode(text):
 result=b'';i=0
 while i<len(text):
  if text[i]=='{':
   end=text.index('}',i)
   for token in text[i+1:end].split():result+=bytes([int(token,16)]) if token.startswith('0x') else macros[token]
   i=end+1
  else:result+=chars[text[i]];i+=1
 return result

def literal(raw):return '"'+''.join('\\x%02x'%v for v in raw)+'"'
lookup={}
for row in [*catalog.common,*catalog.dungeon]:
 key=bytes.fromhex(row['values']['en']);lookup.setdefault(key,[]).append(row)
# Resolve known menu meanings explicitly. The chosen text must occur in the EU catalog.
choices={b'None':b'Aucun',b'Others':b'Autres',b'Items':b'Objets',b'Moves':b'Capacit\xe9s',b'Team':b'Equipe'}
pattern=re.compile(r'_\(\s*((?:"(?:[^"\\]|\\.)*"\s*)+)\)',re.S)
records=[];unresolved=[];changed=[]
names=['dungeon_strings','strings','common_strings','status_strings','items','moves','pokemon_types','options_menu1','options_menu2','other_menus1','other_menus2','party_list_menu','friend_area_action_menu','iq_skill_menu','iq_skill_info_menu','iq_skill_list_menu','recruited_mon_summary_menu']
names+= [x.stem for x in sorted((root/'src').glob('dungeon_menu_*.c'))]+['dungeon_submenu']
files=set('src/'+name+'.c' for name in names)
for rel in list(files):
 if not (root/rel).exists():files.remove(rel);continue
 for inc in re.findall(r'#include "(data/[^\"]+)"',(root/rel).read_text()):
  if (root/'src'/inc).exists():files.add('src/'+inc)
for rel in sorted(files):
 original=(root/rel).read_text();source=original.replace('\\\n','');count=0
 def replace(m):
  global count
  text=''.join(ast.literal_eval(x) for x in re.findall(r'"(?:[^"\\]|\\.)*"',m[1]))
  try:raw=encode(text)
  except KeyError as e:unresolved.append({'file':rel,'text':text,'reason':'encoding '+str(e)});return m[0]
  if not raw:return m[0]
  candidates=lookup.get(raw,[])
  # These two native arrays have exact EU block/field identities, including
  # distinct meanings for repeated action labels such as Switch and Set.
  if rel=='src/dungeon_strings.c' and m.start()<source.index('const struct Struct_80F7C50'):
   line=source[source.rfind('[',0,m.start()):m.start()];index=int(re.match(r'\[(\d+)\]',line)[1]);offset=index*8+(4 if '_(' in line else 0)
   exact=[x for x in candidates if x['id']==f'dungeon:7:{offset}'];assert exact,(index,raw);candidates=exact
  elif rel=='src/dungeon_strings.c' and source.index('const struct Struct_80F7C50')<m.start()<source.index('};',source.index('const struct Struct_80F7C50')):
   index=int(re.search(r'\[(\d+)\][^\[]*$',source[:m.start()])[1]);exact=[x for x in candidates if x['id']==f'dungeon:8:{index*8}'];assert exact,(index,raw);candidates=exact
  values={bytes.fromhex(x['values'][lang]) for x in candidates}
  if lang=='fr':
   contextual={b'Store':b'D\xe9poser',b'Take':b'Prendre',b'Floor':b'Sol',b'Which?':b'Lequel?',b'Linking moves':b'Lier des capacit\xe9s'}
   if rel=='src/common_strings.c':contextual[b'Take']=b'Retirer'
   if raw==b'Ground':contextual[raw]=b'Au sol' if rel=='src/dungeon_strings.c' else b'Sol'
   if raw==b'Grass':contextual[raw]=b'Plante' if 'TYPE_GRASS' in source[source.rfind('\n',0,m.start()):m.start()] else b'Herbe'
   if raw==b'Switch' and rel.endswith('iq_skill_menu.h'):contextual[raw]=b'Act/D\xe9s'
   if raw in contextual and contextual[raw] in values:values={contextual[raw]}
   # Some EU entries have a redundant color-reset code; select the canonical form.
   if len(values)>1 and len({x.replace(b'#r#r',b'#r') for x in values})==1:values={next(iter(values)).replace(b'#r#r',b'#r')}

  if lang=='fr' and raw in choices and choices[raw] in values:values={choices[raw]}
  if len(values)!=1:
   # Ignore nonverbal format strings; report readable text needing a decision.
   if re.search('[A-Za-z]{2}',re.sub(r'\{[^}]*\}|%[0-9.*csdu]|\$[a-z][0-9]?','',text)):
    unresolved.append({'file':rel,'text':text,'reason':'ambiguous' if values else 'not in common bank','candidates':[x.decode('latin1') for x in sorted(values)]})
   return m[0]
  translated=values.pop()
  fmt=lambda s: sorted(re.findall(rb'%(?:[-+0-9.*]*)(?:[sducxX])',s))
  if fmt(raw)!=fmt(translated):unresolved.append({'file':rel,'text':text,'reason':'printf parameter mismatch'});return m[0]
  count+=1;records.append({'file':rel,'en':text,'translated':translated.decode('latin1'),'ids':[x['id'] for x in candidates]})
  return '('+literal(translated)+')'
 source=pattern.sub(replace,source)
 # Copy all candidate C files so their translated local data headers take precedence.
 target=out/'source'/rel;target.parent.mkdir(parents=True,exist_ok=True);target.write_text(source)
 if count:changed.append(rel)
# Redirect only the text pointer words inside native resource tables.
assembly=(a.native_data/'data/system_sbin.s').read_text();added=[];pointer_audit=[]
for kind,count,start,next_label,fields in [
 ('item',240,'gItemData:','gUnknown_830F66C:',{'name':'item_names','description':'item_descriptions'}),
 ('move',413,'gUnknown_83679A0:','gUnknown_83725F8:',{'name':'move_names','description':'move_descriptions','useText':'move_use'})]:
 data=json.loads((root/f'data/{kind}/{kind}_data.json').read_text());assert len(data)==count
 lo=assembly.index(start);hi=assembly.index(next_label,lo);section=assembly[lo:hi]
 # Only the pointer entries in the first table; leave later text definitions intact.
 cursor=0
 for ident,entry in enumerate(data):
  for field,table in fields.items():
   old=entry[field];pat=re.compile(r'^\.4byte\s+'+re.escape(old)+r'\s*$',re.M);match=pat.search(section,cursor);assert match,(kind,ident,field,old)
   symbol=f'Locale_{lang}_{kind}_{ident}_{field}';replacement='.4byte '+symbol
   section=section[:match.start()]+replacement+section[match.end():];cursor=match.start()+len(replacement)
   raw=catalog.text(table,ident,lang);added.append('.balign 4\n'+symbol+':\n.byte '+','.join(str(x) for x in raw+b'\0')+'\n')
   pointer_audit.append({'kind':kind,'id':ident,'field':field,'old_symbol':old,'symbol':symbol,'text':raw.hex()})
 assembly=assembly[:lo]+section+assembly[hi:]
assembly+='\n.section .rodata\n'+''.join(added);(out/'system_sbin.s').write_text(assembly)
(out/'gameplay-report.json').write_text(json.dumps({'language':lang,'records':records,'unresolved':unresolved,'pointer_replacements':pointer_audit,'compile_sources':sorted('src/'+n+'.c' for n in names if (out/'source/src'/f'{n}.c').exists()),'changed_files':changed},ensure_ascii=False,indent=2))
print('UI translations',len(records),'reported gaps',len(unresolved),'resource text pointers',len(pointer_audit))
