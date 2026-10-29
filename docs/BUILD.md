# Fresh local ROM build — Pokémon 0.47

## Prerequisites

- Git, Python 3, Make, a host C/C++ compiler, pkg-config and libpng development files.
- VitaSDK with `arm-vita-eabi-gcc`/g++ 15.2 and libvita2d installed.
- Git; the shared menu sources are bundled and require no authentication.
- Internet access for the pinned upstream source checkout (pret/pmd-red at
  `ce5a84a02e9bc5101977908da470fa85fc59e5ff`). No ROM is downloaded.

Supply both original ROMs as files **outside every Git checkout**:

| Argument | Version | SHA-1 |
| --- | --- | --- |
| `--rom-us` | US/Australia, base engine/resources | `9f4cfc5b5f4859d17169a485462e977c7aac2b89` |
| `--rom-eu` | Europe, French text/resources | `afee3b060dd5fd4a68afb1b003456aef3a2af073` |

An EU-only rebuild is not supported by this recipe. Other revisions fail before
writing any output. VitaSDK and libvita2d are prerequisites, not bundled binaries.
The complete workflow is validated on macOS; Linux host commands are supported
by the upstream recipes but have not been validated in this change.

## Build from a fresh clone

```sh
git clone https://github.com/AlexisRqs/pmd-vita.git
cd pmd-vita
python3 tools/rebuild_from_rom.py \
  --rom-us /path/to/pmd-usa.gba \
  --rom-eu /path/to/pmd-europe.gba \
  --sdk /path/to/vitasdk \
  --workspace "$HOME/BipBoop-builds/pmd-047-001" \
  --jobs 4
```

The workspace must not exist and must be outside **all** Git repositories.
Failed builds remain available for diagnosis; choose a new directory to retry.
The command never pushes or uploads files. It removes Git metadata from the
fetched upstream checkout **before** copying a ROM or generating private data.
It does not touch the supplied ROMs, earlier builds, or console save files.

The command recompiles all 1,321 engine/data/audio units, then eight Vita/menu
units, links a new ELF/SELF, validates resource archive pointers, runs synthetic
GPU tests, and creates `packages/pmd-vita-fr-0.47.vpk`. No old game objects or
local development reports are reused. It regenerates the LiveArea artwork from
the title resources in the supplied ROM; its startup layout differs from the
previous manually composed artwork, while keeping the same settings launch.
The sibling relink ZIP is also private: it contains generated resources and
must not be uploaded to the source repository.

`build-report.json` records stages, ROM hashes and the resulting ELF hash.
`logs/` contains command diagnostics; `archive-check.json` records archive checks.
Any error leaves `ok: false`; a VPK alone is not proof that the full command passed.

## Optional instruction-level boot check

Create a Python environment outside Git and install the pinned build-time
requirements from `tools/requirements-arm-tests.txt`. Pass its interpreter:

```sh
python3 -m venv "$HOME/BipBoop-builds/arm-tests-env"
"$HOME/BipBoop-builds/arm-tests-env/bin/python" -m pip install -r tools/requirements-arm-tests.txt
# Add to the rebuild command:
# --arm-python "$HOME/BipBoop-builds/arm-tests-env/bin/python"
```

This runs 300 frames with explicit host service doubles. It does not substitute
for testing the VPK on a physical Vita, nor validate the whole campaign.

## Source/data boundary

`tools/rom-build/recipe.json` contains source-unit selection, ROM offsets,
lengths and hashes only. Templates preserve the adapted C/assembly layout and
replace extracted literals with references. Rebuilding expands them solely in
the external workspace. Existing upstream data generation runs there as well.
The native patch, audio library notices and decoder provenance are retained.
Do not commit expanded templates, ROM copies, object files or the workspace.

Run `python3 tools/test_rebuild_boundary.py` for synthetic rejection tests and
`python3 tools/check_source_tree.py` before pushing source changes. Updating the
port beyond this 0.47 recipe requires reviewing its source selections and ROM
references; silently selecting newer development objects is intentionally avoided.

## Reward dialogue regression check (0.47)

After the build, run the optional ARM test interpreter against the new ELF:

```sh
/path/to/arm-tests-env/bin/python tools/test_mission_rewards_arm.py \
  /path/to/workspace/build/pmd-full.elf /path/to/workspace/reward-tests
```

This checks ten official French strings plus a singular variant by hash, dynamic formatting and glyph
widths with synthetic names, plus the real points branch and item quantity
formatter. The test rejects overlong lines in its fixtures.
The quest flag is an explicit test fixture; no saved game is opened.

The 0.46 recipe selected the upstream English `mission_reward.c`, independently
of translated item names and thank-you dialogue. The 0.47 overlay selects all ten
French equivalents from the verified European ROM, retaining their exact bytes. The one-point variant removes only the plural
suffix from the official text; the existing numeric argument selects it.
Only offsets, hashes and a source template are stored here. Reward calculations,
inventory, save handling and the shared menu are unchanged. Hardware acceptance
still requires completing missions with item, money and Friend Area rewards,
including an already-owned area and a rank change.
