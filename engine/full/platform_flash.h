#ifndef PMD_PLATFORM_FLASH_H
#define PMD_PLATFORM_FLASH_H
#include <stdint.h>
#define PMD_FLASH_BYTES 131072u
#define PMD_FLASH_SECTOR 4096u
/* Raw 128KiB GBA flash, with .bak recovery; never the prototype creation.dat. */
int pmd_flash_open(const char *path);
void pmd_flash_close(void);
int pmd_flash_ready(void);
int pmd_flash_recovered(void);
int pmd_flash_range_valid(int32_t sector,int32_t size);
const char *pmd_flash_error(void);
uint16_t IdentifyFlash(void);
uint16_t SetFlashTimerIntr(uint8_t timer,void (**handler)(void));
void ReadFlash(uint16_t sector,uint32_t offset,uint8_t *dest,uint32_t size);
uint32_t VerifyFlashSector(uint16_t sector,uint8_t *src);
uint32_t VerifyFlashSectorNBytes(uint16_t sector,uint8_t *src,uint32_t size);
uint32_t ProgramFlashSectorAndVerify(uint16_t sector,uint8_t *src);
uint32_t ProgramFlashSectorAndVerifyNBytes(uint16_t sector,uint8_t *src,uint32_t size);
extern uint16_t (*ProgramFlashSector)(uint16_t,uint8_t *);
extern uint16_t (*EraseFlashChip)(void);
extern uint16_t (*EraseFlashSector)(uint16_t);
#endif
