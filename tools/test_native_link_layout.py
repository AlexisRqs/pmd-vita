#!/usr/bin/env python3
"""Check payload ABI assumptions with Vita GCC; not a complete compatibility ID."""
import argparse,json,subprocess,hashlib
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__)
for name in ('upstream','sdk','output'):p.add_argument(name,type=Path)
a=p.parse_args();project=Path(__file__).resolve().parents[1];out=a.output.resolve();out.mkdir(parents=True,exist_ok=True)
report=out/'report.json';report.write_text(json.dumps({'ok':False}))
source=project/'tests/native_link_layout_test.c'
subprocess.run([str(a.sdk.resolve()/'bin/arm-vita-eabi-gcc'),'-std=gnu11','-iquote',str(a.upstream.resolve()/'include'),'-include',str(project/'engine/full/native_prelude.h'),'-c',str(source),'-o',str(out/'link-layout.o')],check=True)
report.write_text(json.dumps({'ok':True,'assertions':source.read_text().count('_Static_assert'),'source_sha256':hashlib.sha256(source.read_bytes()).hexdigest(),'payload_bytes':{'0/1':8,'2/3':48,'4/5':112,'6/7':48,'9/10':180},'scope':'Native sizes and Wonder Mail flattened text offsets only; not field serialization, GBA compatibility or network session validation'},indent=2)+'\n')
print('PASS: native link payload sizes and flattened text boundaries')
