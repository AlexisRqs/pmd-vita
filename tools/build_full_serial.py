#!/usr/bin/env python3
"""Compile original serial routines using native executable code and register storage."""
import argparse,json,subprocess
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__)
for name in ('upstream','sdk','output'):p.add_argument(name,type=Path)
a=p.parse_args();root,sdk,out=(getattr(a,x).resolve() for x in ('upstream','sdk','output'))
out.mkdir(parents=True,exist_ok=True);report=out/'report.json'
report.write_text(json.dumps({'results':[{'ok':False,'source':'serial build in progress'}]}))
patch=Path(__file__).resolve().parents[1]/'engine/full/patches/0009-native-serial-code.patch'
if subprocess.run(['git','apply','--reverse','--check',str(patch)],cwd=root,capture_output=True).returncode:
 subprocess.run(['git','apply','--check',str(patch)],cwd=root,check=True)
 subprocess.run(['git','apply',str(patch)],cwd=root,check=True)
obj=out/'arm_funcs.o';cc=sdk/'bin/arm-vita-eabi-gcc'
subprocess.run([str(cc),'-c','-x','assembler-with-cpp','-iquote','include','-I','.','src/arm_funcs.s','-o',str(obj)],cwd=root,check=True)
report.write_text(json.dumps({'runnable':False,'results':[{'source':'src/arm_funcs.s','object':str(obj),'ok':True}]},indent=2)+'\n')
print('PASS: original serial ARM routines compiled with native registers')
