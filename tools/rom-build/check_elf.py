"""Validate relocated archive roots in the linked 32-bit ARM ELF (stdlib only)."""
import json
import struct
from pathlib import Path


def check(path, report):
    raw=path.read_bytes()
    if raw[:7]!=b'\x7fELF\x01\x01\x01':raise ValueError('Expected ELF32 little-endian')
    _,machine,_,_,phoff,shoff,_,_,phsize,phnum,shsize,shnum,_=struct.unpack_from('<HHIIIIIHHHHHH',raw,16)
    if machine!=40 or phsize!=32 or shsize!=40:raise ValueError('Unexpected ARM ELF layout')
    sections=[struct.unpack_from('<10I',raw,shoff+i*shsize) for i in range(shnum)]
    symbols={}
    for section in sections:
        if section[1]!=2:continue
        strings=sections[section[6]];names=raw[strings[4]:strings[4]+strings[5]]
        if section[9]!=16:raise ValueError('Invalid symbol table')
        for offset in range(section[4],section[4]+section[5],16):
            name,value,_,_,_,_=struct.unpack_from('<IIIBBH',raw,offset)
            symbols[names[name:names.index(0,name)].decode()]=value
    segments=[]
    for i in range(phnum):
        typ,offset,addr,_,length,_,_,_=struct.unpack_from('<8I',raw,phoff+i*phsize)
        if typ==1:segments.append((addr,raw[offset:offset+length]))
    def read(addr,length):
        for start,data in segments:
            if start<=addr and addr+length<=start+len(data):return data[addr-start:addr-start+length]
        raise ValueError(f'Unmapped resource pointer {addr:#x}')
    def string(addr):
        data=bytearray()
        for i in range(256):
            c=read(addr+i,1)
            if c==b'\0':return data.decode('ascii')
            data.extend(c)
        raise ValueError('Unterminated archive entry')
    archives=[]
    for name,addr in sorted(symbols.items()):
        if not name.endswith('FileArchive'):continue
        if read(addr,8)!=b'pksdir0\0':raise ValueError('Invalid archive signature: '+name)
        count,table=struct.unpack('<II',read(addr+8,8))
        if not 0<count<10000:raise ValueError('Invalid archive length')
        prior=''
        for i in range(count):
            label,payload=struct.unpack('<II',read(table+8*i,8));label=string(label)
            if label<=prior:raise ValueError('Unsorted archive: '+name)
            prior=label;magic=read(payload,4)
            if magic in [b'SIRO',b'SIR0']:read(struct.unpack('<I',read(payload+4,4))[0],1)
        archives.append({'name':name,'entries':count})
    if not archives:raise ValueError('No resource archives found')
    result={'ok':True,'scope':'Archive names/tables, file starts and relocated SIRO roots','archives':archives,'hardware_tested':False}
    report.write_text(json.dumps(result,indent=2)+'\n')
    return result
