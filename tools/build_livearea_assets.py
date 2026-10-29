#!/usr/bin/env python3
"""Compose private Vita LiveArea assets from the already decoded original title.

Only crop/nearest-neighbor scaling/layout; no generated or repainted game art.
Run with the Pillow environment, then package_full_vita.py includes the PNGs/XML.
"""
import argparse,hashlib,json
from pathlib import Path
from PIL import Image,ImageDraw,ImageFont,ImageOps
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('title_image',type=Path)
p.add_argument('--font',type=Path,default=Path('/System/Library/Fonts/Supplemental/Arial Rounded Bold.ttf'))
p.add_argument('--output',type=Path,default=Path(__file__).resolve().parents[1]/'engine/full/livearea')
a=p.parse_args();root=a.output.resolve();contents=root/'sce_sys/livearea/contents';contents.mkdir(parents=True,exist_ok=True)
title=Image.open(a.title_image).convert('RGB');assert title.size==(240,160),'Expected original 240x160 decoded title artwork'
cream=(245,225,175);brown=(71,43,27);gold=(227,173,69)
def save(image,path):
 # Vita shell assets use 8-bit indexed PNG; preserve the original pixel palette.
 image.quantize(colors=256,method=Image.Quantize.FASTOCTREE,dither=Image.Dither.NONE).save(path,format='PNG',bits=8,optimize=False)
icon=title.crop((40,0,200,160)).resize((128,128),Image.Resampling.NEAREST)
save(icon,root/'sce_sys/icon0.png')
bg=ImageOps.fit(title,(840,500),method=Image.Resampling.NEAREST);save(bg,contents/'bg.png')
logo_path=Path(__file__).resolve().parents[1]/'engine/full/livearea-source/original-logo-screen.png'
logo=Image.open(logo_path).convert('RGB')
# Keep the original logo above the system Start button at the bottom of the gate.
startup=Image.new('RGB',(280,158),logo.getpixel((10,10)))
startup.paste(logo.crop((1,0,240,142)).resize((210,124),Image.Resampling.NEAREST),(35,0))
save(startup,contents/'startup.png')
settings=Image.new('RGBA',(280,124),(0,0,0,0));d=ImageDraw.Draw(settings)
d.rounded_rectangle((10,28,269,96),radius=14,fill=brown,outline=gold,width=3)
font=ImageFont.truetype(str(a.font),28);label='Réglages';box=d.textbbox((0,0),label,font=font)
d.text(((280-(box[2]-box[0]))/2,62-(box[3]-box[1])/2-box[1]),label,font=font,fill=cream)
save(settings,contents/'settings.png')
(contents/'template.xml').write_text('''<?xml version="1.0" encoding="utf-8"?>
<livearea style="a1" format-ver="01.00" content-rev="15">
  <livearea-background><image>bg.png</image></livearea-background>
  <!-- Same-app settings launch below the system Start/Play gate. -->
  <frame id="frame3"><liveitem>
    <image>settings.png</image><target>psla:-settings</target>
  </liveitem></frame>
  <gate><startup-image>startup.png</startup-image></gate>
</livearea>
''',encoding='utf-8')
(root/'provenance.json').write_text(json.dumps({'title_source':str(a.title_image.resolve()),'title_sha256':hashlib.sha256(a.title_image.read_bytes()).hexdigest(),'art_source':'Original titlen0.at4px + titlen0p.raw extracted from user supplied ROM; decoded by existing title renderer','transforms':'Full-bleed background crop; original rendered logo above system Start button; transparent settings surround','logo_source':str(logo_path),'logo_sha256':hashlib.sha256(logo_path.read_bytes()).hexdigest(),'settings_launch':'psla:-settings; sceAppMgrGetAppParam returns launch parameters','primary_reference':'https://github.com/boomannotjeff/mkwiita/blob/main/platform/vita/sce_sys/livearea/contents/template.xml'},indent=2)+'\n')
print(root)
