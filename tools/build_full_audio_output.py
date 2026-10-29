#!/usr/bin/env python3
"""Test audio block transport and compile Vita's actual SceAudio port backend."""
import argparse,json,subprocess
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__);p.add_argument('sdk',type=Path);p.add_argument('output',type=Path)
a=p.parse_args();project=Path(__file__).resolve().parents[1];base=project/'engine/full';out=a.output.resolve();out.mkdir(parents=True,exist_ok=True)
report=out/'report.json';report.write_text(json.dumps({'results':[{'source':'audio output validation','ok':False}]}))
flags=['-std=c11','-O2','-Wall','-Wextra','-Werror','-I',str(base)]
san=['-fsanitize=address,undefined','-fno-sanitize-recover=all']
def run(args):subprocess.run([str(x) for x in args],check=True)
run(['clang',*flags,*san,base/'platform_audio_blocks.c',project/'tests/audio_blocks_test.c','-o',out/'blocks-test']);run([out/'blocks-test'])
run(['clang',*flags,*san,'-I',project/'tests/vita_audio_stub',base/'platform_audio_blocks.c',base/'platform_vita_audio.c',project/'tests/vita_audio_test.c','-o',out/'vita-api-test']);run([out/'vita-api-test'])
results=[]
for name in ('platform_audio_blocks','platform_vita_audio'):
 source=base/(name+'.c');obj=out/(name+'.o')
 run([a.sdk.resolve()/'bin/arm-vita-eabi-gcc',*flags,'-c',source,'-o',obj]);results.append({'source':str(source),'object':str(obj),'ok':True})
report.write_text(json.dumps({'results':results,'host_tests':'passed','vita_runtime_tested':False},indent=2)+'\n')
print('PASS: audio transport tests and two Vita objects; hardware output untested')
