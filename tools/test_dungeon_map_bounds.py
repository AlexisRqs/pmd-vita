#!/usr/bin/env python3
"""Run the actual dungeon-map reset at O2 under host ASan and UBSan."""
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
obj = out / 'dungeon_map.o'
subprocess.run(flags + ['-c', str(upstream / 'src/dungeon_map.c'),
                        '-o', str(obj)], check=True)
exe = out / 'dungeon-map-bounds-test'
subprocess.run(flags + [str(project / 'tests/dungeon_map_bounds_test.c'),
                        str(obj), '-Wl,-dead_strip', '-o', str(exe)], check=True)
result = subprocess.run([str(exe)], check=True, text=True, capture_output=True)
print(result.stdout, end='')
report.write_text(json.dumps({'ok': True, 'optimization': 'O2',
                             'sanitizers': ['address', 'undefined'],
                             'source': str(upstream / 'src/dungeon_map.c'),
                             'result': result.stdout.strip()}, indent=2))
