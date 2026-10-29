#!/usr/bin/env python3
"""Verify official reward literals, ARM substitutions and glyph widths using synthetic names only."""
import argparse,hashlib,json,struct
from pathlib import Path
from elftools.elf.elffile import ELFFile
from unicorn import Uc,UC_ARCH_ARM,UC_MODE_ARM,UcError,UC_PROT_READ,UC_PROT_WRITE,UC_PROT_EXEC,UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_SP,UC_ARM_REG_LR,UC_ARM_REG_PC,UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3,UC_ARM_REG_C1_C0_2,UC_ARM_REG_FPEXC
p=argparse.ArgumentParser(description=__doc__);p.add_argument('elf',type=Path);p.add_argument('output',type=Path)
a=p.parse_args();out=a.output.resolve();out.mkdir(parents=True,exist_ok=True);report=out/'report.json';report.write_text(json.dumps({'ok':False,'reason':'test in progress'}))
with a.elf.open('rb') as f:
 elf=ELFFile(f);symbols={s.name:int(s['st_value']) for s in elf.get_section_by_name('.symtab').iter_symbols()}
 segments=[(int(s['p_vaddr']),int(s['p_memsz']),s.data(),int(s['p_flags'])) for s in elf.iter_segments() if s['p_type']=='PT_LOAD']
u=Uc(UC_ARCH_ARM,UC_MODE_ARM)
# Vita enables VFP/NEON; O2 original C now uses vector instructions.
u.reg_write(UC_ARM_REG_C1_C0_2,0x00f00000);u.reg_write(UC_ARM_REG_FPEXC,0x40000000)
for address,size,data,flags in segments:
 low=address&~4095;high=(address+size+4095)&~4095
 perm=(UC_PROT_READ if flags&4 else 0)|(UC_PROT_WRITE if flags&2 else 0)|(UC_PROT_EXEC if flags&1 else 0)
 u.mem_map(low,high-low,perm);u.mem_write(address,data)
u.mem_map(0x90000000,0x200000);stop=0x90000000;stack=0x901ff000;scratch=0x90001000
regs=(UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3)
# Vita imports are resolved by the OS, not executable ARM functions in this ELF.
# Supply only these three OS memory primitives, never game/resource routines.
os_calls={}
def memory_service(name):
 def callback(machine,address,size,context):
  dest=machine.reg_read(UC_ARM_REG_R0);source=machine.reg_read(UC_ARM_REG_R1);count=machine.reg_read(UC_ARM_REG_R2)
  assert count<0x1000000,(name,'unexpected count',count)
  writable=0x90000000<=dest and dest+count<=0x90200000
  writable|=any((flags&2) and start<=dest and dest+count<=start+length for start,length,raw,flags in segments)
  assert writable,(name,'invalid write target',hex(dest),count)
  raw=bytes([source&255])*count if name=='sceClibMemset' else bytes(machine.mem_read(source,count))
  if count:machine.mem_write(dest,raw)
  os_calls[name]=os_calls.get(name,0)+1
  machine.reg_write(UC_ARM_REG_PC,machine.reg_read(UC_ARM_REG_LR))
 return callback
for name in ('sceClibMemset','sceClibMemcpy','sceClibMemmove'):
 u.hook_add(UC_HOOK_CODE,memory_service(name),begin=symbols[name]&~1,end=symbols[name]&~1)

def call(name,*args):
 u.reg_write(UC_ARM_REG_SP,stack);u.reg_write(UC_ARM_REG_LR,stop)
 for i,r in enumerate(regs):u.reg_write(r,args[i] if i<len(args) else 0)
 try:u.emu_start(symbols[name],stop,count=50000000)
 except UcError as error:raise RuntimeError(f'{name}: {error}, PC={u.reg_read(UC_ARM_REG_PC):#x}') from error
 assert u.reg_read(UC_ARM_REG_PC)==stop,(name,'instruction budget exhausted',hex(u.reg_read(UC_ARM_REG_PC)))
 assert u.reg_read(UC_ARM_REG_SP)==stack,(name,'stack mismatch')
 return u.reg_read(UC_ARM_REG_R0)

