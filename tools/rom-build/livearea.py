"""Render indexed PNGs from the user's decoded title; stdlib only."""
import re
import struct
import zlib
from pathlib import Path

def indexed_png(path, width, height, pixels):
    palette = list(dict.fromkeys(pixels))
    if len(palette) > 256: raise ValueError('Title palette exceeds 256 colors')
    indexes = {color:i for i,color in enumerate(palette)}
    raw = b''.join(b'\0' + bytes(indexes[c] for c in pixels[y*width:(y+1)*width]) for y in range(height))
    def chunk(name, data): return struct.pack('>I',len(data))+name+data+struct.pack('>I',zlib.crc32(name+data)&0xffffffff)
    path.parent.mkdir(parents=True,exist_ok=True)
    path.write_bytes(b'\x89PNG\r\n\x1a\n'+chunk(b'IHDR',struct.pack('>IIBBBBB',width,height,8,3,0,0,0))+chunk(b'PLTE',b''.join(bytes(c) for c in palette).ljust(768,b'\0'))+chunk(b'IDAT',zlib.compress(raw))+chunk(b'IEND',b''))

def make_assets(ppm, destination, module):
    raw=ppm.read_bytes();header=b'P6\n240 160\n255\n'
    if not raw.startswith(header):raise ValueError('Invalid title rendering')
    raw=raw[len(header):];pixels=[tuple(raw[i:i+3]) for i in range(0,len(raw),3)]
    if len(pixels)!=240*160:raise ValueError('Invalid title size')
    def scaled(w,h,x0=0,y0=0,cw=240,ch=160):
        return [pixels[(y0+y*ch//h)*240+x0+x*cw//w] for y in range(h) for x in range(w)]
    contents=destination/'sce_sys/livearea/contents'
    indexed_png(destination/'sce_sys/icon0.png',128,128,scaled(128,128,40,0,160,160))
    indexed_png(contents/'bg.png',840,500,scaled(840,500))
    indexed_png(contents/'startup.png',280,158,scaled(280,158))
    font=bytes(int(x,16) for x in re.findall(r'\\x([0-9a-fA-F]{2})',(module/'font8x8.inc').read_text()))
    w,h=280,124;settings=[(71,43,27)]*(w*h);text='REGLAGES';scale=3;x0=(w-len(text)*8*scale)//2;y0=(h-8*scale)//2
    for i,ch in enumerate(text):
        for y in range(8):
            for x in range(8):
                if font[ord(ch)*8+y] & (0x80>>x):
                    for yy in range(scale):
                        for xx in range(scale):settings[(y0+y*scale+yy)*w+x0+(i*8+x)*scale+xx]=(245,225,175)
    indexed_png(contents/'settings.png',w,h,settings)
    (contents/'template.xml').write_text('''<?xml version="1.0" encoding="utf-8"?>
<livearea style="a1" format-ver="01.00" content-rev="15">
<livearea-background><image>bg.png</image></livearea-background>
<frame id="frame3"><liveitem><image>settings.png</image><target>psla:-settings</target></liveitem></frame>
<gate><startup-image>startup.png</startup-image></gate>
</livearea>
''')
