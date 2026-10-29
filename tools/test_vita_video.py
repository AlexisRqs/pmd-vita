#!/usr/bin/env python3
"""Validate Vita presenter ownership and layout using a host GPU API double."""
import argparse
import json
from pathlib import Path
import subprocess

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('output', type=Path)
args = parser.parse_args()
project = Path(__file__).resolve().parents[1]
output = args.output.resolve()
output.mkdir(parents=True, exist_ok=True)
report = output / 'report.json'
report.write_text(json.dumps({'ok': False, 'hardware_tested': False}) + '\n')
command = ['clang', '-std=c11', '-O2', '-Wall', '-Wextra', '-Werror',
           '-fsanitize=address,undefined', '-fno-sanitize-recover=all',
           '-I', str(project / 'engine/full'), '-I', str(project / 'sample'),
           '-I', str(project / 'tests/vita_video_stub'),
           str(project / 'engine/full/platform_vita_video.c'),
           str(project / 'engine/full/platform_settings.c'),str(project / 'engine/full/port-menu/port_model.c'),
           str(project / 'engine/full/platform_speed.c'),
           str(project / 'tests/vita_video_test.c'), '-o', str(output / 'video-test')]
subprocess.run(command, check=True)
subprocess.run([str(output / 'video-test')], check=True)
report.write_text(json.dumps({'ok': True, 'host_api_double': True, 'asan_ubsan': True,
                             'hardware_tested': False}, indent=2) + '\n')
