#!/usr/bin/env python3
"""Link the full native engine with its Vita entrypoint. Does not prove it boots."""
import argparse,json,subprocess
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--entrypoint',type=Path,help='Optional isolated variant entrypoint')
p.add_argument('sdk',type=Path);p.add_argument('output',type=Path);p.add_argument('reports',type=Path,nargs='+')
a=p.parse_args();sdk=a.sdk.resolve();out=a.output.resolve();out.mkdir(parents=True,exist_ok=True);project=Path(__file__).resolve().parents[1]
report=out/'report.json';report.write_text(json.dumps({'ok':False,'reason':'link in progress'}));objects=[]
for path in a.reports:
 data=json.loads(path.read_text());assert not data.get('asset_errors') and all(x['ok'] for x in data['results']),path
 objects.extend(x['object'] for x in data['results'])
assert len(objects)==len(set(objects))
def run(args):subprocess.run([str(x) for x in args],check=True)
for source in ((a.entrypoint.resolve() if a.entrypoint else project/'engine/full/platform_vita_main.c'),project/'engine/full/platform_vita_video.c',project/'engine/full/platform_settings.c',project/'engine/full/platform_menu_shared.c',project/'engine/full/port-menu/port_model.c',project/'engine/full/platform_speed.c',project/'engine/full/platform_backup.c',project/'sample/debugScreen.c'):
 obj=out/(source.stem+'.o');run([sdk/'bin/arm-vita-eabi-gcc','-std=gnu11','-O2','-I',project/'engine/full','-I',project/'sample','-c',source,'-o',obj]);objects.append(str(obj))
rsp=out/'objects.rsp';rsp.write_text('\n'.join('"'+x+'"' for x in objects))
elf=out/'pmd-full.elf'
run([sdk/'bin/arm-vita-eabi-g++','-Wl,-q','-Wl,-z,nocopyreloc','-Wl,--defsym=__sce_headroom=0x1000','-Wl,-Map='+str(out/'pmd-full.map'),'@'+str(rsp),'-lvita2d','-lSceDisplay_stub','-lSceCtrl_stub','-lSceTouch_stub','-lSceAudio_stub','-lScePower_stub','-lSceGxm_stub','-lSceSysmodule_stub','-lScePgf_stub','-lSceCommonDialog_stub','-lSceAppMgr_stub','-lSceLiveArea_stub','-lm','-o',elf])
run([sdk/'bin/vita-elf-create',elf,out/'pmd-full.velf'])
run([sdk/'bin/vita-make-fself',out/'pmd-full.velf',out/'eboot.bin'])
report.write_text(json.dumps({'ok':True,'objects':len(objects),'elf':str(elf),'self':str(out/'eboot.bin'),'gpu_library':'vita2d','runtime_tested':False,'packaged':False},indent=2)+'\n')
print('PASS: full Vita ELF/VELF/SELF generated; boot and asset-pointer audit still required')
