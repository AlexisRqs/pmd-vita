#!/usr/bin/env python3
"""Validate PSG synthesis on host and compile the same sources for Vita."""
import argparse, hashlib, json, subprocess
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('sdk',type=Path);p.add_argument('output',type=Path)
a=p.parse_args();project=Path(__file__).resolve().parents[1]
base=project/'engine/full';vendor=base/'vendor/gbapu';out=a.output.resolve();out.mkdir(parents=True,exist_ok=True)
report=out/'report.json';report.write_text(json.dumps({'results':[{'source':'PSG validation in progress','ok':False}]}))
manifest=json.loads((vendor/'manifest.json').read_text())
for name, expected in manifest['files'].items():
    actual=hashlib.sha256((vendor/'core/apu'/name).read_bytes()).hexdigest()
    if actual!=expected:raise RuntimeError('Vendored source differs from pinned manifest: '+name)
sources=[base/'platform_psg.cpp',base/'platform_pcm.cpp']+[vendor/'core/apu'/n for n in ('Gb_Apu.cpp','Gb_Oscs.cpp','Blip_Buffer.cpp','Multi_Buffer.cpp')]
flags=['-std=c++17','-O2','-fno-strict-aliasing','-I',str(base),'-I',str(vendor)]
san=['-fsanitize=address,undefined','-fno-sanitize-recover=all']
def run(args):subprocess.run([str(x) for x in args],check=True)
run(['clang','-std=c11','-O2',*san,'-I',base,'-c',base/'platform_memory.c','-o',out/'host-memory.o'])
run(['clang++',*flags,*san,*sources,project/'tests/platform_psg_test.cpp',out/'host-memory.o','-o',out/'psg-test'])
run([out/'psg-test'])
run(['clang++',*flags,*san,*sources,project/'tests/platform_pcm_test.cpp',out/'host-memory.o','-o',out/'pcm-test'])
run([out/'pcm-test'])
run(['clang++',*flags,*san,*sources,project/'tests/psg_replay.cpp',out/'host-memory.o','-o',out/'replay'])
run(['clang++',*flags,*san,*sources,project/'tests/audio_replay.cpp',out/'host-memory.o','-o',out/'audio-replay'])
results=[]
for source in sources:
 obj=out/(source.stem+'.o')
 run([a.sdk.resolve()/'bin/arm-vita-eabi-g++',*flags,'-fno-exceptions','-fno-rtti','-c',source,'-o',obj])
 results.append({'source':str(source),'object':str(obj),'ok':True})
report.write_text(json.dumps({'results':results,'host_tests':'passed'},indent=2)+'\n')
print('PASS: PSG host validation and six Vita objects')
