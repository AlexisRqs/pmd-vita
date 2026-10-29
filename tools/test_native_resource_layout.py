#!/usr/bin/env python3
"""Verify original binary sprite/script record sizes with the actual Vita ABI."""
import argparse
import json
from pathlib import Path
import subprocess
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('upstream',type=Path)
p.add_argument('sdk',type=Path)
p.add_argument('output',type=Path)
a=p.parse_args()
project=Path(__file__).resolve().parents[1]
out=a.output.resolve();out.mkdir(parents=True,exist_ok=True)
report=out/'report.json';report.write_text(json.dumps({'ok':False}))
source=project/'tests/native_resource_layout_test.c'
subprocess.run([str(a.sdk.resolve()/'bin/arm-vita-eabi-gcc'),'-std=gnu11','-iquote',str(a.upstream.resolve()/'include'),'-include',str(project/'engine/full/native_prelude.h'),'-c',str(source),'-o',str(out/'resource-layout.o')],check=True)
report.write_text(json.dumps({'ok':True,'size_assertions':source.read_text().count('_Static_assert'),'compiler':'arm-vita-eabi-gcc','scope':'Sprite and ground script records; not a full ABI audit'},indent=2))
print(report.read_text())