root=Path(__file__).resolve().parent
manifest=json.loads((root/'rom-build/mission-reward-fr.json').read_text())
recipe=json.loads((root/'rom-build/recipe.json').read_text())
# Newlib's Vita reentrancy import needs the same service double as the boot test.
def reent_fixture(machine,address,size,context):
 machine.reg_write(UC_ARM_REG_R0,struct.unpack('<I',machine.mem_read(symbols['_impure_ptr'],4))[0])
 machine.reg_write(UC_ARM_REG_PC,machine.reg_read(UC_ARM_REG_LR))
u.hook_add(UC_HOOK_CODE,reent_fixture,begin=symbols['__getreent']&~1,end=symbols['__getreent']&~1)
call('pmd_memory_reset');call('InitFileSystem');call('LoadCharmaps');call('LoadRescueTeamInfo')
# Explicit fixture: a team name has been selected. No saved game is loaded.
def quest_fixture(machine,address,size,context):
 machine.reg_write(UC_ARM_REG_R0,1);machine.reg_write(UC_ARM_REG_PC,machine.reg_read(UC_ARM_REG_LR))
u.hook_add(UC_HOOK_CODE,quest_fixture,begin=symbols['CheckQuest']&~1,end=symbols['CheckQuest']&~1)
def cstr(address):return bytes(u.mem_read(address,2048)).split(b'\0')[0]
def put(name,value,offset=0):u.mem_write(symbols[name]+offset,value+b'\0')
import re
checks=[];max_width=0
for team in [b'BIP BOOP',b'WWWWWWWWWW']:
 u.mem_write(scratch,team+b'\0');call('SetRescueTeamName',scratch)
 for quantity in [1,5,1000]:
  put('gSpeakerNameBuffer',b'Rattata')
  put('gFormatBuffer_Monsters',b'Pikachu')
  put('gFormatBuffer_Monsters',b'Grade Bronze',160)
  put('gFormatBuffer_Monsters',b'Grade Argent',240)
  item={1:b'Baie Ceriz',5:b'5 Gravalroches',1000:b'99 Gravalroches'}[quantity]
  put('gFormatBuffer_Items',item,80)
  put('gFormatBuffer_FriendArea',b'Plaine Sauvage')
  u.mem_write(symbols['gFormatArgs'],struct.pack('<i',quantity))
  for row in manifest:
   raw=cstr(symbols[row['symbol']]);assert hashlib.sha256(raw).hexdigest()==row['key']
   assert recipe['records'][row['key']]['spans'][0][1]==row['offset']
   flags=1 if row['symbol'] in ['gUnknown_80E0434','gUnknown_80E04B4','gUnknown_80E0640'] else 0
   # Speaker flag below is taken from the engine enum, checked in source review.
   flags=8 if flags else 0
   target=scratch+4096;u.mem_write(target,b'\xcc'*4096)
   call('FormatString',symbols[row['symbol']],target,target+2048,flags)
   rendered=cstr(target);assert b'$' not in rendered
   assert bytes(u.mem_read(target+2048,16))==b'\xcc'*16
   for token,value in [(b'$t',team),(b'$d0',str(quantity).encode()),(b'$i1',item),(b'$h',b'Plaine Sauvage')]:
    if token in raw:assert value in rendered,(row,token,rendered)
   assert rendered.count(b'#P')==raw.count(b'#P')
   assert all(page.count(b'\n')<3 for page in rendered.split(b'#P'))
   if row['symbol']=='sMissionOnePointFR':assert b' point de ' in rendered and b' points ' not in rendered
   widths=[];page_lines=[[]]
   for line in re.split(rb'\n|#P',rendered):
    line=re.sub(rb'#(?:[Cc].|[Rr+W])',b'',line)
    codes=[];i=0
    while i<len(line):
     code=line[i];i+=1
     if code==126:code=int(line[i:i+2],16);i+=2
     elif code in [0x81,0x82,0x83,0x84,0x87]:code=code*256+line[i];i+=1
     codes.append(code)
    width=0
    for code in codes:
     record=call('GetCharacter',code);assert record
     actual,w=struct.unpack('<Hh',u.mem_read(record+4,4));assert actual==code,(code,actual)
     width+=w
    page_lines[0].append(codes)
    widths.append(width);max_width=max(max_width,width)
   if team==b'BIP BOOP' and quantity==5:
    # Contact sheet using the actual linked 4bpp glyph bitmaps, at native width.
    pixels=bytearray(bytes([16,40,112])*(240*max(48,len(page_lines[0])*16+8)))
    height=len(pixels)//720
    for line_index,codes in enumerate(page_lines[0]):
     x=8;y=4+line_index*16
     for code in codes:
      record=call('GetCharacter',code)
      data,actual,w=struct.unpack('<IHh',u.mem_read(record,8));bitmap=bytes(u.mem_read(data,66))
      for gy in range(11):
       for gx in range(12):
        value=(bitmap[gy*6+gx//2]>>((gx%2)*4))&15
        if value and x+gx<240:
         at=((y+gy)*240+x+gx)*3;pixels[at:at+3]=bytes([255,255,255])
      x+=w
    (out/(row['symbol']+'.ppm')).write_bytes(('P6\n240 '+str(height)+'\n255\n').encode()+pixels)
   checks.append({'symbol':row['symbol'],'team':team.decode(),'quantity':quantity,'widths':widths,'pages':raw.count(b'#P')+1})
# Exercise the real item-name/quantity formatter used by mission rewards.
call('LoadItemParameters')
item_cases=[];item_address=scratch+0x18000;options=item_address+16;item_output=options+32
u.mem_write(options,struct.pack('<I',0)+bytes(4)+bytes([1])+bytes(3))
for item_id in [67,7]:  # Cheri Berry and Gravelrock, upstream constants.
 for quantity in [1,5,99]:
  u.mem_write(item_address,bytes([1,quantity,item_id,0]))
  call('sub_8090E14',item_output,item_address,options)
  label=cstr(item_output)
  assert (b'Baie Ceriz' if item_id==67 else b'Gravalroche') in label
  if item_id==7:assert str(quantity).encode() in label
  put('gFormatBuffer_Items',label,80)
  call('FormatString',symbols['gUnknown_80E0640'],scratch+4096,scratch+6144,8)
  assert label in cstr(scratch+4096)
  item_cases.append({'id':item_id,'quantity':quantity})
# Execute the real reward-state branch; only audio/UI delivery are intercepted.
selected=[]
def capture_dialogue(machine,address,size,context):
 selected.append(machine.reg_read(UC_ARM_REG_R0))
 machine.reg_write(UC_ARM_REG_PC,machine.reg_read(UC_ARM_REG_LR))
def silence_audio(machine,address,size,context):
 machine.reg_write(UC_ARM_REG_PC,machine.reg_read(UC_ARM_REG_LR))
for name,callback in [('CreateDialogueBoxAndPortrait',capture_dialogue),('PlaySound',silence_audio)]:
 u.hook_add(UC_HOOK_CODE,callback,begin=symbols[name]&~1,end=symbols[name]&~1)
work=scratch+0x10000;reward=work+0x100
u.mem_write(symbols['sMRWork'],struct.pack('<I',work))
for quantity in [1,5,1000]:
 u.mem_write(work,bytes(0x84));u.mem_write(work,struct.pack('<I',7))
 u.mem_write(work+0x10,struct.pack('<I',reward))
 u.mem_write(reward,bytes(0x28));u.mem_write(reward+0x24,struct.pack('<I',quantity))
 u.mem_write(symbols['gRescueTeamInfo']+12,struct.pack('<I',0))
 call('MR_InitStateDialogue')
 expected='sMissionOnePointFR' if quantity==1 else 'gUnknown_80E0670'
 assert selected[-1]==symbols[expected]
 assert struct.unpack('<I',u.mem_read(symbols['gRescueTeamInfo']+12,4))[0]==quantity
 assert struct.unpack('<I',u.mem_read(work+4,4))[0]==(8 if quantity>=50 else 9)
assert max_width<=224,max_width
report.write_text(json.dumps({'ok':True,'elf_sha256':hashlib.sha256(a.elf.read_bytes()).hexdigest(),'official_strings':10,'singular_variant':1,'formatter_cases':len(checks),'reward_branch_cases':3,'item_quantity_cases':item_cases,'max_line_width':max_width,'width_limit':224,'overlong':[x for x in checks if max(x['widths'])>224],'fixture':'CheckQuest returns true; synthetic team and format buffers; Newlib reentrancy import; audio and dialogue delivery intercepted for reward branch; no saves','preview_scope':'actual linked glyph bitmaps; diagnostic white text strips, not an in-game capture','checks':checks},indent=2)+'\n')
print('PASS: 10 official strings + singular,',len(checks),'ARM formatting cases; maximum width',max_width)
