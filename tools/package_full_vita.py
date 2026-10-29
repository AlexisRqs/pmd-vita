#!/usr/bin/env python3
"""Package the experimental full engine and its replaceable LGPL audio library."""
import argparse, hashlib, json, re, shlex, struct, subprocess, zipfile
import xml.etree.ElementTree as ET
from pathlib import Path

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('--version', default='0.8')
p.add_argument('--resource-tests-only',action='store_true',help='Package with resource and isolated ARM fixture checks, without boot or console testing')
p.add_argument('--ui-tests-only',action='store_true',help='Explicitly package with synthetic GPU tests only, with no runtime claim')
p.add_argument('--file-tests-only',action='store_true',help='Explicitly package using synthetic file tests, with no boot/runtime claim')
p.add_argument('--title-id',default='PMDF00001')
p.add_argument('--title',default='PMD Native Experimental')
p.add_argument('--stem',default='pmd-vita-native')
p.add_argument('sdk', type=Path)
p.add_argument('build', type=Path)
p.add_argument('boot_report', type=Path)
p.add_argument('psg_report', type=Path)
p.add_argument('output', type=Path)
a = p.parse_args()
if not re.fullmatch(r"[0-9]{1,2}\.[0-9]{1,2}", a.version):
    p.error("version must be major.minor, each between 0 and 99")
if not re.fullmatch(r'[A-Z0-9]{9}',a.title_id) or not re.fullmatch(r'[a-zA-Z0-9-]+',a.stem):
    p.error('Invalid title ID or artifact stem')
major, minor = map(int, a.version.split("."))
sfo_version = f"{major:02d}.{minor:02d}"
base = Path(__file__).resolve().parents[1] / 'engine/full'
build = a.build.resolve()
output = a.output.resolve()
output.mkdir(parents=True, exist_ok=True)
boot = json.loads(a.boot_report.read_text())
assert boot['ok'] and boot['elf_sha256'] == hashlib.sha256((build/'pmd-full.elf').read_bytes()).hexdigest()
assert sum((a.file_tests_only,a.ui_tests_only,a.resource_tests_only))<=1
if a.resource_tests_only:
    assert boot.get('scope')=='resource_fixtures_only' and boot.get('runtime_tested') is False
    assert boot.get('frames')==282 and boot.get('arm_comparisons')==282
    assert boot.get('regressions_ok') is True
elif a.ui_tests_only:
    assert boot.get('scope')=='synthetic_gpu_only' and boot.get('runtime_tested') is False
elif a.file_tests_only:
    assert boot.get('scope')=='synthetic_files_only' and boot.get('runtime_tested') is False
else:
    assert boot.get('frames',0)>0
assert (build/'eboot.bin').read_bytes()[:4] == b'SCE\0'
gpu = json.loads((build/'report.json').read_text()).get('gpu_library') == 'vita2d'
objects = [Path(x) for x in shlex.split((build/'objects.rsp').read_text())]
psg = json.loads(a.psg_report.read_text())['results']
assert all(x['ok'] for x in psg)
replace = {str(Path(x['object']).resolve()): str(Path(x['source']).relative_to(base)) for x in psg}
assert set(replace) <= {str(x.resolve()) for x in objects}
sfo = build/'full-param.sfo'
subprocess.run([str(a.sdk.resolve()/'bin/vita-mksfoex'), '-s', 'TITLE_ID='+a.title_id, '-s', 'APP_VER='+sfo_version, a.title, str(sfo)], check=True)
livearea = base/'livearea'
asset_sizes = {'sce_sys/icon0.png':(128,128),
               'sce_sys/livearea/contents/bg.png':(840,500),
               'sce_sys/livearea/contents/startup.png':(280,158),
               'sce_sys/livearea/contents/settings.png':(280,124)}
for name,expected in asset_sizes.items():
    raw=(livearea/name).read_bytes()
    assert raw[:8]==b'\x89PNG\r\n\x1a\n' and raw[12:16]==b'IHDR',name
    assert struct.unpack('>II',raw[16:24])==expected and raw[24:26]==bytes((8,3)),name
xml_path='sce_sys/livearea/contents/template.xml'
template=ET.parse(livearea/xml_path).getroot()
assert template.tag=='livearea' and template.attrib.get('style')=='a1'
assert template.find("./frame[@id='frame3']/liveitem/target").text=='psla:-settings'
for element in template.iter():
    if element.tag in ('image','startup-image'):
        assert 'sce_sys/livearea/contents/'+element.text in asset_sizes
livearea_assets=[*asset_sizes,xml_path]
vpk = output/f'{a.stem}-{a.version}.vpk'
with zipfile.ZipFile(vpk, 'w', zipfile.ZIP_DEFLATED) as z:
    z.write(build/'eboot.bin', 'eboot.bin')
    z.write(base/'port-menu/LICENSE','licenses/port-menu/LICENSE')
    z.write(sfo, 'sce_sys/param.sfo')
    for notice in ('LICENSE', 'docs/LICENSING.md', 'docs/THIRD_PARTY.md', 'sample/NOTICE.md', 'sample/CC0-1.0.txt', 'sample/PSPSDK-LICENSE.txt'):
        z.write(base.parents[1]/notice, 'licenses/project/'+notice)
    z.write(base/'port-menu/FONT-LICENSE.txt','licenses/port-menu/FONT-LICENSE.txt')
    for name in livearea_assets: z.write(livearea/name,name)
    for name in ('NOTICE.txt', 'COPYING.LESSER', 'COPYING.VBA-M'):
        z.write(base/'vendor/gbapu'/name, 'licenses/gbapu/'+name)

    if gpu:
        for name in ('NOTICE.txt','LICENSE'):
            z.write(base/'vendor/vita2d'/name,'licenses/vita2d/'+name)

