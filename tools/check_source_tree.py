#!/usr/bin/env python3
"""Check tracked sources before a push. Not a complete license or secret audit."""
from pathlib import Path
import re
import subprocess

root = Path(__file__).resolve().parents[1]
result = subprocess.run(['git', 'ls-files', '-z'], cwd=root, capture_output=True, check=True)
paths = [Path(p) for p in result.stdout.decode().split('\0') if p]
forbidden = {'.gba', '.nds', '.sav', '.pmb', '.vpk', '.elf', '.velf', '.self', '.o', '.a', '.bin', '.zip', '.pickle', '.ppm', '.wav'}
checks = [rb'gh[pousr]_[A-Za-z0-9]{20,}', rb'-----BEGIN (?:RSA |OPENSSH |EC )?PRIVATE KEY-----', rb'/' + rb'Users/' + rb'[^/\s]+/']
problems = []
for path in paths:
    file = root / path
    if file.is_symlink() or path.suffix.lower() in forbidden or any(part in ('private-assets', 'local-roms', 'local-saves') for part in path.parts):
        problems.append(str(path) + ': excluded file type/path')
        continue
    data = file.read_bytes()
    if len(data) > 2_000_000 or b'\0' in data:
        problems.append(str(path) + ': large or binary content')
    if any(re.search(pattern, data) for pattern in checks):
        problems.append(str(path) + ': sensitive pattern/local user path')
if problems:
    raise SystemExit('\n'.join(problems))
print(f'PASS: {len(paths)} tracked source/documentation files checked.')
