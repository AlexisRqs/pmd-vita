#!/usr/bin/env python3
"""Apply a deliberately bounded scene sample; preserve all script instructions."""
import argparse,json,re,shutil,hashlib
from pathlib import Path
from extract_scene_locale import PATTERN
p=argparse.ArgumentParser();p.add_argument('--all-safe',action='store_true',help='Import every unique correspondence with matching substitutions');p.add_argument('upstream',type=Path);p.add_argument('prior',type=Path);p.add_argument('catalog',type=Path);p.add_argument('output',type=Path);a=p.parse_args()
selection={'d01p01':[0,1,2,3,4,12,16,24,25,30,31,37,38,60,61], 'a01p01':[3,4,5,6,7,8], 'd13p03':[2,3,4,5,6,7]}
catalog=json.loads(a.catalog.read_text());rows={(r['file'],r['ordinal']):r for r in catalog['occurrences']};out=a.output;out.mkdir(parents=True,exist_ok=True);shutil.copytree(a.prior/'source',out/'source',dirs_exist_ok=True)
if a.all_safe:
 selection={}
 for row in catalog['occurrences']:
  if row['status']=='matched':
   scene=Path(row['file']).stem.removeprefix('ground_data_').removesuffix('_station');selection.setdefault(scene,[]).append(row['ordinal'])
records=[];checks=[];compile_sources=[]
for scene,indices in selection.items():
 rel=f'src/data/ground/ground_data_{scene}_station.h';source=(a.upstream/rel).read_text().replace('\\\n','');ordinal=-1
 def replace(m):
  global ordinal
  ordinal+=1
  if ordinal not in indices:return m[0]
  r=rows[rel,ordinal];assert r['status']=='matched',r
  records.append(r);raw=bytes.fromhex(r['fr']);return '("'+''.join('\\x%02x'%x for x in raw)+'")'
 translated=PATTERN.sub(replace,source)
 # Remove every text literal from both versions: remaining scripts must match.
 before=PATTERN.sub('_(TEXT)',source);after=PATTERN.sub('_(TEXT)',translated);after=re.sub(r'\("(?:\\x[0-9a-f]{2})*"\)', '_(TEXT)', after);assert before==after
 checks.append({'file':rel,'script_without_text_sha256':hashlib.sha256(before.encode()).hexdigest(),'unchanged':True})
 target=out/'source'/rel;target.parent.mkdir(parents=True,exist_ok=True);target.write_text(translated)
 c=f'src/ground_data_{scene}_station.c';shutil.copy2(a.upstream/c,out/'source'/c);compile_sources.append(c)
assert len(records)==sum(map(len,selection.values()))
(out/'scene-report.json').write_text(json.dumps({'compile_sources':compile_sources,'records':records,'script_checks':checks,'selection':selection,'catalog_summary':catalog['summary'],'mode':'all-safe' if a.all_safe else 'sample','exceptions':[r for r in catalog['occurrences'] if r['status']!='matched']},ensure_ascii=False,indent=2)+'\n')
print('Selected',len(records),'texts across',len(selection),'scene files; scripts unchanged')
