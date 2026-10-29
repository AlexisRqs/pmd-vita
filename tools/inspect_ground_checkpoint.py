#!/usr/bin/env python3
"""Read ground/story state from a trusted local, exact-ELF boot checkpoint.

No CPU execution or mutation. Variable decoding follows event_flag.c's
GetScriptVarRef/GetScriptVarArrayValue; layouts and constants come from Vita GCC.
"""
import argparse,hashlib,json,pickle,re,struct,subprocess
from pathlib import Path
from elftools.elf.elffile import ELFFile
VARS=['SCENARIO_SELECT','SCENARIO_MAIN']+['SCENARIO_SUB'+str(i) for i in range(1,10)]+['GROUND_ENTER','GROUND_ENTER_LINK','GROUND_GETOUT','GROUND_MAP','GROUND_PLACE','DUNGEON_SELECT','DUNGEON_ENTER','DUNGEON_ENTER_INDEX','DUNGEON_RESULT','START_MODE','CLEAR_COUNT','BASE_KIND','BASE_LEVEL','FLAG_KIND','RESCUE_SCENARIO_CONQUEST_LIST']
TYPES=['BIT','U8','S8','U16','S16','S32','U8_2']
def compile_layout(sdk,upstream,out):
 fields={'var_size':'sizeof(struct ScriptVarInfo)','var_type':'offsetof(struct ScriptVarInfo,type)','var_offset':'offsetof(struct ScriptVarInfo,bufOffset)','var_bit':'offsetof(struct ScriptVarInfo,bitOffset)','var_count':'offsetof(struct ScriptVarInfo,arrayLen)','buffer_size':'SCRIPT_VAR_BUFFER_LEN','vars_count':'SCRIPT_VARS_COUNT','ground_size':'sizeof(GroundMapAction)','map':'offsetof(GroundMapAction,groundMapId)','action_group':'offsetof(GroundMapAction,action.group)','action_sector':'offsetof(GroundMapAction,action.sector)','script_group':'offsetof(GroundMapAction,action.scriptData.script.group)','script_sector':'offsetof(GroundMapAction,action.scriptData.script.sector)','script_state':'offsetof(GroundMapAction,action.scriptData.state)','script_opcode':'offsetof(GroundMapAction,action.scriptData.curScriptOp)'}
 fields.update({'id_'+v:v for v in VARS});fields.update({'type_'+t:'SCRIPT_VAR_TYPE_'+t for t in TYPES})
 map_names=sorted(set(re.findall(r'\bMAP_[A-Z0-9_]+\b',(upstream/'include/constants/ground_map.h').read_text()))-{'MAP_COUNT'})
 fields.update({'map_'+v:v for v in map_names})
 source=out/'layout.c';obj=out/'layout.o'
 source.write_text('#include <stddef.h>\n#include "structs/str_ground_script.h"\n#include "script_vars_info.h"\n#include "event_flag.h"\n#include "constants/ground_map.h"\n'+ '\n'.join(f'const unsigned ground_layout_{k} = {v};' for k,v in fields.items())+'\n')
 project=Path(__file__).resolve().parents[1]
 subprocess.run([str(sdk/'bin/arm-vita-eabi-gcc'),'-std=gnu11','-iquote',str(upstream/'include'),'-include',str(project/'engine/full/native_prelude.h'),'-c',str(source),'-o',str(obj)],check=True)
 layout={}
 with obj.open('rb') as f:
  e=ELFFile(f)
  for s in e.get_section_by_name('.symtab').iter_symbols():
   if s.name.startswith('ground_layout_'):layout[s.name[14:]]=struct.unpack_from('<I',e.get_section(s['st_shndx']).data(),s['st_value'])[0]
 assert layout.keys()==fields.keys();return layout

