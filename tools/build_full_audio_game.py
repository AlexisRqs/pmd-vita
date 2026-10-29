#!/usr/bin/env python3
"""Validate and build the original M4A ring-to-native-audio adapter."""
import argparse,json,subprocess
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__)
for name in ('upstream','sdk','output'):p.add_argument(name,type=Path)
a=p.parse_args();root,sdk,out=(getattr(a,x).resolve() for x in ('upstream','sdk','output'));out.mkdir(parents=True,exist_ok=True)
project=Path(__file__).resolve().parents[1];base=project/'engine/full';vendor=base/'vendor/gbapu'
report=out/'report.json';report.write_text(json.dumps({'results':[{'ok':False,'source':'audio adapter validation'}]}))
def run(args):subprocess.run([str(x) for x in args],check=True)
san=['-fsanitize=address,undefined','-fno-sanitize-recover=all'];objects=[]
for source in (base/'platform_audio_game.c',base/'platform_memory.c',project/'tests/audio_game_test.c'):
 obj=out/(source.stem+'-host.o');run(['clang','-std=gnu11','-O2',*san,'-iquote',root/'include','-I',base,'-c',source,'-o',obj]);objects.append(obj)
cpp=[base/'platform_psg.cpp',base/'platform_pcm.cpp']+[vendor/'core/apu'/s for s in ('Gb_Apu.cpp','Gb_Oscs.cpp','Blip_Buffer.cpp','Multi_Buffer.cpp')]
run(['clang++','-std=c++17','-O2',*san,'-I',base,'-I',vendor,*cpp,*objects,'-o',out/'audio-game-test']);run([out/'audio-game-test'])
obj=out/'platform_audio_game.o';source=base/'platform_audio_game.c'
run([sdk/'bin/arm-vita-eabi-gcc','-std=gnu11','-O2','-fno-strict-aliasing','-iquote',root/'include','-I',base,'-c',source,'-o',obj])
report.write_text(json.dumps({'results':[{'source':str(source),'object':str(obj),'ok':True}],'host_tests':'passed'},indent=2)+'\n')
