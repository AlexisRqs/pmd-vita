#!/usr/bin/env python3
"""Compare persistent gameplay fields before saving and after a fresh game load.

Ignores the CPU frame number, input readiness and compiler layout metadata.
This verifies the explicitly listed fields, not every serialized game variable.
"""
import argparse, hashlib, json
from pathlib import Path

p = argparse.ArgumentParser(description=__doc__)
for name in ('before', 'after', 'output'):
    p.add_argument(name, type=Path)
a = p.parse_args()
before = json.loads(a.before.read_text()); after = json.loads(a.after.read_text())
fields = ('dungeon_active', 'dungeon_id', 'floor', 'stairs', 'entities', 'terrain_flags', 'floor_items')
checks = {key: key in before and key in after and before[key] == after[key] for key in fields}
checks['active_dungeon'] = before.get('dungeon_active') is True and after.get('dungeon_active') is True
checks['same_executable'] = bool(before.get('elf_sha256')) and before.get('elf_sha256') == after.get('elf_sha256')
report = {'ok': all(checks.values()), 'checks': checks,
          'before_frame': before.get('frame'), 'after_frame': after.get('frame'),
          'elf_sha256': before.get('elf_sha256'),
          'before_snapshot_sha256': hashlib.sha256(a.before.read_bytes()).hexdigest(),
          'after_snapshot_sha256': hashlib.sha256(a.after.read_bytes()).hexdigest(),
          'native_vita_tested': False}
a.output.parent.mkdir(parents=True, exist_ok=True)
a.output.write_text(json.dumps(report, indent=2)+'\n')
if not report['ok']:
    raise SystemExit('FAIL: '+', '.join(k for k,v in checks.items() if not v))
print('PASS: persistent fields match across the supplied snapshots: '+', '.join(fields))
