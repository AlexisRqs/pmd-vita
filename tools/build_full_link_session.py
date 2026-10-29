#!/usr/bin/env python3
"""Test the standalone link session and compile its Vita object; no runtime integration."""
import argparse,json,subprocess
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('sdk',type=Path);p.add_argument('output',type=Path);a=p.parse_args()
project=Path(__file__).resolve().parents[1];platform=project/'engine/full';out=a.output.resolve();out.mkdir(parents=True,exist_ok=True)
report=out/'report.json';report.write_text(json.dumps({'ok':False,'status':'in progress'}))
source=platform/'platform_link_session.c';test=project/'tests/link_session_test.c';exe=out/'link-session-test'
subprocess.run(['clang','-std=c11','-O2','-Wall','-Wextra','-Werror','-fsanitize=address,undefined','-fno-sanitize-recover=all','-I',str(platform),str(source),str(platform/'platform_link_wire.c'),str(test),'-o',str(exe)],check=True)
r=subprocess.run([str(exe)],text=True,capture_output=True);(out/'host-test.log').write_text(r.stdout+r.stderr);r.check_returncode();print(r.stdout,end='')
obj=out/'platform_link_session.o';obj.unlink(missing_ok=True)
subprocess.run([str(a.sdk.resolve()/'bin/arm-vita-eabi-gcc'),'-std=c11','-O2','-Wall','-Wextra','-Werror','-c',str(source),'-o',str(obj)],check=True)
report.write_text(json.dumps({'ok':True,'network_ready':False,'integrated':False,'schema_generation':'Caller-provided nonzero IDs only; actual build/ABI fingerprint generation not implemented','scope':'Standalone bounded session state over wire codec; no socket, game callers or remote-commit guarantee','host_sanitizers':['address','undefined'],'results':[{'ok':True,'source':str(source),'object':str(obj)}]},indent=2)+'\n')
