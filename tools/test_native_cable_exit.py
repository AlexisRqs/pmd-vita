#!/usr/bin/env python3
"""Exercise original cable handshake cancellation/timeout in the full native ARM ELF.

Only UI frame/input, VBlank wait and imported OS memory primitives are doubled.
No serial register activity or peer is simulated; no communication is claimed.
"""
import argparse
import hashlib
import json
from pathlib import Path
import struct
from elftools.elf.elffile import ELFFile
from unicorn import Uc, UcError, UC_ARCH_ARM, UC_MODE_ARM, UC_HOOK_CODE
from unicorn.arm_const import (UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC,
                               UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2,
                               UC_ARM_REG_C1_C0_2, UC_ARM_REG_FPEXC)

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('elf', type=Path)
parser.add_argument('output', type=Path)
args = parser.parse_args()
args.output.mkdir(parents=True, exist_ok=True)
report = args.output / 'report.json'
report.write_text(json.dumps({'ok': False, 'reason': 'in progress'}) + '\n')
with args.elf.open('rb') as stream:
    elf = ELFFile(stream)
    symbols = {s.name: int(s['st_value']) for s in elf.get_section_by_name('.symtab').iter_symbols()}
    segments = [(int(s['p_vaddr']), int(s['p_memsz']), s.data(), int(s['p_flags']))
                for s in elf.iter_segments() if s['p_type'] == 'PT_LOAD']

machine = Uc(UC_ARCH_ARM, UC_MODE_ARM)
machine.reg_write(UC_ARM_REG_C1_C0_2, 0x00f00000)
machine.reg_write(UC_ARM_REG_FPEXC, 0x40000000)
for address, length, data, flags in segments:
    low = address & ~4095
    machine.mem_map(low, ((address + length + 4095) & ~4095) - low)
    machine.mem_write(address, data)
machine.mem_map(0x90000000, 0x200000)
stop, stack = 0x90000000, 0x901ff000
io = symbols['pmd_io_words']
state = {}


def finish(value=0):
    machine.reg_write(UC_ARM_REG_R0, value)
    machine.reg_write(UC_ARM_REG_PC, machine.reg_read(UC_ARM_REG_LR))


def hook(name, function):
    def callback(uc, address, size, context):
        function()
    address = symbols[name] & ~1
    machine.hook_add(UC_HOOK_CODE, callback, begin=address, end=address)


def memory_service(name):
    def run():
        dest = machine.reg_read(UC_ARM_REG_R0)
        source = machine.reg_read(UC_ARM_REG_R1)
        length = machine.reg_read(UC_ARM_REG_R2)
        assert length < 0x100000
        writable = 0x90000000 <= dest and dest + length <= 0x90200000
        writable |= any(flags & 2 and address <= dest and dest + length <= address + size
                        for address, size, data, flags in segments)
        assert writable, (name, hex(dest), length)
        data = bytes([source & 255]) * length if name == 'sceClibMemset' else bytes(machine.mem_read(source, length))
        if length:
            machine.mem_write(dest, data)
        finish(dest)
    return run


memory_names = ('sceClibMemset', 'sceClibMemcpy', 'sceClibMemmove')
for name in memory_names:
    hook(name, memory_service(name))


def ui_frame():
    state['ui_frames'] += 1
    assert state['ui_frames'] <= 1801, 'Handshake exceeded original timeout'
    finish()


def ui_input():
    finish(state['cancel_code'] if state['ui_frames'] == state['cancel_frame'] else 0)


def cleanup_vblank():
    state['cleanup_vblanks'] += 1
    assert state['cleanup_vblanks'] <= 1, 'Unexpected cleanup wait loop'
    finish()


hook('sub_80373C4', ui_frame)
hook('GetMenuInput', ui_input)
hook('VBlankIntrWait', cleanup_vblank)
# Observations only: these functions execute all their real ARM instructions.
observed = ('sub_800D414', 'sub_800D59C', 'sub_800D33C', 'sub_800D570', 'sub_800D520', 'sub_800D510')
for name in observed:
    def trace(uc, address, size, context, name=name):
        state['calls'][name] += 1
    address = symbols[name] & ~1
    machine.hook_add(UC_HOOK_CODE, trace, begin=address, end=address)

