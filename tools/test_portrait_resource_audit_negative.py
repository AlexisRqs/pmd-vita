#!/usr/bin/env python3
"""Prove the portrait audit rejects invalid relocation, output size and AT backreferences."""
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
p.add_argument('upstream',type=Path)
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
first,second,third=report['entries'][:3]
# A real nested palette pointer must resolve to the declared resource.
struct.pack_into('<I',blob,offset(first['root']),0xDEADBEEF)
# A valid nested pointer with an invalid output size is not enough to pass.
gfx=second['variants'][0]['gfx']
struct.pack_into('<H',blob,offset(gfx+16),801)
# A structurally mapped stream with a backreference before any output fails.
gfx=third['variants'][0]['gfx']
flags=set(blob[offset(gfx+7):offset(gfx+16)])
nibble=next(x for x in range(16) if x not in flags)
blob[offset(gfx+18)]=0
blob[offset(gfx+19)]=nibble<<4
blob[offset(gfx+20)]=0
fixture=a.output/'negative.elf';fixture.write_bytes(blob)
try:
    tool=Path(__file__).with_name('audit_full_portrait_resources.py')
    result=subprocess.run([sys.executable,str(tool),str(fixture),str(a.upstream),str(a.output/'audit')],capture_output=True,text=True)
    (a.output/'audit.log').write_text(result.stdout+result.stderr)
    assert result.returncode!=0
    errors=json.loads((a.output/'audit/report.json').read_text())['errors']
    assert {x['name'] for x in errors}=={first['name'],second['name'],third['name']},errors
    assert any('relocation' in x['error'] for x in errors),errors
    assert any('output must' in x['error'] for x in errors),errors
    assert any('backreference' in x['error'] for x in errors),errors
    (a.output/'report.json').write_text(json.dumps({'ok':True,'expected_failures':errors},indent=2)+'\n')
    print(json.dumps(errors,indent=2))
finally:
    fixture.unlink(missing_ok=True)
