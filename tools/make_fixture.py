from pathlib import Path
# Full-sized AT4PX literal-only stream; generated independently of C renderer.
data=bytearray(0x5b20)
for y in range(32):
    for x in range(32):
        entry=1+((x+y)%15) | (((x//4+y//4)%8)<<12)
        at=2048+2*(y*32+x)
        data[at:at+2]=entry.to_bytes(2,'little')
for tile in range(1,16):
    for y in range(8):
        for x in range(4):
            data[4096+tile*32+y*4+x]=tile|(tile<<4)
stream=bytearray(b'AT4PX\0\0'+bytes(range(6,15))+len(data).to_bytes(2,'little'))
for i in range(0,len(data),8): stream+=b'\xff'+data[i:i+8]
stream[5:7]=len(stream).to_bytes(2,'little')
root=Path(__file__).resolve().parents[1]
(root/'sample'/'test.at4px').write_bytes(stream)
(root/'sample'/'expected.bin').write_bytes(data)