relink = '''#!/usr/bin/env python3
"""Rebuild the replaceable audio sources and relink. Usage: python3 relink.py /path/to/vitasdk"""
import json, subprocess, sys
from pathlib import Path
root=Path(__file__).resolve().parent
sdk=Path(sys.argv[1]).resolve(); out=root/'rebuilt'; out.mkdir(exist_ok=True)
base=root/'source'; objects=[]
metadata=json.loads((root/'build-paths.json').read_text())
original_base=metadata['source_base']
gpu_libs=[root/'libraries/libvita2d.a'] if metadata.get('gpu') else []
gpu_stubs=['-lScePower_stub','-lSceGxm_stub','-lSceSysmodule_stub','-lScePgf_stub','-lSceCommonDialog_stub','-lSceAppMgr_stub','-lSceLiveArea_stub'] if metadata.get('gpu') else []
def run(args): subprocess.run([str(x) for x in args],check=True)
for item in json.loads((root/'objects.json').read_text()):
    obj=root/item['object']
    if item.get('source'):
        src=base/item['source']; obj=out/obj.name
        run([sdk/'bin/arm-vita-eabi-g++','-std=c++17','-O2','-fno-strict-aliasing','-fno-exceptions','-fno-rtti','-ffile-prefix-map='+str(base)+'='+original_base,'-I',base,'-I',base/'vendor/gbapu','-c',src,'-o',obj])
    objects.append(obj)
rsp=out/'objects.rsp'; rsp.write_text('\\n'.join('"'+str(x)+'"' for x in objects))
run([sdk/'bin/arm-vita-eabi-g++','-Wl,-q','-Wl,-z,nocopyreloc','-Wl,--defsym=__sce_headroom=0x1000','@'+str(rsp),*gpu_libs,'-lSceDisplay_stub','-lSceCtrl_stub','-lSceTouch_stub','-lSceAudio_stub',*gpu_stubs,'-lm','-o',out/'pmd-full.elf'])
run([sdk/'bin/vita-elf-create',out/'pmd-full.elf',out/'pmd-full.velf'])
run([sdk/'bin/vita-make-fself',out/'pmd-full.velf',out/'eboot.bin'])
print('Replace eboot.bin in the experimental VPK with rebuilt/eboot.bin.')
'''
archive = output/f'{a.stem}-{a.version}-relink.zip'
manifest = []
with zipfile.ZipFile(archive, 'w', zipfile.ZIP_DEFLATED) as z:
    for i, obj in enumerate(objects):
        name = f'objects/{i:04d}-{obj.name}'
        z.write(obj, name)
        item = {'object': name}
        if str(obj.resolve()) in replace:
            item['source'] = replace[str(obj.resolve())]
        manifest.append(item)
    for src in sorted(base.rglob('*')):
        if src.is_file() and not any(part in {'.git', '__pycache__'} for part in src.relative_to(base).parts):
            z.write(src, 'source/'+str(src.relative_to(base)))
    if gpu:
        z.write(a.sdk.resolve()/'arm-vita-eabi/lib/libvita2d.a','libraries/libvita2d.a')
        z.write(a.sdk.resolve()/'arm-vita-eabi/include/vita2d.h','libraries/vita2d.h')
    z.writestr('objects.json', json.dumps(manifest, indent=2)+'\n')
    z.writestr('build-paths.json', json.dumps({'source_base': str(base), 'gpu': gpu})+'\n')
    z.writestr('relink.py', relink)
    z.writestr('REBUILD.txt', 'VitaSDK GCC 15.2.0. Python 3.\nEdit source/vendor/gbapu or the audio adapters, then run:\npython3 relink.py /absolute/path/to/vitasdk\nAll other application object files are provided for relinking with a modified library.\nUnicorn is a build-time test dependency only, never part of the Vita runtime.\nThis private build contains game resources extracted from the supplied ROM.\n')
for path in (vpk, archive):
    with zipfile.ZipFile(path) as z: assert z.testzip() is None
result = {'experimental': True, 'title_id': a.title_id, 'version': a.version, 'native_vita_tested': False,
          'livearea_assets': livearea_assets, 'settings_launch': 'psla:-settings',
          'boot_evidence': None if (a.file_tests_only or a.ui_tests_only or a.resource_tests_only) else boot, 'resource_test_evidence': boot if a.resource_tests_only else None, 'ui_test_evidence': boot if a.ui_tests_only else None, 'file_test_evidence': boot if a.file_tests_only else None, 'artifacts': {x.name: hashlib.sha256(x.read_bytes()).hexdigest() for x in (vpk, archive)}}
(output/f'{a.stem}-{a.version}-validation.json').write_text(json.dumps(result, indent=2)+'\n')
print('Packaged experimental VPK and LGPL source/relink objects; Vita hardware remains untested.')
