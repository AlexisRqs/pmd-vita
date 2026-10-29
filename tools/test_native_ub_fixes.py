#!/usr/bin/env python3
"""Test actual window header and xwave handlers at O2 under host ASan/UBSan."""
import argparse
import json
from pathlib import Path
import subprocess

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('upstream', type=Path)
p.add_argument('output', type=Path)
a = p.parse_args()
project = Path(__file__).resolve().parents[1]
upstream, out = a.upstream.resolve(), a.output.resolve()
out.mkdir(parents=True, exist_ok=True)
report = out / 'report.json'
report.write_text(json.dumps({'ok': False, 'status': 'in progress'}))
platform = project / 'engine/full'
flags = ['clang', '-std=gnu11', '-O2', '-fno-strict-aliasing',
         '-ffunction-sections', '-fdata-sections',
         '-fsanitize=address,undefined', '-fno-sanitize-recover=all',
         '-Wno-pointer-sign', '-Wno-pointer-to-int-cast',
         '-Wno-int-to-pointer-cast', '-iquote', str(upstream / 'include'),
         '-include', str(platform / 'native_prelude.h')]
results=[]
for source, test in [('text_2.c','window_header_bounds_test.c'),('m4a.c','xwave_test.c')]:
    obj=out/(source+'.o')
    subprocess.run(flags+['-iquote',str(platform),'-Wno-incompatible-pointer-types','-c',str(upstream/'src'/source),'-o',str(obj)],check=True)
    exe=out/(source+'-test')
    subprocess.run(flags+[str(project/'tests'/test),str(obj),'-Wl,-dead_strip','-o',str(exe)],check=True)
    result=subprocess.run([str(exe)],check=True,text=True,capture_output=True)
    print(result.stdout,end='')
    results.append({'source':source,'ok':True,'result':result.stdout.strip()})
report.write_text(json.dumps({'ok':True,'optimization':'O2','sanitizers':['address','undefined'],'results':results},indent=2))
