#include "global.h"
#include "globaldata.h"
#include "script_item.h"
#include "items.h"
#include "event_flag.h"
#include "music_util.h"
#include "memory.h"
#include "string_format.h"
#include "code_800D090.h"
#include "textbox.h"

// These are only written to.
struct ScriptItemsData
{
     u32 unk0; // Unused
     s32 tableId;
     u32 unk8;
};

EWRAM_DATA static struct ScriptItemsData *sScriptItemsData = {NULL};

enum {
    RECEIVED_STR_ONE_REWARD,
    RECEIVED_STR_ALSO_ITEM,
    RECEIVED_STR_CASH,
};

// Should be just const instead of ewram init, since the pointers aren't modified.
EWRAM_INIT static const char *sItemReceivedStrings[3] = {
    [RECEIVED_STR_ONE_REWARD] = (@@STRING:76f5042b46b3145b7651cfa617b8aafe4ddcf5462635c816ee4f7f5da288b50f@@),
    [RECEIVED_STR_ALSO_ITEM] = (@@STRING:5cdc52216f0e2c61d640012db0c6c1963035f3296922a6faccbba39b135bf2b4@@),
    [RECEIVED_STR_CASH] = (@@STRING:76f5042b46b3145b7651cfa617b8aafe4ddcf5462635c816ee4f7f5da288b50f@@),
};

void InitInternalScriptItemsData(void)
{
    sScriptItemsData = MemoryAlloc(sizeof(struct ScriptItemsData), MEMALLOC_GROUP_6);
    sScriptItemsData->tableId = -1;
    sScriptItemsData->unk8 = 0;
}

void FreeInternalScriptItemsData(void)
{
    FREE_AND_SET_NULL(sScriptItemsData);
}

void ClearScriptItemScriptVars(void)
{
    ClearScriptVarArray(NULL, STATION_ITEM_TEMP);
    ClearScriptVarArray(NULL, DELIVER_ITEM_TEMP);
}

s32 HasItemInInventory(u8 item)
{
    if (FindItemInInventory(item) >= 0)
        return TRUE;
    else
        return FALSE;
}

struct ItemWithQuantity
{
    u8 id;
    s16 quantity;
};

static const struct ItemWithQuantity sScriptItemsTable[10] = {
    {ITEM_ORAN_BERRY, 0},
    {ITEM_PECHA_BERRY, 0},
    {ITEM_RAWST_BERRY, 0},
    {ITEM_POKE, 500},
    {ITEM_REVIVER_SEED, 0},
    {ITEM_RAWST_BERRY, 0},
    {ITEM_POKE, 500},
    {ITEM_PECHA_SCARF, 0},
    {ITEM_RAWST_BERRY, 0},
    {ITEM_POKE, 10000},
};

static bool8 TryAddItemWithText(const struct ItemWithQuantity *itemToAdd, const u8 *maxMoneyStr, const u8 *noItemSpaceStr, const u8 *itemGivenStr)
{
    u8 buffer[80];

    if (itemToAdd->id == ITEM_POKE) {
        s32 newMoneyAmount;
        sprintfStatic(buffer,_("{COLOR CYAN_G}%d{RESET} %s"),itemToAdd->quantity,gItemParametersData[ITEM_POKE].name);
        newMoneyAmount = gTeamInventoryRef->teamMoney + itemToAdd->quantity;
        if (newMoneyAmount > MAX_TEAM_MONEY) {
            if (maxMoneyStr != NULL) {
                ScriptPrintText(SCRIPT_TEXT_TYPE_INSTANT, -1, maxMoneyStr);
            }
            return FALSE;
        }

        gTeamInventoryRef->teamMoney = newMoneyAmount;
    }
    else {
        Item item = {0};
        item.quantity = itemToAdd->quantity;
        item.id = itemToAdd->id;

        sub_8090E14(buffer,&item,0);
        if (GetNumberOfFilledInventorySlots() >= INVENTORY_SIZE) {
            if (noItemSpaceStr != NULL) {
                ScriptPrintText(SCRIPT_TEXT_TYPE_INSTANT, -1, noItemSpaceStr);
            }
            return FALSE;
        }

        AddItemIdToInventory(item.id, FALSE);
        FillInventoryGaps();
    }

    if (itemGivenStr != NULL) {
        strcpy(gFormatBuffer_Items[0], buffer);
        ScriptPrintText(SCRIPT_TEXT_TYPE_INSTANT, -1, itemGivenStr);
        PlaySoundWithVolume(0xcb, 0x100);
    }

    return TRUE;
}

s32 CheckScriptItemSpace(s32 tableId)
{
    const struct ItemWithQuantity *item = &sScriptItemsTable[tableId];
    if (item->id == ITEM_POKE) {
        if (gTeamInventoryRef->teamMoney + item->quantity > MAX_TEAM_MONEY)
            return 2;
    }
    else {
        if (GetNumberOfFilledInventorySlots() >= INVENTORY_SIZE)
            return 2;
    }
    return 1;
}

s32 TryGiveScriptItem(u32 tableId, s32 a1)
{
    s32 strId;
    const struct ItemWithQuantity *item = &sScriptItemsTable[tableId];
    sScriptItemsData->tableId = -1;
    sScriptItemsData->unk8 = 0;

    if (a1 > 99) {
        strId = RECEIVED_STR_CASH;
    }
    else if (a1 > 1) {
        strId = RECEIVED_STR_ALSO_ITEM;
    }
    else {
        strId = RECEIVED_STR_ONE_REWARD;
    }

    if (TryAddItemWithText(item,
                    (@@STRING:819348c3669445af73c499a1f97dc9013ba91d6945753ea43b58dde098885fbc@@),
                    (@@STRING:e5a202bc549c846310327834b208b7ba44d4a174f9cabae47f5c49adf7501bec@@),
                    sItemReceivedStrings[strId]))
    {
        sScriptItemsData->tableId = tableId;
        sScriptItemsData->unk8 = a1;
        return 1;
    }
    else {
        return 2;
    }
}

u32 ScriptItemTextboxFunc(void)
{
    if (IsTextboxOpen_809A750()) {
        return 0;
    }
    return 3;
}
