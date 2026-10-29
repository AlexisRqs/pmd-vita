#!/usr/bin/env python3
"""Validate all monster AX graphs using original sprite.c/structs/axdata.h formats.

ELF STT_OBJECT bounds give table lengths absent from axmain. This checks every
pose and sprite descriptor, including ones not referenced by any animation.
It intentionally excludes portrait/ornament/effect and ground-script formats.
"""
import argparse
import hashlib
import json
import struct
from collections import Counter
from pathlib import Path
from elftools.elf.elffile import ELFFile

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('elf', type=Path)
p.add_argument('output', type=Path)
a = p.parse_args()
a.output.mkdir(parents=True, exist_ok=True)
with a.elf.open('rb') as f:
    elf = ELFFile(f)
    assert elf.elfclass == 32 and elf.little_endian
    syms = list(elf.get_section_by_name('.symtab').iter_symbols())
    names = {s.name: int(s['st_value']) for s in syms}
    objects = {}
    for s in syms:
        if s['st_info']['type'] == 'STT_OBJECT' and s['st_size']:
            objects.setdefault(int(s['st_value']), []).append((int(s['st_size']), s.name))
    segments = [(int(s['p_vaddr']), s.data()) for s in elf.iter_segments() if s['p_type'] == 'PT_LOAD']


def read(addr, n):
    for start, data in segments:
        if start <= addr and addr+n <= start+len(data):
            return data[addr-start:addr-start+n]
    raise ValueError(f'unmapped file-backed pointer {addr:#x}, bytes={n}')


def word(addr):
    return struct.unpack('<I', read(addr, 4))[0]


def record_array(addr, stride):
    choices = objects.get(addr, [])
    assert choices, f'pointer {addr:#x} is not an object start'
    sizes = {size for size, name in choices}
    assert len(sizes) == 1, (hex(addr), choices)
    size = sizes.pop()
    assert size % stride == 0, (hex(addr), size, stride, choices)
    read(addr, size)
    return size // stride


def words(addr):
    return [word(addr+i*4) for i in range(record_array(addr, 4))]


def string(addr):
    data = bytearray()
    for i in range(256):
        b = read(addr+i, 1)
        if b == b'\0':
            return data.decode('ascii')
        data.extend(b)
    raise ValueError('unterminated archive name')


archive = names['gMonsterFileArchive']
assert read(archive, 8) == b'pksdir0\0'
count, table = struct.unpack('<II', read(archive+8, 8))
results, errors, excluded = [], [], []
totals = Counter()
for index in range(count):
    label, payload = struct.unpack('<II', read(table+index*8, 8))
    label = string(label)
    if not label.startswith('ax'):
        excluded.append(label)
        continue
    stats = Counter()
    try:
        assert read(payload, 4) in (b'SIRO', b'SIR0')
        root = word(payload+4)
        assert record_array(root, 20) == 1
        poses_addr, anims_addr, anim_count, sprites_addr, positions = struct.unpack('<IIIII', read(root, 20))
        poses, animations, sprites = words(poses_addr), words(anims_addr), words(sprites_addr)
        assert len(animations) == anim_count > 0
        if positions:
            assert record_array(positions, 16) >= len(poses)
        for pose in poses:
            length = record_array(pose, 10)
            terminated = False
            for j in range(length):
                sprite, marker = struct.unpack('<hH', read(pose+j*10, 4))
                if sprite == -1 and marker == 0xFFFF:
                    terminated = True
                    break
                assert sprite < len(sprites), (label, 'sprite index', sprite, len(sprites))
                stats['pose_parts'] += 1
            assert terminated, ('unterminated pose', hex(pose))
        for sprite in sprites:
            terminated = False
            for j in range(record_array(sprite, 8)):
                gfx, size = struct.unpack('<Ii', read(sprite+j*8, 8))
                if size == 0:
                    terminated = True
                    break
                assert 0 < size <= 0x8000, ('invalid tile byte count', size)
                # NULL is an intentional CpuClear part in sub_8005304.
                if gfx:
                    read(gfx, size)
                    stats['tile_bytes_referenced'] += size
                stats['sprite_parts'] += 1
            assert terminated, ('unterminated sprite parts', hex(sprite))
        seen_sequences = set()
        for directions in animations:
            sequences = words(directions)
            assert len(sequences) == 8, ('direction count', len(sequences))
            for sequence in sequences:
                if sequence in seen_sequences:
                    continue
                seen_sequences.add(sequence)
                terminated = False
                for j in range(record_array(sequence, 12)):
                    frames, flags, pose_id = struct.unpack('<BBh', read(sequence+j*12, 4))
                    if frames == 0:
                        terminated = True
                        break
                    assert 0 <= pose_id < len(poses), ('pose index', pose_id, len(poses))
                    stats['animation_frames'] += 1
                assert terminated, ('unterminated animation', hex(sequence))
        stats.update(poses=len(poses), sprites=len(sprites), animation_groups=len(animations), animation_sequences=len(seen_sequences))
        totals.update(stats)
        results.append({'name': label, 'root': root, 'ok': True, **stats})
    except (AssertionError, ValueError) as error:
        errors.append({'name': label, 'error': str(error)})
report = {'elf_sha256': hashlib.sha256(a.elf.read_bytes()).hexdigest(),
          'scope': 'All monster archive AX entries: root, all pose/sprite tables, every 8-direction animation group, animation/pose terminators and indices, position records, graphics byte spans. Excludes portraits and other archives. Does not establish visual correctness.',
          'source_contracts': ['include/structs/axdata.h', 'src/sprite.c:AxResInit', 'src/sprite.c:RunAxAnimationFrame', 'src/sprite.c:sub_800533C', 'src/sprite.c:RegisterSpriteParts_80052BC', 'src/sprite.c:sub_8005304', 'src/data/ax/*.h'],
          'checked': len(results), 'totals': dict(totals), 'entries': results, 'excluded_monster_entries': excluded, 'errors': errors}
(a.output/'report.json').write_text(json.dumps(report, indent=2)+'\n')
print(json.dumps({'checked': len(results), 'totals': dict(totals), 'errors': errors}, indent=2))
raise SystemExit(bool(errors) or not results)
