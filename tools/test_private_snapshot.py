#!/usr/bin/env python3
"""Three small host checks. Uses generated data in a temporary directory only."""
from pathlib import Path
import subprocess
import tempfile

root = Path(__file__).resolve().parents[1]
platform = root / 'engine/full'
with tempfile.TemporaryDirectory(prefix='pmd-vita-synthetic-') as directory:
    temp = Path(directory)
    cases = [
        ('backup', ['platform_flash.c', 'port-menu/port_model.c'], ['tests/backup_test.c'], [str(temp / 'files')]),
        ('speed', ['platform_settings.c', 'platform_speed.c'], ['tests/speed_test.c'], [str(temp / 'settings.bin')]),
        ('frame-speed', ['platform_settings.c', 'platform_speed.c', 'platform_frame.c'], ['tests/frame_speed_test.c'], []),
    ]
    (temp / 'files').mkdir()
    for name, sources, tests, arguments in cases:
        executable = temp / name
        subprocess.run(['clang', '-std=c11', '-Wall', '-Wextra', '-Werror',
                        '-fsanitize=address,undefined', '-fno-sanitize-recover=all',
                        '-I', str(platform), *[str(platform / source) for source in sources],
                        *[str(root / test) for test in tests], '-o', str(executable)], check=True)
        subprocess.run([str(executable), *arguments], check=True)
print('PASS: synthetic files and host checks only; no game boot or existing save access.')
