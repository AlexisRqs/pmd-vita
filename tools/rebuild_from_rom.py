#!/usr/bin/env python3
"""Rebuild Pokémon 0.47 from source and locally supplied US/EU ROMs.

All generated files live in a new external workspace. This command has no
upload operation; its only network access fetches the pinned upstream source.
"""
import argparse
import concurrent.futures
import hashlib
import importlib.util
import json
import os
import re
import shutil
import subprocess
import sys
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
PIN='b181eb6a427678b2d374c98432abf114b0330693'

def external(path):
    path=path.resolve()
    if any((p/'.git').exists() for p in [path,*path.parents]) or path==ROOT or ROOT in path.parents:
        raise ValueError('Private input/workspace must be outside every Git checkout: '+str(path))
    return path

def sha(data):return hashlib.sha256(data).hexdigest()

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    for name in ['rom-us','rom-eu','sdk','workspace']:parser.add_argument('--'+name,type=Path,required=True)
    parser.add_argument('--arm-python',type=Path,help='Optional Python environment with unicorn and pyelftools for a 300-frame boot test')
    parser.add_argument('--jobs',type=int,default=4)
    args=parser.parse_args()
    if not 1<=args.jobs<=32:parser.error('--jobs must be between 1 and 32')
    recipe=json.loads((ROOT/'tools/rom-build/recipe.json').read_text())
    roms={}
    for name in ['us','eu']:
        data=external(getattr(args,'rom_'+name)).read_bytes()
        if hashlib.sha1(data).hexdigest()!=recipe['roms'][name]:parser.error('Unsupported '+name.upper()+' ROM revision')
        roms[name]=data
    workspace=external(args.workspace)
    if workspace.exists():parser.error('Workspace already exists; choose a new directory')
    sdk=args.sdk.resolve()
    for name in ['bin/arm-vita-eabi-gcc','bin/arm-vita-eabi-g++','bin/vita-elf-create','arm-vita-eabi/lib/libvita2d.a']:
        if not (sdk/name).is_file():parser.error('Missing VitaSDK prerequisite: '+name)
    for tool in ['git','make','cc','c++','pkg-config']:
        if not shutil.which(tool):parser.error('Missing host prerequisite: '+tool)
    from check_port_menu import verify
    if verify(ROOT) != PIN: parser.error('Unexpected bundled Port Menu revision')
    workspace.mkdir(parents=True)
    report=workspace/'build-report.json'
    state={'ok':False,'rom_sha1':recipe['roms'],'upstream_commit':recipe['upstream_commit'],'module_commit':PIN,'hardware_tested':False,'stages':[]}
    def save():report.write_text(json.dumps(state,indent=2)+'\n')
    save()
    logs=workspace/'logs';logs.mkdir()
    def run(name,command,cwd=None):
        print(name,flush=True)
        with (logs/(name+'.log')).open('w') as log:subprocess.run(list(map(str,command)),cwd=cwd,stdout=log,stderr=subprocess.STDOUT,check=True)
        state['stages'].append(name);save()
    # Copy the curated source tree only; never operate on developer build caches.
    project=workspace/'project'
    shutil.copytree(ROOT,project,ignore=shutil.ignore_patterns('.git','graphify-out','__pycache__','build','build-*','outputs','private-assets'))
    upstream=workspace/'upstream'
    run('fetch-init',['git','init',upstream])
    run('fetch-source',['git','fetch','--depth','1',recipe['upstream_url'],recipe['upstream_commit']],upstream)
    run('checkout-source',['git','checkout','--detach','FETCH_HEAD'],upstream)
    actual=subprocess.check_output(['git','rev-parse','HEAD'],cwd=upstream,text=True).strip()
    if actual!=recipe['upstream_commit']:raise ValueError('Upstream revision mismatch')
    # Strip Git metadata before adding any private input. This tree cannot be pushed.
    shutil.rmtree(upstream/'.git')
    run('native-patch',['git','apply',project/'tools/rom-build/native.patch'],upstream)
    (upstream/'baserom.gba').write_bytes(roms['us'])
    (upstream/'baserom_eu.gba').write_bytes(roms['eu'])
    for tool in ['preproc','gbagfx','dungeonjson']:
        run('host-'+tool,['make','-C',upstream/'tools'/tool,'-j',str(args.jobs)])
    run('data-assets',['make','-f',project/'engine/full/data-assets.mk','-j',str(args.jobs),'native-data-assets'],upstream)
    # Reconstitute translated literals/data from offset-only recipes.
    def bytes_for(key):
        record=recipe['records'][key]
        value=b''.join(roms[lang][offset:offset+length] for lang,offset,length in record['spans'])
        if len(value)!=record['length'] or sha(value)!=key:raise ValueError('ROM extraction mismatch: '+key)
        return value
    def expand(match):
        kind,key=match.groups();data=bytes_for(key)
        # Keep ASCII literals readable for the upstream _(text) charmap preprocessor.
        if kind=='STRING' and all(32<=x<127 or x in (9,10,13) for x in data):
            return json.dumps(data.decode('ascii'))
        if kind=='STRING':return '"'+''.join(f'\\x{x:02x}' for x in data)+'"'
        # Assembler reads private ROMs directly, preserving raw bytes/relocations.
        return '\n'.join(f'.incbin "{ "baserom.gba" if lang=="us" else "baserom_eu.gba"}", {offset}, {length}' for lang,offset,length in recipe['records'][key]['spans'])
    for template in (project/'tools/rom-build/templates').rglob('*'):
        if not template.is_file():continue
        relative=template.relative_to(project/'tools/rom-build/templates')
        destination=workspace/relative;destination.parent.mkdir(parents=True,exist_ok=True)
        text=re.sub(r'@@(STRING|ASM):([a-f0-9]+)@@',expand,template.read_text())
        if '@@STRING:' in text or '@@ASM:' in text:raise ValueError('Unresolved extraction placeholder')
        destination.write_text(text)
    # Convert only missing graphics referenced by upstream and localized source.
    assets=set()
    for folder in [upstream/'src',workspace/'overlays']:
        for source in folder.rglob('*'):
            if source.suffix in ['.c','.h']:
                for macro in re.finditer(r'INCBIN_\w+\((.*?)\)',source.read_text(errors='replace'),re.S):assets.update(re.findall(r'"([^"\n]+)"',macro[1]))
    for name in sorted(assets):
        target=upstream/name
        if target.exists():continue
        ext={'.4bpp':'.png','.pmdpal':'.pal','.gbapal':'.pal'}.get(target.suffix)
        source=target.with_suffix(ext) if ext else None
        if not source or not source.is_file():raise ValueError('Missing local resource recipe: '+name)
        subprocess.run([str(upstream/'tools/gbagfx/gbagfx'),str(source),str(target)],check=True)
    base=project/'engine/full';cc=sdk/'bin/arm-vita-eabi-gcc';cpp=sdk/'bin/arm-vita-eabi-g++';objects=workspace/'objects';objects.mkdir()
    def compile_unit(item):
        obj=workspace/item['object'];log=logs/(obj.stem+'.log')
        flags=['-std=gnu11','-iquote',str(upstream/'include'),'-iquote',str(upstream/'src'),'-iquote',str(base),'-include',str(base/'native_prelude.h'),'-Wno-pointer-sign','-Wno-error=implicit-function-declaration','-Wno-error=incompatible-pointer-types','-Wno-error=int-conversion']
        with log.open('w') as output:
            def command(argv):
                if argv[0] in [cc,cpp]:argv=[argv[0],'-ffile-prefix-map='+str(workspace)+'=.',*argv[1:]]
                subprocess.run(list(map(str,argv)),cwd=upstream,stdout=output,stderr=subprocess.STDOUT,check=True)
            if item['kind']=='c':
                source=workspace/item['source'];intermediate=obj.with_suffix('.i');expanded=obj.with_suffix('.expanded.i')
                command([cc,'-E',*flags,source,'-o',intermediate])
                with expanded.open('wb') as target:subprocess.run([str(upstream/'tools/preproc/preproc'),str(intermediate),'charmap.txt'],cwd=upstream,stdout=target,stderr=output,check=True)
                command([cc,'-x','cpp-output','-std=gnu11','-O2','-fno-strict-aliasing','-Wno-error=implicit-function-declaration','-Wno-error=incompatible-pointer-types','-Wno-error=int-conversion','-c',expanded,'-o',obj])
            elif item['kind'] in ['asm-original','asm-cpp']:
                source=workspace/item['source'];intermediate=obj.with_suffix('.i.s');expanded=obj.with_suffix('.s')
                command([cc,'-E','-x','assembler-with-cpp','-iquote','include','-I','.',source,'-o',intermediate])
                if item['kind']=='asm-original':
                    with expanded.open('wb') as target:subprocess.run([str(upstream/'tools/preproc/preproc'),str(intermediate),'charmap.txt'],cwd=upstream,stdout=target,stderr=output,check=True)
                else:shutil.copy2(intermediate,expanded)
                command([cc,'-c','-x','assembler',expanded,'-o',obj])
            elif item['kind']=='asm':command([cc,'-c','-x','assembler',workspace/item['source'],'-o',obj])
            else:
                name=item['name'];stem=Path(name).stem
                if name=='arm_funcs.o':command([cc,'-c','-x','assembler-with-cpp','-iquote','include','-I','.',upstream/'src/arm_funcs.s','-o',obj])
                elif name in ['platform_psg.o','platform_pcm.o','Gb_Apu.o','Gb_Oscs.o','Blip_Buffer.o','Multi_Buffer.o']:
                    source=base/(stem+'.cpp') if stem.startswith('platform_') else base/'vendor/gbapu/core/apu'/(stem+'.cpp')
                    command([cpp,'-std=c++17','-O2','-fno-strict-aliasing','-fno-exceptions','-fno-rtti','-I',base,'-I',base/'vendor/gbapu','-c',source,'-o',obj])
                else:command([cc,'-std=gnu11','-O2','-fno-strict-aliasing','-iquote',upstream/'include','-I',base,'-c',base/(stem+'.c'),'-o',obj])
        return {'ok':True,'object':str(obj),'source':item.get('source',item.get('name'))}
    print('Compiling',len(recipe['units']),'source units; no precompiled game objects',flush=True)
    with concurrent.futures.ThreadPoolExecutor(max_workers=args.jobs) as pool:results=list(pool.map(compile_unit,recipe['units']))
    object_report=workspace/'objects.json';object_report.write_text(json.dumps({'results':results},indent=2))
    state['stages'].append('compile-all-units');save()
    build=workspace/'build'
    run('link',[sys.executable,project/'tools/build_full_vita_elf.py','--entrypoint',base/'variants/fr047/platform_vita_main_fr.c',sdk,build,object_report])
    spec=importlib.util.spec_from_file_location('elf_check',project/'tools/rom-build/check_elf.py');elf_check=importlib.util.module_from_spec(spec);spec.loader.exec_module(elf_check)
    elf_check.check(build/'pmd-full.elf',workspace/'archive-check.json')
    state['stages'].append('archive-check');save()
    if args.arm_python:
        run('arm-boot',[args.arm_python.absolute(),project/'tools/test_full_boot_arm.py',build/'pmd-full.elf',workspace/'arm-boot','--frames','300'])
        run('reward-dialogue',[args.arm_python.absolute(),project/'tools/test_mission_rewards_arm.py',build/'pmd-full.elf',workspace/'reward-tests'])
    # Decode title art locally. No captured/decoded image is stored in Git.
    art=project/'tools/rom-build/art';private=workspace/'art';private.mkdir()
    (private/'title.at4px').write_bytes(roms['us'][0x384c9c:0x384c9c+0x3e34]);(private/'title.pal').write_bytes(roms['us'][0x388ad0:0x388ad0+0x380])
    run('title-decoder-build',['cc','-std=c11','-O2','-I',art/'include',art/'main.c',art/'render.c',art/'decompress_at.c','-o',private/'decode-title'])
    run('title-decode',[private/'decode-title',private/'title.at4px',private/'title.pal',private/'title.ppm'])
    spec=importlib.util.spec_from_file_location('local_livearea',project/'tools/rom-build/livearea.py');live=importlib.util.module_from_spec(spec);spec.loader.exec_module(live)
    live.make_assets(private/'title.ppm',base/'livearea',base/'port-menu')
    run('video-tests',[sys.executable,project/'tools/test_vita_video.py',workspace/'video-tests'])
    validation={'ok':True,'scope':'synthetic_gpu_only','runtime_tested':False,'elf_sha256':sha((build/'pmd-full.elf').read_bytes()),'fresh_source_build':True}
    evidence=workspace/'ui-validation.json';evidence.write_text(json.dumps(validation))
    psg=[]
    for item in recipe['units']:
        if item.get('name') in ['platform_psg.o','platform_pcm.o','Gb_Apu.o','Gb_Oscs.o','Blip_Buffer.o','Multi_Buffer.o']:
            stem=Path(item['name']).stem;source=base/(stem+'.cpp') if stem.startswith('platform_') else base/'vendor/gbapu/core/apu'/(stem+'.cpp')
            psg.append({'ok':True,'object':str(workspace/item['object']),'source':str(source)})
    psg_report=workspace/'psg.json';psg_report.write_text(json.dumps({'results':psg}))
    run('package',[sys.executable,project/'tools/package_full_vita.py','--version','0.47','--ui-tests-only','--title-id','PMDFR0001','--title','PMD Equipe Rouge FR','--stem','pmd-vita-fr',sdk,build,evidence,psg_report,workspace/'packages'])
    state.update(ok=True,compiled_game_units=len(results),elf_sha256=validation['elf_sha256'],vpk=str(workspace/'packages/pmd-vita-fr-0.47.vpk'))
    save();print('PASS: complete fresh source build:',state['vpk'])

if __name__=='__main__':main()