# Any unexpected OS dependency must fail explicitly, never silently succeed.
for name, address in symbols.items():
    if name.startswith('sce') and name not in memory_names and address:
        def unexpected(uc, address, size, context, name=name):
            raise AssertionError('Unexpected OS service: ' + name)
        machine.hook_add(UC_HOOK_CODE, unexpected, begin=address & ~1, end=address & ~1)


def call(name, value=0):
    machine.reg_write(UC_ARM_REG_SP, stack)
    machine.reg_write(UC_ARM_REG_LR, stop)
    machine.reg_write(UC_ARM_REG_R0, value)
    try:
        machine.emu_start(symbols[name], stop, count=5000000)
    except UcError as exc:
        raise RuntimeError(f'{name}: {exc}, PC={machine.reg_read(UC_ARM_REG_PC):#x}') from exc
    assert machine.reg_read(UC_ARM_REG_PC) == stop, 'Instruction budget exhausted'
    assert machine.reg_read(UC_ARM_REG_SP) == stack, 'Unbalanced stack'
    return machine.reg_read(UC_ARM_REG_R0)


def reg(offset):
    return struct.unpack('<H', machine.mem_read(io + offset, 2))[0]


results = []
for mode in (0, 1, 2, 3, 4, 5, 6, 7, 9, 10):
    for scenario, cancel_frame, cancel_code in [('cancel_2', 7, 2), ('cancel_3', 7, 3), ('no_peer_timeout', -1, 0)]:
        # Restore actual ELF data/BSS so each scenario starts independently.
        for address, length, data, flags in segments:
            if flags & 2:
                machine.mem_write(address, data + bytes(length - len(data)))
        state = {'ui_frames': 0, 'cleanup_vblanks': 0, 'cancel_frame': cancel_frame,
                 'cancel_code': cancel_code, 'calls': dict.fromkeys(observed, 0)}
        call('pmd_memory_reset')
        initial_ie = 0x2045  # GAMEPAK, TIMER3, VCOUNT, VBLANK as used by original startup.
        machine.mem_write(io + 0x200, struct.pack('<H', initial_ie))
        machine.mem_write(io + 0x208, struct.pack('<H', 1))
        result = call('sub_8037B28', mode)
        timeout = scenario == 'no_peer_timeout'
        assert result == (15 if timeout else 1), (mode, scenario, result)
        assert state['ui_frames'] == (1801 if timeout else 7), state
        assert state['cleanup_vblanks'] == 1, state
        for name in ('sub_800D414', 'sub_800D59C', 'sub_800D520', 'sub_800D510'):
            assert state['calls'][name] == 1, state
        assert state['calls']['sub_800D33C'] == (1801 if timeout else 6), state
        assert state['calls']['sub_800D570'] == state['calls']['sub_800D33C'], state
        registers = {name: reg(offset) for name, offset in
                     [('RCNT', 0x134), ('SIOCNT', 0x128), ('IE', 0x200), ('IME', 0x208),
                      ('TM3CNT_L', 0x10C), ('TM3CNT_H', 0x10E)]}
        assert registers == {'RCNT': 0x8000, 'SIOCNT': 0x2003, 'IE': initial_ie & ~0xC0,
                             'IME': 1, 'TM3CNT_L': 0xB1FC, 'TM3CNT_H': 0}, registers
        counter = struct.unpack('<I', machine.mem_read(symbols['gUnknown_202EC38'], 4))[0]
        assert counter == (1800 if timeout else 6)
        results.append({'mode': mode, 'scenario': scenario, 'return_code': result,
                        'ui_frames': state['ui_frames'], 'cleanup_vblanks': 1,
                        'timeout_counter': counter, 'registers_after': registers,
                        'actual_serial_calls': dict(state['calls'])})
report.write_text(json.dumps({'ok': True, 'elf_sha256': hashlib.sha256(args.elf.read_bytes()).hexdigest(),
                             'cases': results, 'test_doubles': [*memory_names, 'sub_80373C4', 'GetMenuInput', 'VBlankIntrWait'],
                             'hardware_tested': False, 'peer_transport_implemented': False}, indent=2) + '\n')
print('PASS: 30 original native ARM cable handshakes: two cancel inputs and bounded no-peer timeout across all ten supported modes; serial IRQ/timer/RCNT cleanup verified')
