# Provenance and third-party components

- **pret/pmd-red**: game decompilation, https://github.com/pret/pmd-red; the reference commit is listed in BUILD.md. The full checkout is not copied here; adaptations are retained as patches. Their inclusion does not establish a project-wide license for the original game.
- **VitaSDK**: compiler toolchain and system interfaces. Not bundled. The debug screen files in `sample/` retain their provenance headers; the font header references PSPSDK and a BSD license. The exact pinned source, CC0 text and explicit PSPSDK font license are retained in sample/NOTICE.md, sample/CC0-1.0.txt and sample/PSPSDK-LICENSE.txt.
- **libvita2d**: https://github.com/xerpi/libvita2d; its notice, revision, and MIT license are retained in `engine/full/vendor/vita2d/`. The compiled library is not bundled.
- **Gb_Snd_Emu / Blip_Buffer**: code sourced from VBA-M, with revision and checksums recorded in `engine/full/vendor/gbapu/manifest.json`. LGPL-2.1-or-later notices are retained alongside `COPYING.LESSER`, with the VBA-M repository license retained as `COPYING.VBA-M`.

Visual, music, and text assets extracted from ROMs are not distributed in this preparation repository. Code patches and tools do not replace a rights review before publication.

Original independent additions are covered by the root MIT license, with the scope and exceptions in LICENSING.md. This does not relicense upstream code, templates, game resources or third-party components.
