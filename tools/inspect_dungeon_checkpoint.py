#!/usr/bin/env python3
"""Read a trusted local boot checkpoint; never modify game state or the ELF.

Build-time dependencies: requirements-arm-tests.txt. Layout offsets come from
Vita GCC and the actual upstream headers, not guessed original ROM addresses.
"""
import argparse, hashlib, json, pickle, struct, subprocess
from pathlib import Path
from elftools.elf.elffile import ELFFile

p = argparse.ArgumentParser(description=__doc__)
for name in ('sdk', 'upstream', 'elf', 'checkpoint', 'output'):
    p.add_argument(name, type=Path)
a = p.parse_args()
out = a.output.resolve(); out.mkdir(parents=True, exist_ok=True)
base = Path(__file__).resolve().parents[1]/'engine/full'
fields = {
    'width': 'DUNGEON_MAX_SIZE_X', 'height': 'DUNGEON_MAX_SIZE_Y',
    'tile_size': 'sizeof(Tile)', 'tile_flags': 'offsetof(Tile, terrainFlags)',
    'tiles': 'offsetof(Dungeon, tiles)', 'stairs': 'offsetof(Dungeon, stairsSpawn)',
    'ready': 'offsetof(Dungeon, noActionInProgress)',
    'dungeon_id': 'offsetof(Dungeon, unk644.dungeonLocation.id)',
    'floor': 'offsetof(Dungeon, unk644.dungeonLocation.floor)',
    'active': 'offsetof(Dungeon, activePokemon)', 'active_count': 'DUNGEON_MAX_POKEMON',
    'entity_type': 'offsetof(Entity, type)', 'entity_pos': 'offsetof(Entity, pos)',
    'entity_info': 'offsetof(Entity, axObj.info.monster)',
    'info_leader': 'offsetof(EntityInfo, isTeamLeader)',
    'info_enemy': 'offsetof(EntityInfo, isNotTeamMember)',
    'info_species': 'offsetof(EntityInfo, id)', 'info_hp': 'offsetof(EntityInfo, HP)',
    'info_max_hp': 'offsetof(EntityInfo, maxHPStat)',
    'info_exp': 'offsetof(EntityInfo, exp)', 'info_level': 'offsetof(EntityInfo, level)',
    'info_moves': 'offsetof(EntityInfo, moves.moves)', 'moves_count': 'MAX_MON_MOVES',
    'move_size': 'sizeof(Move)', 'move_id': 'offsetof(Move, id)',
    'move_pp': 'offsetof(Move, PP)', 'move_flags': 'offsetof(Move, moveFlags)',
    'move_ginseng': 'offsetof(Move, ginseng)', 'info_belly': 'offsetof(EntityInfo, belly)', 'info_direction': 'offsetof(EntityInfo, action.direction)',
    'items': 'offsetof(Dungeon, items)', 'items_count': 'DUNGEON_MAX_ITEMS',
    'item_id': 'offsetof(Item, id)', 'item_quantity': 'offsetof(Item, quantity)',
    'item_flags': 'offsetof(Item, flags)',
    'inventory_items': 'offsetof(TeamInventory, teamItems)', 'inventory_count': 'INVENTORY_SIZE',
    'item_size': 'sizeof(Item)', 'inventory_money': 'offsetof(TeamInventory, teamMoney)',
    'inventory_savings': 'offsetof(TeamInventory, teamSavings)',
    'normal_terrain': 'TERRAIN_TYPE_NORMAL',
}
source = out/'layout.c'
source.write_text('#include <stddef.h>\n#include "structs/str_dungeon.h"\n'+
                  '\n'.join('const unsigned pmd_layout_'+k+' = '+v+';' for k,v in fields.items())+'\n')
obj = out/'layout.o'
subprocess.run([str(a.sdk.resolve()/'bin/arm-vita-eabi-gcc'), '-std=gnu11',
                '-iquote', str(a.upstream.resolve()/'include'), '-iquote', str(base),
                '-include', str(base/'native_prelude.h'), '-c', str(source), '-o', str(obj)], check=True)
layout = {}
with obj.open('rb') as f:
    elf = ELFFile(f)
    for symbol in elf.get_section_by_name('.symtab').iter_symbols():
        if symbol.name.startswith('pmd_layout_'):
            data = elf.get_section(symbol['st_shndx']).data()
            layout[symbol.name.removeprefix('pmd_layout_')] = struct.unpack_from('<I', data, symbol['st_value'])[0]
assert set(layout) == set(fields)
with a.elf.open('rb') as f:
    elf = ELFFile(f)
    symbols = {s.name: int(s['st_value']) for s in elf.get_section_by_name('.symtab').iter_symbols()}
