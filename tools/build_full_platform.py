#!/usr/bin/env python3
"""Test native platform services on host and produce their Vita objects."""
import argparse
import json
import tempfile
from pathlib import Path
import subprocess
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('sdk',type=Path)
p.add_argument('output',type=Path)
p.add_argument('--upstream',type=Path,required=True)
a=p.parse_args()
project=Path(__file__).resolve().parents[1]
sdk,out=a.sdk.resolve(),a.output.resolve()
out.mkdir(parents=True,exist_ok=True)
report=out/'report.json'
report.write_text(json.dumps({'results':[{'ok':False,'source':'platform validation in progress'}]}))
platform=project/'engine/full'
source=platform/'platform_memory.c'
test=project/'tests/platform_memory_test.c'
subprocess.run(['clang','-std=c11','-Wall','-Wextra','-Werror','-O2','-fsanitize=address,undefined','-fno-sanitize-recover=all','-I',str(platform),str(source),str(test),'-o',str(out/'memory-test')],check=True)
subprocess.run([str(out/'memory-test')],check=True)
subprocess.run(['clang','-std=gnu11','-O2','-fno-strict-aliasing','-fsanitize=address,undefined','-fno-sanitize-recover=all',
                '-Wno-pointer-sign','-Wno-pointer-to-int-cast','-Wno-int-to-pointer-cast',
                '-iquote',str(a.upstream.resolve()/'include'),'-I',str(platform),str(source),
                str(project/'tests/platform_macros_test.c'),'-o',str(out/'macros-test')],check=True)
subprocess.run([str(out/'macros-test')],check=True)
video=platform/'platform_video.c'
subprocess.run(['clang','-std=c11','-Wall','-Wextra','-Werror','-O2','-fsanitize=address,undefined','-fno-sanitize-recover=all',
                '-I',str(platform),str(source),str(video),str(project/'tests/platform_video_test.c'),
                '-o',str(out/'video-test')],check=True)
subprocess.run([str(out/'video-test')],check=True)
subprocess.run(['clang','-std=c11','-O2','-fsanitize=address,undefined','-fno-sanitize-recover=all',
                '-I',str(project/'include'),'-I',str(platform),str(source),str(video),
                str(project/'src/render.c'),str(project/'upstream/decompress_at.c'),
                str(project/'tests/platform_title_test.c'),'-o',str(out/'title-test')],check=True)
subprocess.run([str(out/'title-test'),str(project/'private-assets'),str(out/'title.ppm')],check=True)

frame=platform/'platform_frame.c'
original_objects=[]
for name in ('reg_control','cpu','bg_control','input','code_800C9CC'):
    obj=out/('host-'+name+'.o')
    subprocess.run(['clang','-std=gnu11','-O2','-fno-strict-aliasing','-fsanitize=address,undefined','-fno-sanitize-recover=all',
                    '-Wno-pointer-sign','-Wno-pointer-to-int-cast','-Wno-void-pointer-to-int-cast',
                    '-Wno-int-to-pointer-cast','-iquote',str(a.upstream.resolve()/'include'),
                    '-include',str(platform/'native_prelude.h'),'-c',str(a.upstream.resolve()/'src'/ (name+'.c')),
                    '-o',str(obj)],check=True)
    original_objects.append(str(obj))
subprocess.run(['clang','-std=gnu11','-O2','-fno-strict-aliasing','-fsanitize=address,undefined','-fno-sanitize-recover=all',
                '-Wno-pointer-sign','-iquote',str(a.upstream.resolve()/'include'),'-I',str(platform),
                str(source),str(video),str(frame),str(platform/'platform_speed.c'),str(platform/'platform_settings.c'),str(project/'tests/platform_frame_test.c'),
                *original_objects,'-o',str(out/'frame-test')],check=True)
subprocess.run([str(out/'frame-test')],check=True)
flash=platform/'platform_flash.c'
flash_objects=[]
for name in ('save','flash','memory'):
    obj=out/('host-'+name+'.o')
    subprocess.run(['clang','-std=gnu11','-O2','-fno-strict-aliasing','-fsanitize=address,undefined','-fno-sanitize-recover=all',
                    '-Wno-pointer-sign','-Wno-pointer-to-int-cast','-Wno-int-to-pointer-cast',
                    '-iquote',str(a.upstream.resolve()/'include'),'-include',str(platform/'native_prelude.h'),
                    '-c',str(a.upstream.resolve()/'src'/(name+'.c')),'-o',str(obj)],check=True)
    flash_objects.append(str(obj))
subprocess.run(['clang','-std=gnu11','-O2','-fno-strict-aliasing','-fsanitize=address,undefined','-fno-sanitize-recover=all',
                '-Wno-pointer-sign','-iquote',str(a.upstream.resolve()/'include'),'-I',str(platform),
                str(flash),str(source),str(project/'tests/platform_flash_test.c'),*flash_objects,
                '-Wl,-dead_strip','-o',str(out/'flash-test')],check=True)
with tempfile.TemporaryDirectory(prefix='flash-test-',dir=out) as directory:
    subprocess.run([str(out/'flash-test'),directory],check=True)

report=out/'report.json'
report.write_text(json.dumps({'results':[{'ok':False,'source':'platform build incomplete'}]}))
results=[]
for unit in (source,video,frame,flash):
    obj=out/(unit.stem+'.o')
    obj.unlink(missing_ok=True)
    subprocess.run([str(sdk/'bin/arm-vita-eabi-gcc'),'-std=c11','-Wall','-Wextra','-Werror','-O2',
                    '-fno-strict-aliasing','-c',str(unit),'-o',str(obj)],check=True)
    results.append({'ok':True,'source':str(unit),'object':str(obj)})
report.write_text(json.dumps({'runnable':False,'results':results},indent=2))
