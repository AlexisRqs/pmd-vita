#!/usr/bin/env python3
"""Prove the nested AX audit rejects broken relocation and out-of-range pose IDs."""
import argparse
import json
from pathlib import Path
import struct
import subprocess
import sys
from elftools.elf.elffile import ELFFile
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('elf',type=Path)
p.add_argument('passing_report',type=Path)
p.add_argument('output',type=Path)
a=p.parse_args();a.output.mkdir(parents=True,exist_ok=True)
report=json.loads(a.passing_report.read_text())
import hashlib
assert report['elf_sha256']==hashlib.sha256(a.elf.read_bytes()).hexdigest()
assert not report['errors'] and len(report['entries'])>=2
with a.elf.open('rb') as f:
    elf=ELFFile(f)
    segments=[(int(s['p_vaddr']),int(s['p_filesz']),int(s['p_offset'])) for s in elf.iter_segments() if s['p_type']=='PT_LOAD']
blob=bytearray(a.elf.read_bytes())
def offset(addr):
    for start,size,at in segments:
        if start<=addr<start+size:return at+addr-start
    raise ValueError(hex(addr))
def word(addr):return struct.unpack_from('<I',blob,offset(addr))[0]
first,second=report['entries'][:2]
# Replace one real nested pose-table pointer with an invalid relocation.
poses=word(first['root']);struct.pack_into('<I',blob,offset(poses),0xDEADBEEF)
# Keep another pointer graph valid but corrupt its first live animation pose ID.
anims=word(second['root']+4);directions=word(anims);sequence=word(directions)
assert blob[offset(sequence)]!=0
struct.pack_into('<h',blob,offset(sequence+2),32767)
fixture=a.output/'negative.elf';fixture.write_bytes(blob)
try:
    tool=Path(__file__).with_name('audit_full_sprite_resources.py')
    result=subprocess.run([sys.executable,str(tool),str(fixture),str(a.output/'audit')],capture_output=True,text=True)
    (a.output/'audit.log').write_text(result.stdout+result.stderr)
    assert result.returncode!=0
    errors=json.loads((a.output/'audit/report.json').read_text())['errors']
    assert {x['name'] for x in errors}=={first['name'],second['name']},errors
    assert any('deadbeef' in x['error'] for x in errors),errors
    assert any('pose index' in x['error'] for x in errors),errors
    (a.output/'report.json').write_text(json.dumps({'ok':True,'expected_failures':errors},indent=2)+'\n')
    print(json.dumps(errors,indent=2))
finally:
    fixture.unlink(missing_ok=True)
