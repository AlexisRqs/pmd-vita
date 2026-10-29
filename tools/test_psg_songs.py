#!/usr/bin/env python3
"""Replay real ARM song register captures using the native PSG implementation."""
import argparse,json,subprocess,wave
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('psg_build',type=Path);p.add_argument('song_tests',type=Path)
a=p.parse_args();out=a.song_tests.resolve();report=out/'psg-report.json'
report.write_text(json.dumps({'ok':False,'reason':'replay in progress'}))
(out/'mixed-report.json').write_text(json.dumps({'ok':False,'reason':'replay in progress'}))
results=[]
for song in (1,8,12,40):
 base=out/f'song-{song}-psg'
 result=subprocess.run([str(a.psg_build.resolve()/'replay'),str(base)+'.events',str(base)+'.raw'],check=True,capture_output=True,text=True)
 raw=Path(str(base)+'.raw').read_bytes()
 with wave.open(str(base)+'.wav','wb') as f:
  f.setnchannels(2);f.setsampwidth(2);f.setframerate(48000);f.writeframes(raw)
 print(result.stdout.strip())
 results.append({'song':song,'frames':180,'stereo_samples':len(raw)//4,'validation':result.stdout.strip()})
mixed=[]
for song in (1,8,12,40):
 base=out/f'song-{song}'
 result=subprocess.run([str(a.psg_build.resolve()/'audio-replay'),str(base)+'-psg.events',str(base)+'-pcm.frames',str(base)+'-mixed.raw'],check=True,capture_output=True,text=True)
 raw=Path(str(base)+'-mixed.raw').read_bytes()
 with wave.open(str(base)+'-mixed.wav','wb') as f:
  f.setnchannels(2);f.setsampwidth(2);f.setframerate(48000);f.writeframes(raw)
 print(result.stdout.strip())
 mixed.append({'song':song,'stereo_samples':len(raw)//4,'validation':result.stdout.strip()})
(out/'mixed-report.json').write_text(json.dumps({'ok':True,'results':mixed,'hardware_comparison':False},indent=2)+'\n')
report.write_text(json.dumps({'ok':True,'psg_only':True,'mixed_audio_validated':False,'results':results},indent=2)+'\n')
