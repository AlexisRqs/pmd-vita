#!/usr/bin/env python3
"""Install the pinned minimal GPU library into the supplied private VitaSDK."""
import argparse, hashlib, json, subprocess
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('sdk',type=Path);p.add_argument('checkout',type=Path)
a=p.parse_args();sdk=a.sdk.resolve();root=a.checkout.resolve()
pin='a8f15ab09d5233f0a4e4ad0e8f6ade0da888cbed'
def run(args,**kw):return subprocess.run([str(x) for x in args],check=True,**kw)
if not root.exists():
 run(['git','clone','--no-checkout','https://github.com/xerpi/libvita2d',root])
 run(['git','checkout','--detach',pin],cwd=root)
head=run(['git','rev-parse','HEAD'],cwd=root,capture_output=True,text=True).stdout.strip()
if head!=pin:p.error('Existing checkout is not the pinned revision; no files were changed')
run(['git','diff','--quiet','HEAD'],cwd=root)
units=['vita2d','vita2d_texture','vita2d_draw','utils','vita2d_pgf','bin_packing_2d','texture_atlas','int_htab']
objects=['source/'+x+'.o' for x in units]
base=root/'libvita2d'
# Remove only generated C objects/archive, never the tracked precompiled shaders.
for name in [*objects,'libvita2d.a']:(base/name).unlink(missing_ok=True)
command=['make','-j4','install','VITASDK='+str(sdk),'CC='+str(sdk/'bin/arm-vita-eabi-gcc'),'AR='+str(sdk/'bin/arm-vita-eabi-ar'),'OBJS='+' '.join(objects),'CFLAGS=-Wall -O3 -Iinclude -fno-strict-aliasing']
run(command,cwd=base)
archive=sdk/'arm-vita-eabi/lib/libvita2d.a'
(root/'pmd-build-report.json').write_text(json.dumps({'commit':pin,'license':'MIT','objects':objects,'command':command,'archive_sha256':hashlib.sha256(archive.read_bytes()).hexdigest()},indent=2)+'\n')
