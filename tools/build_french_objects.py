#!/usr/bin/env python3
from pathlib import Path
import subprocess,json,argparse
p=argparse.ArgumentParser(description='Compile only the five French variant objects')
p.add_argument('--gameplay-report',type=Path,help='Compile the sources selected by the reusable gameplay importer')
p.add_argument('upstream',type=Path);p.add_argument('sdk',type=Path);p.add_argument('variant',type=Path);p.add_argument('original_report',type=Path)
a=p.parse_args();root=a.upstream.resolve();out=a.variant.resolve();sdk=a.sdk.resolve();base=Path(__file__).resolve().parents[1]/'engine/full';cc=sdk/'bin/arm-vita-eabi-gcc'
flags=['-std=gnu11','-iquote',str(root/'include'),'-iquote',str(root/'src'),'-iquote',str(base),'-include',str(base/'native_prelude.h'),'-Wno-pointer-sign','-Wno-error=implicit-function-declaration','-Wno-error=incompatible-pointer-types','-Wno-error=int-conversion']
report=json.loads(a.original_report.read_text())
names=[Path(x).stem for x in json.loads(a.gameplay_report.read_text())['compile_sources']] if a.gameplay_report else ['main_menu2','personality_test1','personality_test2','load_screen','ground_data_s01_station']
for name in names:
 src=out/('source/src/'+name+'.c');obj=out/(name+'.o')
 subprocess.run([str(cc),'-E',*flags,str(src),'-o',str(out/(name+'.i'))],cwd=root,check=True)
 r=subprocess.run([str(root/'tools/preproc/preproc'),str(out/(name+'.i')),'charmap.txt'],cwd=root,check=True,capture_output=True);expanded=out/(name+'.expanded.i');expanded.write_bytes(r.stdout)
 subprocess.run([str(cc),'-x','cpp-output','-std=gnu11','-O2','-fno-strict-aliasing','-Wno-error=implicit-function-declaration','-Wno-error=incompatible-pointer-types','-Wno-error=int-conversion','-c',str(expanded),'-o',str(obj)],check=True)
 for x in report['results']:
  if x['source']=='src/'+name+'.c':x['object']=str(obj)
(out/'combined-report.json').write_text(json.dumps(report,indent=2));print('PASS:',len(names),'localized native objects; original checkout untouched')
