#!/usr/bin/env python3
"""Relocatable full-engine link and unresolved-symbol audit; never a Vita executable."""
import argparse
import json
from pathlib import Path
import subprocess
p = argparse.ArgumentParser(description=__doc__)
p.add_argument('sdk', type=Path)
p.add_argument('output', type=Path)
p.add_argument('reports', type=Path, nargs='+')
a = p.parse_args()
sdk, out = a.sdk.resolve(), a.output.resolve()
out.mkdir(parents=True, exist_ok=True)
objects = []
for report in a.reports:
    data = json.loads(report.read_text())
    if data.get('asset_errors') or any(not x['ok'] for x in data['results']):
        p.error(f'Incomplete build: {report}')
    objects.extend(x['object'] for x in data['results'])
if len(objects) != len(set(objects)):
    p.error('Duplicate input objects')
response = out/'objects.rsp'
response.write_text('\n'.join('"'+x+'"' for x in objects))
combined = out/'full-game-relocatable.o'
combined.unlink(missing_ok=True)
result = subprocess.run([str(sdk/'bin/arm-vita-eabi-ld'), '-r', '@'+str(response), '-o', str(combined)], capture_output=True, text=True)
(out/'link.log').write_text(result.stdout+result.stderr)
if result.returncode:
    print(result.stderr)
    raise SystemExit(result.returncode)
symbols = subprocess.run([str(sdk/'bin/arm-vita-eabi-nm'), '-g', str(combined)], capture_output=True, text=True, check=True).stdout
(out/'symbols.txt').write_text(symbols)
missing = sorted(line.split()[-1] for line in symbols.splitlines() if len(line.split())==2 and line.split()[0]=='U')
(out/'unresolved-symbols.txt').write_text('\n'.join(missing)+'\n')
relocations = subprocess.run([str(sdk/'bin/arm-vita-eabi-readelf'), '-rW', str(combined)], capture_output=True, text=True, check=True).stdout
referenced = set()
for line in relocations.splitlines():
    fields = line.split()
    if len(fields) >= 5 and fields[2].startswith('R_ARM_'):
        referenced.add(fields[4])
required = [x for x in missing if x in referenced]
declared_only = [x for x in missing if x not in referenced]
(out/'required-symbols.txt').write_text('\n'.join(required)+'\n')
(out/'report.json').write_text(json.dumps({'runnable': False, 'objects': len(objects), 'unresolved': missing, 'required': required, 'declared_only': declared_only}, indent=2))
print(f'{len(objects)} objects linked; {len(required)} required externals; {len(declared_only)} unreferenced declarations. Not runnable.')
