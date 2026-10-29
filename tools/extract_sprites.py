"""Normalize ROM AX poses/tiles and animation durations; invoked after ROM SHA1 check."""
import json,struct
from pathlib import Path

def extract_sprites(rom,output):
    manifest=json.loads((Path(__file__).parent/'sprite-manifest.json').read_text())
    def read(fmt,at):
        assert 0<=at<=len(rom)-struct.calcsize(fmt)
        return struct.unpack_from(fmt,rom,at)
    def ptr(at):
        p=read('<I',at)[0]-0x8000000
        assert 0<=p<len(rom)
        return p
    # AX slots: idle/walk, sleep, lying down, standing up. All eight directions.
    slots=[0,5,7,13,14]
    out=bytearray(b'PMDS'+struct.pack('<HH',1,16))
    for mon in manifest['monsters']:
        root=mon['root'];poses=ptr(root);anims=ptr(root+4);sprites=ptr(root+12)
        seqs=[];used=set()
        for slot in slots:
            table=ptr(anims+slot*4)
            for direction in range(8):
                at=ptr(table+direction*4);frames=[]
                for _ in range(256):
                    duration,flags,pose,x,y,sx,sy=read('<BBHhhhh',at);at+=12
                    if not duration:break
                    frames.append((duration,flags,pose,x,y));used.add(pose)
                else:raise ValueError('Missing AX terminator')
                assert frames
                seqs.append((slot,direction,frames))
        ids={pose:i for i,pose in enumerate(sorted(used))}
        out+=struct.pack('<HHHH',mon['id'],len(ids),len(seqs),0)
        at=manifest['palette_offset']+mon['palette']*64;out+=rom[at:at+64]
        for pose in sorted(used):
            at=ptr(poses+pose*4);parts=[];tiles=bytearray()
            for _ in range(32):
                sprite,unk,f1,f2,f3=read('<hHHHH',at);at+=10
                if sprite==-1 and unk==65535:break
                assert unk==0
                if sprite>=0:
                    sp=ptr(sprites+sprite*4)
                    for _ in range(32):
                        gfx,n=read('<II',sp);sp+=8
                        if n==0:break
                        assert n%32==0 and n<=8192
                        tiles+=rom[gfx-0x8000000:gfx-0x8000000+n] if gfx else bytes(n)
                    else:raise ValueError('Missing sprite terminator')
                shape=f1>>14;size=f2>>14
                dims=[[(8,8),(16,16),(32,32),(64,64)],[(16,8),(32,8),(32,16),(64,32)],[(8,16),(8,32),(16,32),(32,64)]]
                assert shape<3
                w,h=dims[shape][size];x=(f2&511)-256;y=(f1&1023)-512
                tileoffset=(f3&1023)*32;n=w*h//2
                parts.append((x,y,w,h,(f2>>12)&3,tileoffset,n))
            else:raise ValueError('Missing pose terminator')
            out+=struct.pack('<H',len(parts))
            for x,y,w,h,flip,at,n in parts:
                assert at+n<=len(tiles)
                out+=struct.pack('<hhBBH',x,y,w,h,flip)+tiles[at:at+n]
        for slot,direction,frames in seqs:
            out+=struct.pack('<BBH',slot,direction,len(frames))
            for duration,flags,pose,x,y in frames:out+=struct.pack('<BBHhh',duration,flags,ids[pose],x,y)
    (output/'sprites.pack').write_bytes(out)
    print('AX sprites:',len(out),'bytes, 16 species, 5 animations x 8 directions')
