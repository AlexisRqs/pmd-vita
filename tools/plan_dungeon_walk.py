#!/usr/bin/env python3
"""Generate ordinary directional button events from a read-only dungeon snapshot.

Uses cardinal walkable terrain only. Enemies are treated as blocked at the time
of the snapshot; they may move later, so this plan is not proof of arrival.
Never changes game memory, HP, RNG or entity positions.
"""
import argparse, json
from collections import deque
from pathlib import Path

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('snapshot', type=Path); p.add_argument('output', type=Path)
p.add_argument('--start-frame', type=int, required=True)
p.add_argument('--interval', type=int, default=60)
p.add_argument('--duration', type=int, default=2)
p.add_argument('--max-steps', type=int, default=10)
a = p.parse_args()
if a.start_frame < 0 or a.interval <= a.duration or a.duration < 1 or a.max_steps < 1:
    p.error('Require nonnegative frame, interval > duration >= 1, max-steps >= 1')
s = json.loads(a.snapshot.read_text())
if not s.get('dungeon_active'): p.error('No active dungeon')
leaders = [e for e in s['entities'] if e['leader']]
if len(leaders) != 1: p.error('Expected exactly one leader')
start = tuple(leaders[0]['position']); goal = tuple(s['stairs'])
w,h = s['layout']['width'],s['layout']['height']; flags = s['terrain_flags']
assert len(flags) == w*h
blocked = {tuple(e['position']) for e in s['entities'] if e['enemy']}
seen = {start: None}; queue = deque([start])
while queue:
    current = queue.popleft()
    if current == goal: break
    for dx,dy,key in ((0,-1,'UP'),(0,1,'DOWN'),(-1,0,'LEFT'),(1,0,'RIGHT')):
        nxt = current[0]+dx,current[1]+dy
        if not (0 <= nxt[0] < w and 0 <= nxt[1] < h): continue
        terrain = flags[nxt[1]*w+nxt[0]]
        # Normal floor only; impassable-wall flag excludes even marked floors.
        if not terrain & s['layout']['normal_terrain'] or terrain & 16: continue
        if nxt not in seen and nxt not in blocked:
            seen[nxt] = current,key; queue.append(nxt)
if goal not in seen: p.error('No cardinal route avoiding current enemy positions')
route=[]; current=goal
while current != start:
    current,key=seen[current]; route.append(key)
route.reverse(); selected=route[:a.max_steps]
events=[{'after_frame':a.start_frame+i*a.interval,'duration':a.duration,'buttons':[key]} for i,key in enumerate(selected)]
a.output.parent.mkdir(parents=True,exist_ok=True)
a.output.write_text(json.dumps(events,indent=2)+'\n')
print(json.dumps({'route_length':len(route),'planned_steps':len(selected),'start':start,'stairs':goal,'buttons':selected}))
