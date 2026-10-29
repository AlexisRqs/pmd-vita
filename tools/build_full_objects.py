#!/usr/bin/env python3
"""Compile original C with real charmap/INCBIN expansion, never IDE placeholders.
This produces diagnostic objects, NOT a runnable game; hardware calls remain unsafe.
Only generated assets are written to the supplied isolated upstream worktree.
"""
import argparse
import concurrent.futures
import json
from pathlib import Path
import re
import subprocess

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('upstream', type=Path)
p.add_argument('sdk', type=Path)
p.add_argument('output', type=Path)
p.add_argument('--source', action='append', help='relative source path; default all original C')
p.add_argument('--optimization', choices=['0','2'], default='2')
p.add_argument('--jobs', type=int, default=4)
a = p.parse_args()
root, sdk, out = (x.resolve() for x in (a.upstream, a.sdk, a.output))
out.mkdir(parents=True, exist_ok=True)
cc = sdk / 'bin/arm-vita-eabi-gcc'
pre = root / 'tools/preproc/preproc'
gfx = root / 'tools/gbagfx/gbagfx'
header = Path(__file__).resolve().parents[1] / 'engine/full/native_prelude.h'
# Apply reviewed platform fixes only in the supplied isolated checkout.
for patch in sorted((header.parent/'patches').glob('*.patch')):
    already = subprocess.run(['git','apply','--reverse','--check',str(patch)],cwd=root,capture_output=True)
    if already.returncode:
        subprocess.run(['git','apply','--check',str(patch)],cwd=root,check=True)
        subprocess.run(['git','apply',str(patch)],cwd=root,check=True)

for tool in (cc, pre, gfx):
    if not tool.is_file():
        p.error(f'Missing required tool: {tool}')
# Match upstream graphics.mk exactly; other absent resources remain hard errors.
assets = set()
for source in (root / 'src').rglob('*'):
    if source.suffix in ('.c', '.h'):
        for macro in re.finditer(r'INCBIN_\w+\((.*?)\)', source.read_text(errors='replace'), re.S):
            assets.update(re.findall(r'"([^"\n]+)"', macro.group(1)))
asset_errors = []
for name in sorted(assets):
    target = root / name
    if target.exists():
        continue
    extension = {'.4bpp': '.png', '.pmdpal': '.pal', '.gbapal': '.pal'}.get(target.suffix)
    source = target.with_suffix(extension) if extension else None
    if source and source.is_file():
        result = subprocess.run([str(gfx), str(source), str(target)], capture_output=True, text=True)
        if result.returncode:
            asset_errors.append({'asset': name, 'error': result.stderr})
    else:
        asset_errors.append({'asset': name, 'error': 'No source or conversion rule'})
(out / 'asset-errors.json').write_text(json.dumps(asset_errors, indent=2))
flags = ['-std=gnu11', '-iquote', str(root/'include'), '-iquote', str(header.parent), '-include', str(header),
         '-Wno-pointer-sign', '-Wno-error=implicit-function-declaration',
         '-Wno-error=incompatible-pointer-types', '-Wno-error=int-conversion']
def compile_one(source):
    target = out / source
    target.parent.mkdir(parents=True, exist_ok=True)
    log = target.with_suffix('.log')
    steps = [
        ('cpp', [str(cc), '-E', *flags, str(root/source), '-o', str(target.with_suffix('.i'))]),
        ('resources', [str(pre), str(target.with_suffix('.i')), 'charmap.txt']),
        ('compile', [str(cc), '-x', 'cpp-output', '-std=gnu11', '-O'+a.optimization, '-fno-strict-aliasing',
                     '-Wno-error=implicit-function-declaration', '-Wno-error=incompatible-pointer-types',
                     '-Wno-error=int-conversion', '-c', str(target.with_suffix('.expanded.i')),
                     '-o', str(target.with_suffix('.o'))])]
    target.with_suffix('.o').unlink(missing_ok=True)
    diagnostics = []
    for stage, command in steps:
        result = subprocess.run(command, cwd=root, capture_output=True)
        diagnostics.append(result.stderr.decode(errors='replace'))
        if result.returncode:
            log.write_text(''.join(diagnostics))
            return {'source': source, 'ok': False, 'stage': stage, 'log': str(log)}
        if stage == 'resources':
            target.with_suffix('.expanded.i').write_bytes(result.stdout)
    log.write_text(''.join(diagnostics))
    return {'source': source, 'ok': True, 'object': str(target.with_suffix('.o'))}
sources = a.source or [str(x.relative_to(root)) for x in sorted((root/'src').rglob('*.c')) if not x.name.endswith('.inc.c')]
excluded = ['src/agb_flash.c','src/agb_flash_1m.c','src/agb_flash_le.c','src/agb_flash_mx.c']
if a.source and any(x in excluded for x in a.source):
    p.error('Cartridge flash drivers are replaced by platform_flash.c')
sources = [x for x in sources if x not in excluded]
for source in excluded:
    (out/source).with_suffix('.o').unlink(missing_ok=True)

with concurrent.futures.ThreadPoolExecutor(max_workers=a.jobs) as pool:
    results = list(pool.map(compile_one, sources))
report = {'optimization': '-O'+a.optimization, 'runnable': False, 'asset_errors': len(asset_errors), 'results': results, 'replaced_sources': {x:'engine/full/platform_flash.c' for x in excluded}}
(out/'report.json').write_text(json.dumps(report, indent=2))
print(f'{sum(x["ok"] for x in results)}/{len(results)} objects compiled; {len(asset_errors)} asset errors')
for result in results:
    if not result['ok']:
        print(result['stage'], result['source'], result['log'])
raise SystemExit(int(any(not x['ok'] for x in results) or bool(asset_errors)))