# Pickle is allowed ONLY for checkpoints generated locally by our test runner.
checkpoint = pickle.loads(a.checkpoint.read_bytes())
digest = hashlib.sha256(a.elf.read_bytes()).hexdigest()
assert checkpoint['elf_sha256'] == digest, 'ELF differs from checkpoint'
def read(address, size):
    for start, data in checkpoint['memory']:
        if start <= address and address+size <= start+len(data):
            return data[address-start:address-start+size]
    raise ValueError(f'Unmapped checkpoint read: {address:#x}+{size}')
def scalar(address, fmt): return struct.unpack(fmt, read(address, struct.calcsize(fmt)))[0]
def pos(address): return list(struct.unpack('<hh', read(address, 4)))
dungeon = scalar(symbols['gDungeon'], '<I')
result = {'elf_sha256': digest, 'frame': checkpoint['frames'], 'dungeon_active': bool(dungeon), 'layout': layout}
inventory = scalar(symbols['gTeamInventoryRef'], '<I')
if inventory:
    result['inventory'] = {'money': scalar(inventory+layout['inventory_money'], '<i'),
                           'savings': scalar(inventory+layout['inventory_savings'], '<i'), 'items': []}
    for i in range(layout['inventory_count']):
        item = inventory+layout['inventory_items']+i*layout['item_size']
        flags = scalar(item+layout['item_flags'], '<B')
        if flags & 1:
            result['inventory']['items'].append({'slot': i, 'flags': flags,
                'id': scalar(item+layout['item_id'], '<B'),
                'quantity': scalar(item+layout['item_quantity'], '<B')})
if dungeon:
    width, height = layout['width'], layout['height']
    result.update(ready=bool(scalar(dungeon+layout['ready'], '<B')),
                  dungeon_id=scalar(dungeon+layout['dungeon_id'], '<B'),
                  floor=scalar(dungeon+layout['floor'], '<B'),
                  stairs=pos(dungeon+layout['stairs']), entities=[])
    rows = []; terrain = []
    for y in range(height):
        row = []
        for x in range(width):
            tile = dungeon+layout['tiles']+(y*width+x)*layout['tile_size']
            flags = scalar(tile+layout['tile_flags'], '<H')
            terrain.append(flags)
            row.append('.' if flags & layout['normal_terrain'] else '#')
        rows.append(row)
    x,y = result['stairs']
    if 0 <= x < width and 0 <= y < height: rows[y][x] = '>'
    for i in range(layout['active_count']):
        entity = scalar(dungeon+layout['active']+i*4, '<I')
        if not entity or scalar(entity+layout['entity_type'], '<I') == 0: continue
        info = scalar(entity+layout['entity_info'], '<I')
        if not info: continue
        item = {'slot': i, 'position': pos(entity+layout['entity_pos']),
                'leader': bool(scalar(info+layout['info_leader'], '<B')),
                'enemy': bool(scalar(info+layout['info_enemy'], '<B')),
                'species': scalar(info+layout['info_species'], '<h'),
                'hp': scalar(info+layout['info_hp'], '<h'),
                'exp': scalar(info+layout['info_exp'], '<I'),
                'level': scalar(info+layout['info_level'], '<B'),
                'max_hp': scalar(info+layout['info_max_hp'], '<h')}
        result['entities'].append(item)
        item['belly'] = pos(info+layout['info_belly'])
        item['direction'] = scalar(info+layout['info_direction'], '<B')
        item['moves'] = []
        for move_index in range(layout['moves_count']):
            move = info+layout['info_moves']+move_index*layout['move_size']
            flags = scalar(move+layout['move_flags'], '<B')
            if flags & 1:
                item['moves'].append({'slot': move_index, 'flags': flags,
                    'id': scalar(move+layout['move_id'], '<H'),
                    'pp': scalar(move+layout['move_pp'], '<B'),
                    'ginseng': scalar(move+layout['move_ginseng'], '<B')})
        x,y = item['position']
        if 0 <= x < width and 0 <= y < height:
            rows[y][x] = '@' if item['leader'] else 'e' if item['enemy'] else 'p'
    result['map'] = [''.join(row) for row in rows]
    result['terrain_flags'] = terrain
    result['floor_items'] = []
    for i in range(layout['items_count']):
        entity = scalar(dungeon+layout['items']+i*4, '<I')
        if not entity or scalar(entity+layout['entity_type'], '<I') == 0: continue
        info = scalar(entity+layout['entity_info'], '<I')
        if not info: continue
        result['floor_items'].append({'slot': i, 'position': pos(entity+layout['entity_pos']),
            'id': scalar(info+layout['item_id'], '<B'),
            'quantity': scalar(info+layout['item_quantity'], '<B'),
            'flags': scalar(info+layout['item_flags'], '<B')})
    (out/'map.txt').write_text('\n'.join(result['map'])+'\n')
(out/'snapshot.json').write_text(json.dumps(result, indent=2)+'\n')
print(json.dumps({k:v for k,v in result.items() if k not in ('map','layout','terrain_flags')}, indent=2))
