#!/usr/bin/env python3
"""Verify the actual adapted fatal halt; dead-strip unrelated game functions."""
import argparse,platform,signal,subprocess,json
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('upstream',type=Path);p.add_argument('output',type=Path)
a=p.parse_args();root=a.upstream.resolve();out=a.output.resolve();out.mkdir(parents=True,exist_ok=True)
project=Path(__file__).resolve().parents[1]
report=out/'report.json';report.write_text(json.dumps({'ok':False,'reason':'test in progress'}))
strip='-Wl,-dead_strip' if platform.system()=='Darwin' else '-Wl,--gc-sections'
cmd=['clang','-std=gnu11','-O2','-ffunction-sections','-fdata-sections','-Wno-pointer-to-int-cast','-Wno-int-to-pointer-cast','-Wno-pointer-sign','-iquote',str(root/'include'),'-include',str(project/'engine/full/native_prelude.h'),str(root/'src/code_800D090.c'),str(project/'tests/native_halt_test.c'),strip,'-o',str(out/'halt-test')]
subprocess.run(cmd,check=True)
r=subprocess.run([str(out/'halt-test')],capture_output=True,text=True)
assert r.returncode==-signal.SIGABRT,(r.returncode,r.stderr)
assert 'PMD native fatal halt' in r.stderr
report.write_text(json.dumps({'ok':True,'returncode':r.returncode,'diagnostic':r.stderr.strip()},indent=2)+'\n')
print('PASS: original fatal halt emits diagnostic and aborts without a GBA BIOS call')
