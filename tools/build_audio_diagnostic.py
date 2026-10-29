#!/usr/bin/env python3
"""Build separate PMDA00001 audio diagnostics; never accesses game save files."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import wave
import zipfile

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('sdk',type=Path);p.add_argument('stems',type=Path);p.add_argument('build',type=Path);p.add_argument('vpk',type=Path)
a=p.parse_args();sdk=a.sdk.resolve();stems=a.stems.resolve();out=a.build.resolve();vpk=a.vpk.resolve()
out.mkdir(parents=True,exist_ok=True);vpk.parent.mkdir(parents=True,exist_ok=True)
project=Path(__file__).resolve().parents[1];base=project/'engine/full'
report=out/'report.json';report.write_text(json.dumps({'ok':False,'hardware_tested':False})+'\n')
def run(args):subprocess.run([str(x) for x in args],check=True)
assets={};count=None
for name in ('mixed','pcm','psg'):
 with wave.open(str(stems/(name+'.wav')),'rb') as wav:
  if wav.getparams()[:3]!=(2,2,48000) or wav.getcomptype()!='NONE':raise ValueError('Expected uncompressed stereo16/48000: '+name)
  frames=wav.getnframes();data=wav.readframes(frames)
  if not 48000<=frames<=48000*30 or len(data)!=frames*4:raise ValueError('Invalid/truncated capture: '+name)
  if count is None:count=frames
  if frames!=count:raise ValueError('Capture lengths differ')
  assets[name+'.pcm']=data
(out/'audio_diagnostic_assets.h').write_text('#define PMD_DIAG_CAPTURE_FRAMES '+str(count)+'u\n')
flags=['-std=c11','-O2','-Wall','-Wextra','-Werror','-I',base]
run(['clang',*flags,'-fsanitize=address,undefined','-fno-sanitize-recover=all',base/'audio_diagnostic_source.c',project/'tests/audio_diagnostic_test.c','-lm','-o',out/'source-test'])
run([out/'source-test'])
# Validate the exact shared queue/backend, including deferred device reads.
run(['python3',project/'tools/build_full_audio_output.py',sdk,out/'audio-output'])
audio=json.loads((out/'audio-output/report.json').read_text())
objects=[Path(x['object']) for x in audio['results']]
for src in (base/'audio_diagnostic_source.c',base/'audio_diagnostic_main.c',project/'sample/debugScreen.c'):
 obj=out/(src.stem+'.o')
 run([sdk/'bin/arm-vita-eabi-gcc','-std=gnu11','-O2','-I',base,'-I',out,'-I',project/'sample','-c',src,'-o',obj]);objects.append(obj)
elf=out/'pmd-audio-diagnostic.elf'
run([sdk/'bin/arm-vita-eabi-gcc','-Wl,-q','-Wl,-z,nocopyreloc',*objects,'-lSceDisplay_stub','-lSceCtrl_stub','-lSceAudio_stub','-lScePower_stub','-lm','-o',elf])
run([sdk/'bin/vita-elf-create',elf,out/'pmd-audio-diagnostic.velf'])
run([sdk/'bin/vita-make-fself',out/'pmd-audio-diagnostic.velf',out/'eboot.bin'])
run([sdk/'bin/vita-mksfoex','-s','TITLE_ID=PMDA00001','-s','APP_VER=01.00','PMD Audio Diagnostic',out/'param.sfo'])
notes='''PMD AUDIO DIAGNOSTIC 1.00 — application séparée PMDA00001
Installer ce VPK dans VitaShell. Il ne remplace pas le jeu et ne lit/modifie aucune sauvegarde.
Croix : mode suivant. START : quitter. Modes : musique complète, PCM, PSG, sinus440Hz, silence.
Les trois premiers modes rejouent la même capture native de5secondes avec fondus20ms
et une pause volontaire0,5seconde entre répétitions. Cette pause est affichée.
Le sinus est continu, faible (-24dBFS), sans remise à zéro de phase entre blocs.
Les changements de mode interrompent volontairement le son ; ne pas les confondre avec le parasite.
La sortie audio est exactement celle du jeu0.12. CPU444MHz, fréquence précédente restaurée à la sortie.
Les captures sont chargées en mémoire avant lecture ; pas de streaming depuis la carte.
Cette version a été compilée et testée avec doubles d'API sur ordinateur, pas encore sur Vita.
Noter dans quels modes le grésillement reste audible, et si le silence numérique en contient.
Une lecture propre ici ne prouve pas l’absence de manque de données sous la charge du jeu.
'''
with zipfile.ZipFile(vpk,'w',zipfile.ZIP_DEFLATED) as archive:
 archive.write(out/'eboot.bin','eboot.bin');archive.write(out/'param.sfo','sce_sys/param.sfo')
 for name,data in assets.items():archive.writestr(name,data)
 archive.writestr('LISEZ-MOI.txt',notes)
with zipfile.ZipFile(vpk) as archive:
 assert archive.testzip() is None
 for name,data in assets.items():assert archive.read(name)==data
report.write_text(json.dumps({'ok':True,'hardware_tested':False,'title_id':'PMDA00001','version':'01.00',
 'capture_frames':count,'sample_rate':48000,'channels':2,'capture_hashes':{k:hashlib.sha256(v).hexdigest() for k,v in assets.items()},
 'audio_backend_sha256':hashlib.sha256((base/'platform_vita_audio.c').read_bytes()).hexdigest(),
 'vpk':str(vpk),'vpk_sha256':hashlib.sha256(vpk.read_bytes()).hexdigest(),'elf':str(elf),
 'tests':['hostASanUBSan source boundaries/phase','shared threaded output regression','Vita compile/link/SELF','VPK integrity and PCM exact-readback']},indent=2)+'\n')
vpk.with_suffix('.txt').write_text(notes)
print('PASS: separate audio diagnostic VPK built; actual Vita playback untested')
