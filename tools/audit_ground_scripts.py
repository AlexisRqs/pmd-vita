#!/usr/bin/env python3
"""Bound the ground-script resource graph in a native ELF (not story execution).

Requires pyelftools. Source declarations establish object types; Vita GCC supplies
actual member offsets. All successful graph bounds refer to sized STT_OBJECTs.
"""
import argparse,bisect,collections,hashlib,json,re,struct,subprocess
from pathlib import Path
from elftools.elf.elffile import ELFFile
TYPES=('ScriptCommand','ScriptRef','GroundScriptHeader','GroundScriptGroup','GroundScriptSector','GroundLivesData','GroundObjectData','GroundEffectData','GroundEventData','GroundLink')
FIELDS={'ScriptCommand':['argPtr'],'ScriptRef':['name','script'],'GroundScriptHeader':['nGroups','groups','links'],'GroundScriptGroup':['nSectors','sectors'],'GroundScriptSector':['nLives','lives','nObjects','objects','nEffects','effects','nEvents','events','hasStation','station'],'GroundLivesData':['scripts'],'GroundObjectData':['scripts'],'GroundEffectData':['script'],'GroundEventData':['script'],'GroundLink':[]}
class AuditError(ValueError):pass
class Auditor:
 def __init__(self,elf_path,upstream,layout,patches=None):
  self.layout=layout;self.patches=patches or {};self.count=collections.Counter();self.visited=set();self.entrypoints=set();self.texts=set();self.excluded_texts=set();self.mutation_sites={}
  declarations=collections.defaultdict(set)
  pattern=re.compile(r'\b('+ '|'.join(TYPES)+r')\s+((?:\*\s*(?:const\s*)?)*)\(?\s*(\w+)\s*(?:\[[^\]]*\])?\s*\)?\s*=')
  for path in (upstream/'src').rglob('*'):
   if path.suffix not in ('.c','.h','.inc'):continue
   for kind,stars,name in pattern.findall(path.read_text(errors='replace')):
    declarations[kind+('Pointers' if stars else '')].add(name)
  with elf_path.open('rb') as f:
   elf=ELFFile(f);assert elf.elfclass==32 and elf.little_endian and elf['e_machine']=='EM_ARM','Expected little-endian ARM32 ELF'
   self.segments=[(int(s['p_vaddr']),s.data()) for s in elf.iter_segments() if s['p_type']=='PT_LOAD']
   self.objects=[(int(s['st_value']),int(s['st_size']),s.name) for s in elf.get_section_by_name('.symtab').iter_symbols() if s['st_info']['type']=='STT_OBJECT' and s['st_size'] and isinstance(s['st_shndx'],int)]
  self.by_kind={kind:sorted(o for o in self.objects if o[2] in names) for kind,names in declarations.items()}
  self.by_kind['Object']=sorted(self.objects)
  self.starts={k:[o[0] for o in v] for k,v in self.by_kind.items()}
  self.max_sizes={k:max((o[1] for o in v),default=0) for k,v in self.by_kind.items()}
 def read(self,address,n):
  for start,data in self.segments:
   if start<=address and address+n<=start+len(data):
    raw=bytearray(data[address-start:address-start+n])
    for where,value in self.patches.items():
     for j,b in enumerate(struct.pack('<I',value)):
      if address<=where+j<address+n:raw[where+j-address]=b
    return bytes(raw)
  raise AuditError(f'ELF bytes unavailable {address:#x}+{n}')
 def word(self,address):return struct.unpack('<I',self.read(address,4))[0]
 def off(self,kind,field):return self.layout[kind+'.'+field]
 def size(self,kind):return self.layout[kind]
 def named(self,name):
  found=[o for o in self.objects if o[2]==name]
  if len(found)!=1:raise AuditError(f'Expected unique sized object {name}: {len(found)}')
  return found[0]
 def bound(self,address,count,kind,stride=None):
  stride=stride or self.size(kind)
  if not count:return None
  n=count*stride;objects=self.by_kind.get(kind,[]);starts=self.starts.get(kind,[])
  index=bisect.bisect_right(starts,address)-1;maximum=self.max_sizes.get(kind,0)
  while index>=0 and address-objects[index][0]<maximum:
   obj=objects[index];start,size,name=obj
   if start<=address and address+n<=start+size and (address-start)%stride==0 and size%stride==0:return obj
   index-=1
  raise AuditError(f'{kind}: {address:#x}, count {count}, stride {stride} exceeds typed sized STT_OBJECT bounds')
 def text(self,address,role):
  if not address:return
  if address in self.texts or address in self.excluded_texts:return
  try:obj=self.bound(address,1,'Object',1)
  except AuditError:
   self.read(address,1) # Reject unmapped corruption; this is NOT an object-bound proof.
   self.excluded_texts.add(address);return
  if b'\0' not in self.read(address,obj[0]+obj[1]-address):raise AuditError(f'{role}: no NUL within sized object {obj[2]}')
  self.texts.add(address)
 def command(self,address):
  if not address:return
  obj=self.bound(address,1,'ScriptCommand');self.entrypoints.add(address)
  self.walk_commands(obj)
 def walk_commands(self,obj):
  if ('commands',obj[0]) in self.visited:return
  self.visited.add(('commands',obj[0]));self.count['command_arrays']+=1
  # Only these operands are treated as text: message commands32..39,
  # menus D0..D9 and debugfilenameF6; other argPtr semantics are excluded.
  for address in range(obj[0],obj[0]+obj[1],self.size('ScriptCommand')):
   self.count['commands']+=1;op=self.read(address,1)[0];ptr=self.word(address+self.off('ScriptCommand','argPtr'))
   if ptr:
    if 0x32<=op<=0x39 or 0xd0<=op<=0xd9 or op==0xf6:
     self.mutation_sites.setdefault('text_pointer',address+self.off('ScriptCommand','argPtr'))
     self.text(ptr,'ScriptCommand text')
    else:self.count['nonzero_argPtr_other_semantics_excluded']+=1
 def ref(self,address):
  self.bound(address,1,'ScriptRef')
  if ('ref',address) in self.visited:return
  self.visited.add(('ref',address));self.count['script_refs']+=1
  self.text(self.word(address+self.off('ScriptRef','name')),'ScriptRef name')
  self.command(self.word(address+self.off('ScriptRef','script')))
 def array(self,address,count,kind):
  self.bound(address,count,kind)
  return range(address,address+count*self.size(kind),self.size(kind))
 def sector(self,address):
  self.count['sectors']+=1
  for countfield,ptrfield,kind in [('nLives','lives','GroundLivesData'),('nObjects','objects','GroundObjectData'),('nEffects','effects','GroundEffectData'),('nEvents','events','GroundEventData')]:
   n=self.word(address+self.off('GroundScriptSector',countfield));ptraddr=address+self.off('GroundScriptSector',ptrfield);ptr=self.word(ptraddr)
   if n:self.mutation_sites.setdefault('bad_count',address+self.off('GroundScriptSector',countfield))
   for element in self.array(ptr,n,kind):
    self.count[kind]+=1
    if kind in ('GroundLivesData','GroundObjectData'):
     for i in range(4):self.command(self.word(element+self.off(kind,'scripts')+i*4))
    elif kind=='GroundEffectData':self.command(self.word(element+self.off(kind,'script')))
    else:
     ref=self.word(element+self.off(kind,'script'))
     if ref:self.ref(ref)
   if n:self.mutation_sites.setdefault('nested_pointer',ptraddr)
  station=self.word(address+self.off('GroundScriptSector','station'))
  if station or self.word(address+self.off('GroundScriptSector','hasStation')):
   self.bound(station,1,'ScriptRefPointers',4);self.ref(self.word(station));self.count['stations']+=1
 def run(self):
  table=self.named('gMapScriptTable');assert table[1]%4==0
  for slot in range(table[0],table[0]+table[1],4):
   header=self.word(slot);self.count['map_slots']+=1
   if not header:self.count['null_map_slots']+=1;continue
   self.bound(header,1,'GroundScriptHeader')
   if ('header',header) in self.visited:continue
   self.visited.add(('header',header));self.count['headers']+=1
   n=self.word(header+self.off('GroundScriptHeader','nGroups'));groups=self.word(header+self.off('GroundScriptHeader','groups'))
   for group in self.array(groups,n,'GroundScriptGroup'):
    self.count['groups']+=1
    sectors=self.word(group+self.off('GroundScriptGroup','sectors'));count=self.word(group+self.off('GroundScriptGroup','nSectors'))
    for sector in self.array(sectors,count,'GroundScriptSector'):self.sector(sector)
   links=self.word(header+self.off('GroundScriptHeader','links'))
   if links:self.bound(links,1,'GroundLink');self.count['link_array_pointers']+=1
  table=self.named('gFunctionScriptTable');self.bound(table[0],table[1]//self.size('ScriptRef'),'ScriptRef')
  for address in range(table[0],table[0]+table[1],self.size('ScriptRef')):self.ref(address)
  # Include every declared command array, not only references reachable in map tables.
  for obj in self.by_kind.get('ScriptCommand',[]):
   self.bound(obj[0],obj[1]//self.size('ScriptCommand'),'ScriptCommand');self.walk_commands(obj)
  self.count['script_entrypoints']=len(self.entrypoints);self.count['text_pointers_bounded_and_NUL_terminated']=len(self.texts);self.count['text_pointers_without_sized_objects_excluded']=len(self.excluded_texts)
  return dict(self.count)
def make_layout(sdk,upstream,out):
 source=out/'ground-layout.c';obj=out/'ground-layout.o';lines=['#include <stddef.h>','#include "structs/str_ground_script.h"'];keys=[]
 for kind in TYPES:
  for field in [None]+FIELDS.get(kind,[]):
   key=kind+('.'+field if field else '');keys.append(key)
   expression=f'offsetof(struct {kind}, {field})' if field else f'sizeof(struct {kind})'
   lines.append(f'const unsigned layout_{len(keys)-1} = {expression};')
 source.write_text('\n'.join(lines)+'\n');project=Path(__file__).resolve().parents[1]
 subprocess.run([str(sdk/'bin/arm-vita-eabi-gcc'),'-std=gnu11','-iquote',str(upstream/'include'),'-include',str(project/'engine/full/native_prelude.h'),'-c',str(source),'-o',str(obj)],check=True)
 values={}
 with obj.open('rb') as f:
  elf=ELFFile(f)
  for s in elf.get_section_by_name('.symtab').iter_symbols():
   if s.name.startswith('layout_'):values[keys[int(s.name[7:])]]=struct.unpack_from('<I',elf.get_section(s['st_shndx']).data(),s['st_value'])[0]
 assert len(values)==len(keys);return values
def main():
 p=argparse.ArgumentParser(description=__doc__)
 for name in ('sdk','upstream','elf','output'):p.add_argument(name,type=Path)
 a=p.parse_args();a.sdk=a.sdk.resolve();a.upstream=a.upstream.resolve();a.elf=a.elf.resolve();a.output=a.output.resolve();a.output.mkdir(parents=True,exist_ok=True)
 result={'ok':False,'elf_sha256':hashlib.sha256(a.elf.read_bytes()).hexdigest()};report=a.output/'report.json';report.write_text(json.dumps(result))
 try:
  layout=make_layout(a.sdk,a.upstream,a.output);audit=Auditor(a.elf,a.upstream,layout);counts=audit.run();negative={}
  for key,value in [('nested_pointer',0x06000000),('bad_count',0xffffffff),('text_pointer',0x06000000)]:
   address=audit.mutation_sites[key]
   try:Auditor(a.elf,a.upstream,layout,{address:value}).run()
   except AuditError as error:negative[key]={'detected':True,'field_address':hex(address),'error':str(error)}
   else:raise AuditError(f'Negative control not detected: {key}')
  result.update(ok=True,counts=counts,layout=layout,negative_controls=negative,exclusions=['Control-flow reachability, jump targets, op argument ranges and story semantics','Runtime group/sector/link indices and dynamic script selection','Nullable script/text pointers are permitted; dereference preconditions depend on execution','Text literals lacking sized STT_OBJECT bounds are explicitly excluded, not accepted merely because mapped','Non-message argPtr semantics including special-handler operands','Uncounted GroundLink arrays: pointer/object alignment checked, runtime indexing not checked'])
 except Exception as error:result['error']=str(error);raise
 finally:report.write_text(json.dumps(result,indent=2)+'\n')
 print(json.dumps(result,indent=2))
if __name__=='__main__':main()
