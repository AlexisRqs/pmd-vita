#!/usr/bin/env python3
"""Build original ARM32 data assemblies with relocation symbols (not executable code)."""
import argparse
import concurrent.futures
import json
from pathlib import Path
import subprocess

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('upstream', type=Path)
p.add_argument('sdk', type=Path)
p.add_argument('output', type=Path)
a = p.parse_args()
root, sdk, out = (x.resolve() for x in (a.upstream, a.sdk, a.output))
out.mkdir(parents=True, exist_ok=True)
patch=Path(__file__).resolve().parents[1]/'engine/full/patches/0012-relocate-second-font.patch'
if subprocess.run(['git','apply','--reverse','--check',str(patch)],cwd=root,capture_output=True).returncode:
    subprocess.run(['git','apply','--check',str(patch)],cwd=root,check=True)
    subprocess.run(['git','apply',str(patch)],cwd=root,check=True)
cc = sdk / 'bin/arm-vita-eabi-gcc'
pre = root / 'tools/preproc/preproc'

def build(source):
    rel = source.relative_to(root)
    target = out / rel
    target.parent.mkdir(parents=True, exist_ok=True)
    obj = target.with_suffix('.o')
    obj.unlink(missing_ok=True)
    diagnostics = []
    steps = [
        ('cpp', [str(cc), '-E', '-x', 'assembler-with-cpp', '-iquote', 'include',
                 '-I', '.', str(rel), '-o', str(target.with_suffix('.i.s'))]),
        ('resources', [str(pre), str(target.with_suffix('.i.s')), 'charmap.txt']),
        ('assemble', [str(cc), '-c', '-x', 'assembler', str(target), '-o', str(obj)])]
    for stage, command in steps:
        result = subprocess.run(command, cwd=root, capture_output=True)
        diagnostics.append(result.stderr.decode(errors='replace'))
        if stage == 'resources' and not result.returncode:
            target.write_bytes(result.stdout)
        if result.returncode:
            target.with_suffix('.log').write_text(''.join(diagnostics))
            return {'source': str(rel), 'ok': False, 'stage': stage}
    target.with_suffix('.log').write_text(''.join(diagnostics))
    return {'source': str(rel), 'ok': True, 'object': str(obj)}

# Data only: asm/*.s and src/*.s contain GBA platform code and are excluded.
sources = sorted((root/'data').glob('*.s')) + sorted((root/'sound/songs').glob('*.s'))
with concurrent.futures.ThreadPoolExecutor(max_workers=4) as pool:
    results = list(pool.map(build, sources))
(out/'report.json').write_text(json.dumps({'runnable': False, 'results': results}, indent=2))
print(f'{sum(x["ok"] for x in results)}/{len(results)} data objects compiled')
for result in results:
    if not result['ok']:
        print(result['stage'], result['source'])
raise SystemExit(int(any(not x['ok'] for x in results)))
