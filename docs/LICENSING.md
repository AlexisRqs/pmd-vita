# License scope

The root MIT license covers only original contributions by AlexisRqs and
contributors: independently authored Vita adaptation, build/extraction tools,
tests and documentation, to the extent they hold rights in those contributions.
It is not a blanket relicense of every file or a license to the original game.

Exceptions retain their own terms:

- Port Menu: MIT; its PSPSDK font: BSD (bundled LICENSE/FONT-LICENSE.txt).
- `sample/debugScreen*`: VitaSDK samples CC0; debugScreenFont.c retains the
  PSPSDK BSD notice. See sample/NOTICE.md and bundled license texts.
- `engine/full/vendor/vita2d`: MIT, with original copyright and notice.
- `engine/full/vendor/gbapu`: per-file LGPL-2.1-or-later; original notices and
  COPYING.LESSER preserved. Repository-level VBA-M COPYING is retained separately.
- Upstream engine patches, decompilation-derived templates and the ROM title
  decoder retain their upstream provenance. The root MIT grant covers only
  independently authored additions, not the upstream portions or game data.

pret/pmd-red does not provide a blanket license to the commercially released
game. No claim is made that the complete reconstructed game is MIT/open source.
The curated adaptation is prepared for source publication; this notice does not
establish permission to redistribute upstream game intellectual property.
See THIRD_PARTY.md and DISTRIBUTION.md. No game binary release is authorized by
these documents. Sources are generated/combined only in a local external workspace.
