#!/usr/bin/env python3
"""Syntax audit only: reports native portability errors, NEVER runs placeholder assets."""
import argparse,concurrent.futures,json,subprocess
from pathlib import Path
p=argparse.ArgumentParser();p.add_argument('upstream',type=Path);p.add_argument('output',type=Path);p.add_argument('--objects',action='store_true');a=p.parse_args()
root=a.upstream.resolve();out=a.output.resolve();out.mkdir(parents=True,exist_ok=True)
project=Path(__file__).resolve().parents[1]
sources=sorted((root/'src').glob('*.c'))
def audit(source):
 log=out/(source.stem+'.log')
 cmd=['clang','-std=gnu11','-fsyntax-only','-Wno-everything','-ferror-limit=6','-iquote',str(root/'include'),'-include',str(project/'engine/native_engine.h'),str(source)]
 if a.objects:
  cmd.remove('-fsyntax-only');cmd+=['-c','-O0','-o',str(out/(source.stem+'.o'))]
 result=subprocess.run(cmd,cwd=root,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True)
 log.write_text(result.stdout)
 errors=[line for line in result.stdout.splitlines() if 'error:' in line]
 return {'source':source.name,'ok':result.returncode==0,'errors':errors}
with concurrent.futures.ThreadPoolExecutor(max_workers=4) as pool:results=list(pool.map(audit,sources))
(out/'report.json').write_text(json.dumps({'kind':('object compile' if a.objects else 'syntax-only')+'; asset placeholders NOT validated','files':results},indent=2)+'\n')
passed=sum(r['ok'] for r in results)
print(f'Native audit: {passed}/{len(results)} translation units pass; {len(results)-passed} need portability work')
for r in results:
 if not r['ok']:print(r['source'],r['errors'][0] if r['errors'] else 'compiler failed')
