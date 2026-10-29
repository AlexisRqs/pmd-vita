#!/usr/bin/env python3
"""Compile adapted original ARM/Thumb sound engine. Does not supply audio output."""
import argparse,json,subprocess
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('upstream',type=Path);p.add_argument('sdk',type=Path);p.add_argument('output',type=Path)
a=p.parse_args();root,sdk,out=(x.resolve() for x in (a.upstream,a.sdk,a.output))
out.mkdir(parents=True,exist_ok=True)
report=out/'report.json';report.write_text(json.dumps({'results':[{'ok':False,'source':'audio build in progress'}]}))
patchdir=Path(__file__).resolve().parents[1]/'engine/full/patches'
for name in ('0006-native-m4a-addresses.patch','0008-native-psg-events.patch'):
 patch=patchdir/name
 if subprocess.run(['git','apply','--reverse','--check',str(patch)],cwd=root,capture_output=True).returncode:
  subprocess.run(['git','apply','--check',str(patch)],cwd=root,check=True)
  subprocess.run(['git','apply',str(patch)],cwd=root,check=True)
cc=str(sdk/'bin/arm-vita-eabi-gcc')
subprocess.run([cc,'-E','-x','assembler-with-cpp','-iquote','include','-I','.', 'src/m4a_1.s','-o',str(out/'m4a_1.s')],cwd=root,check=True)
obj=out/'m4a_1.o';obj.unlink(missing_ok=True)
subprocess.run([cc,'-c','-x','assembler',str(out/'m4a_1.s'),'-o',str(obj)],cwd=root,check=True)
report.write_text(json.dumps({'runnable':False,'results':[{'ok':True,'source':'src/m4a_1.s','object':str(obj)}]},indent=2))
print('Adapted original sound assembler compiled; output/PSG integration still required.')
