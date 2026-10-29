# Invoke from an isolated upstream checkout with -f /absolute/path/to/this/file.
# Reuse upstream recipes without triggering GBA compiler dependency scanning.
DATA_ASM_SUBDIR = data
DUNGEONJSON = tools/dungeonjson/dungeonjson
.PHONY: native-data-assets
native-data-assets: data_item data_move data_monster data_learnset_ptrs data_dungeon dungeon_floor dungeon_pokemon dungeon_trap dungeon_item
include data_item.mk data_move.mk data_monster.mk data_dungeon.mk
include dungeon_floor.mk dungeon_pokemon.mk dungeon_trap.mk dungeon_item.mk
GBAGFX = tools/gbagfx/gbagfx
include graphics.mk
native-data-assets: graphics/dungeon/pal/barnpal.pmdpal $(patsubst %.pal,%.pmdpal,$(wildcard graphics/unk_monpal/*.pal))
