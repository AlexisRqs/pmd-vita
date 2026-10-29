# Port Menu integration — Pokémon 0.46

The `engine/full/port-menu` source snapshot is bundled from `v0.3.0`, commit
`b181eb6a427678b2d374c98432abf114b0330693` in AlexisRqs/port-menu (private).
Updated Vita platform adapters, the FR 0.46 variant, and the build/package
scripts are copied from the validated local port. Game-resource headers,
extracted banks, objects, builds and save files are deliberately excluded.

The code retains the existing per-game settings format and backup handling.
`platform_menu_shared.c` uses the shared option rules; video/input use the
shared navigation model. Old `fr028` sources remain for provenance only.
The historical source-manifest.json describes the old snapshot; the new
shared-menu-manifest.json records current integration source hashes.

Validation: shared CTest suites, synthetic host/storage/speed tests, actual
0.46 input function regression tests, and Vita adapter compile/link using
local engine objects. A complete ROM-based rebuild is now provided by `tools/rebuild_from_rom.py`;
see BUILD.md. No hardware validation is claimed.

Verify with `python3 tools/check_port_menu.py`. Update the bundled snapshot
only after testing and refreshing its file manifest; see PORT-MENU.md.
The large local pmd-common Git history is NOT part of this repository.