def decode_variable(buffer,kind,offset,bit,count,types):
 if count<1 or offset<0:raise ValueError('Invalid script variable metadata')
 if kind==types['BIT']:
  if bit<0 or offset+(bit+count+7)//8>len(buffer):raise ValueError('Bit variable exceeds global buffer')
  return [(buffer[offset+(bit+i)//8]>>((bit+i)%8))&1 for i in range(count)]
 # GetScriptVarArrayValue reads S32 through u32 (unlike scalar GetScriptVarValue).
 formats={'U8':'B','U8_2':'B','S8':'b','U16':'H','S16':'h','S32':'I'}
 name=next((k for k,v in types.items() if v==kind),None)
 if name not in formats:raise ValueError('Special/local/unhandled script variable type')
 fmt=formats[name];size=struct.calcsize(fmt)
 if offset+count*size>len(buffer):raise ValueError('Script variable exceeds global buffer')
 return list(struct.unpack_from('<'+fmt*count,buffer,offset))

def inspect(elf_path,checkpoint_path,layout):
 digest=hashlib.sha256(elf_path.read_bytes()).hexdigest()
 checkpoint=pickle.loads(checkpoint_path.read_bytes()) # Trusted files generated locally ONLY.
 if checkpoint['elf_sha256']!=digest:raise ValueError('ELF differs from checkpoint')
 with elf_path.open('rb') as f:
  e=ELFFile(f);assert e.elfclass==32 and e.little_endian
  symbols={s.name:(int(s['st_value']),int(s['st_size'])) for s in e.get_section_by_name('.symtab').iter_symbols() if s.name and s['st_info']['bind']!='STB_LOCAL'}
  segments=[(int(s['p_vaddr']),s.data()) for s in e.iter_segments() if s['p_type']=='PT_LOAD']
 def read(address,n,static=False):
  for start,data in checkpoint['memory']:
   if start<=address and address+n<=start+len(data):return data[address-start:address-start+n]
  if static:
   for start,data in segments:
    if start<=address and address+n<=start+len(data):return data[address-start:address-start+n]
  raise ValueError(f'Unmapped checkpoint read {address:#x}+{n}')
 def scalar(address,fmt,static=False):return struct.unpack('<'+fmt,read(address,struct.calcsize(fmt),static))[0]
 table,table_size=symbols['gScriptVarInfo'];base,buffer_size=symbols['gScriptVarBuffer']
 assert buffer_size==layout['buffer_size'] and table_size==layout['vars_count']*layout['var_size']
 buffer=read(base,buffer_size);types={t:layout['type_'+t] for t in TYPES};variables={}
 for name in VARS:
  index=layout['id_'+name];assert index<layout['vars_count'];address=table+index*layout['var_size']
  kind=scalar(address+layout['var_type'],'h',True);offset=scalar(address+layout['var_offset'],'h',True);bit=scalar(address+layout['var_bit'],'h',True);count=scalar(address+layout['var_count'],'h',True)
  values=decode_variable(buffer,kind,offset,bit,count,types)
  variables[name]={'id':index,'type':kind,'values':values}
 maps={v:k.removeprefix('map_') for k,v in layout.items() if k.startswith('map_MAP_')}
 for name in ('GROUND_ENTER','GROUND_GETOUT','GROUND_MAP'):variables[name]['map_name']=maps.get(variables[name]['values'][0])
 ground=scalar(symbols['gGroundMapAction'][0],'I');scene={'action_allocated':bool(ground),'scene_selected':False}
 if ground:
  read(ground,layout['ground_size'])
  map_id=scalar(ground+layout['map'],'h')
  scene.update(map_id=map_id,map_name=maps.get(map_id),scene_selected=map_id>=0)
  for field,fmt in [('action_group','h'),('action_sector','b'),('script_group','h'),('script_sector','b'),('script_state','h'),('script_opcode','B')]:scene[field]=scalar(ground+layout[field],fmt)
 main=variables['SCENARIO_MAIN']['values'];assert len(main)==2
 return {'elf_sha256':digest,'frame':checkpoint['frames'],'ground':scene,'scenario_main':{'main':main[0],'sub':main[1]},'variables':variables,'semantics':{'ground_allocation':'gGroundMapAction is cleared by FreeGroundMapAction; allocation/selected map does not prove scene completion','scenario_main':'Raw original GetScriptVarScenario main/sub pair; no invented chapter thresholds'},'exclusions':['No script execution, transition-success judgment or story-control-flow proof','No special variables, actor-local variables or unnamed ground-main state fields','No mutation of game RAM, checkpoints or saves']}

def main():
 p=argparse.ArgumentParser(description=__doc__)
 for name in ('sdk','upstream','elf','checkpoint','output'):p.add_argument(name,type=Path)
 a=p.parse_args();a.output=a.output.resolve();a.output.mkdir(parents=True,exist_ok=True)
 layout=compile_layout(a.sdk.resolve(),a.upstream.resolve(),a.output)
 result=inspect(a.elf,a.checkpoint,layout)
 (a.output/'layout.json').write_text(json.dumps(layout,indent=2)+'\n');(a.output/'snapshot.json').write_text(json.dumps(result,indent=2)+'\n')
 print(json.dumps({'frame':result['frame'],'ground':result['ground'],'scenario_main':result['scenario_main']},indent=2))
if __name__=='__main__':main()
