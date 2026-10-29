# PMD Vita

Experimental native PlayStation Vita adaptation of Pokémon Mystery Dungeon:
Red Rescue Team, based on [pret/pmd-red](https://github.com/pret/pmd-red).
Maintained by AlexisRqs, developed with AI assistance.

Candidate: **0.47**, with Port Menu **v0.3.0** bundled with unchanged runtime sources.
**Physical Vita validation pending.**
This source-only snapshot is published for review; no validated binary release is provided.

## Build and install

See [BUILD.md](docs/BUILD.md) for the complete macOS-tested reconstruction.
Clone recursively and supply the supported US and European ROMs locally.
No ROM, game resource, save, SDK, object or VPK is included in this repository.
The external workspace contains the private generated data and installable VPK.
See [INSTALL.md](docs/INSTALL.md) before updating an existing installation.

## Features and validation

Native engine, video/audio presentation, French scene/dialogue resources,
settings from Triangle, Start + Select or LiveArea, display/volume controls,
stick input, optional ×2 speed with muted audio, profiles and confirmed backup
restoration. 0.47 uses ROM-derived French mission reward dialogues, including
the one-point singular form, without changing reward calculations.

Earlier builds have been used on a physical Vita. Fresh reconstruction, synthetic
storage/input tests and instruction-level checks are separate evidence: the
0.47 publication candidate still needs [hardware acceptance](docs/HARDWARE-TEST.md).
The complete campaign is not validated. Some names/text banks may remain in
English. Save states, link connectivity and EU-only reconstruction are not
supported as validated features. No universal FPS guarantee is made.

## ROM-free checks

```sh
python3 tools/check_port_menu.py
python3 tools/check_publication.py
python3 tools/test_publication.py
python3 tools/test_private_snapshot.py
python3 tools/test_shared_menu_input.py
python3 tools/test_rebuild_boundary.py
```

The storage checks use fictitious files and ASan/UBSan. They do not open personal
saves or connect to a Vita. Optional ARM boot/reward tests are described in BUILD.md.

## Layout

- `engine/full/variants/fr047/`: selected Vita entry point and video adapter.
- `engine/full/`: platform adaptation, audio, settings, backups and pinned menu.
- `tools/rom-build/`: offset/hash recipes, decompilation-derived templates and
  pinned upstream patches; generated game bytes stay outside Git.
- `tests/`, `tools/test_*.py`: synthetic and optional private-input validation.
- `docs/`: build, installation, provenance, distribution and acceptance notes.

## Licenses and publication

The root MIT license applies only to independently authored original additions.
Upstream/decompilation-derived material and third-party components retain their
own status and notices; it is not a license to the original game. Read
[LICENSING.md](docs/LICENSING.md) and [THIRD_PARTY.md](docs/THIRD_PARTY.md).

Follow [PUBLICATION.md](docs/PUBLICATION.md) and
[DISTRIBUTION.md](docs/DISTRIBUTION.md). Development VPKs/relink archives contain
game data and must not be uploaded as public release assets. This project is
unofficial and is not affiliated with the original game's owners.
