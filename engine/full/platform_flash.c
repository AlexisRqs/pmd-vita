#define _POSIX_C_SOURCE 200809L
#include "platform_flash.h"
#include "platform_backup.h"
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
static unsigned char current[PMD_FLASH_BYTES],candidate[PMD_FLASH_BYTES];
static char save_path[1024];
static const char *error="Flash not opened";
static int ready,recovered,from_guard;
static unsigned char verification[PMD_FLASH_BYTES];
static uint32_t word(const unsigned char*p){return (uint32_t)p[0]|(uint32_t)p[1]<<8|(uint32_t)p[2]<<16|(uint32_t)p[3]<<24;}
static int record(const unsigned char*p){uint32_t sum=0;for(unsigned i=4;i<0x57d4;i+=4)sum+=word(p+i);return sum==word(p)&&!memcmp(p+0x404,"POKE_DUNGEON__05",16)&&word(p+0x414)==0x05071412;}
static int valid_game(const unsigned char*p){return record(p)||record(p+0x6000);}
static int damaged_game(const unsigned char*p){return !valid_game(p)&&(!memcmp(p+0x404,"POKE_DUNGEON__05",16)||!memcmp(p+0x6404,"POKE_DUNGEON__05",16));}
/* 1 valid, 0 absent, -1 malformed/I/O failure. Never treat a damaged save as blank. */
static int read_image(const char *path,unsigned char *out){
 FILE *f=fopen(path,"rb");if(!f)return errno==ENOENT?0:-1;
 size_t n=fread(out,1,PMD_FLASH_BYTES,f);int extra=fgetc(f),failed=ferror(f);
 if(fclose(f))failed=1;
 return n==PMD_FLASH_BYTES&&extra==EOF&&!failed?1:-1;
}
void pmd_flash_close(void){ready=recovered=from_guard=0;save_path[0]=0;error="Flash not opened";}
int pmd_flash_open(const char *path){
 pmd_flash_close();
 if(!path||!*path||strlen(path)>sizeof(save_path)-16){error="Invalid save path";return 0;}
 strcpy(save_path,path);
 int primary=read_image(path,current);
 /* A valid game or a non-game flash (new game / other records) stays compatible.
  * Only recognizable damaged main records trigger structural recovery. */
 if(primary==1&&!damaged_game(current)){ready=1;error=NULL;return 1;}
 const char *suffixes[]={".pending.old",".bak",".bak.tmp",".tmp",".restore.tmp",".bak.restore.tmp"};
 int traces=primary!=0;
 for(unsigned i=0;i<sizeof(suffixes)/sizeof(*suffixes);i++){
  char p[1040];snprintf(p,sizeof(p),"%s%s",path,suffixes[i]);int n=read_image(p,verification);traces|=n!=0;
  if(n==1&&valid_game(verification)){memcpy(current,verification,sizeof(current));ready=recovered=1;from_guard=i==0;error=NULL;return 1;}
 }
 if(pmd_backup_recover(path,verification)){memcpy(current,verification,sizeof(current));ready=recovered=1;error=NULL;return 1;}
 /* Preserve non-game images from interrupted transactions too. */
 if(primary!=1){for(unsigned i=0;i<2;i++){char p[1040];snprintf(p,sizeof(p),"%s%s",path,suffixes[i]);if(read_image(p,verification)==1&&!damaged_game(verification)){memcpy(current,verification,sizeof(current));ready=recovered=1;from_guard=i==0;error=NULL;return 1;}}}
 PmdBackupInfo copies[3];pmd_backup_list(path,copies);for(int i=0;i<3;i++)traces|=copies[i].valid!=0;
 if(traces){error="Interrupted or damaged save: recovery required";return 0;}
 memset(current,0xff,sizeof(current));ready=1;error=NULL;return 1;
}

int pmd_flash_ready(void){return ready;}
int pmd_flash_recovered(void){return recovered;}
const char *pmd_flash_error(void){return error;}
int pmd_flash_range_valid(int32_t sector,int32_t size){
 return ready&&sector>=0&&sector<32&&size>=0&&(uint32_t)size<=PMD_FLASH_BYTES-(uint32_t)sector*PMD_FLASH_SECTOR;
}
static int durable_image(const char *temp,const unsigned char *image){
 FILE *f=fopen(temp,"wb");if(!f)return 0;
 int ok=fwrite(image,1,PMD_FLASH_BYTES,f)==PMD_FLASH_BYTES;
 if(ok&&fflush(f))ok=0;
 if(ok&&fsync(fileno(f)))ok=0;
 if(fclose(f))ok=0;
 return ok;
}
static int commit(void){
 char temp[1040],backup[1040],backup_temp[1040],guard[1040];
 snprintf(guard,sizeof(guard),"%s.pending.old",save_path);
 /* Keep a verified old image outside all rename destinations. If it was our
  * recovery source, never truncate it during retries. */
 if(!from_guard){if(!durable_image(guard,current)){error="Cannot protect current flash";return 0;}}
 if(read_image(guard,verification)!=1||memcmp(current,verification,sizeof(current))){error="Recovery guard verification failed";return 0;}
 from_guard=1;
 snprintf(temp,sizeof(temp),"%s.tmp",save_path);
 snprintf(backup,sizeof(backup),"%s.bak",save_path);
 snprintf(backup_temp,sizeof(backup_temp),"%s.bak.tmp",save_path);
 /* Vita's libc rename removes its target first. Maintain a durable old image
  * at a different name before the primary replacement can remove anything. */
 if(!durable_image(temp,candidate)){error="Cannot persist new flash image";return 0;}
 if(!durable_image(backup_temp,current)||rename(backup_temp,backup)){
  error="Cannot persist recovery flash image";return 0;
 }
 if(rename(temp,save_path)){error="Cannot replace flash image; recovery retained";return 0;}
 if(read_image(save_path,verification)!=1||memcmp(candidate,verification,sizeof(candidate))){error="Installed flash verification failed";return 0;}
 memcpy(current,candidate,sizeof(current));recovered=from_guard=0;remove(guard);error=NULL;return 1;
}
static uint16_t program(uint16_t sector,uint8_t *src){
 if(!src||!pmd_flash_range_valid(sector,PMD_FLASH_SECTOR)){error="Invalid flash sector";return 1;}
 memcpy(candidate,current,sizeof(candidate));memcpy(candidate+sector*PMD_FLASH_SECTOR,src,PMD_FLASH_SECTOR);
 return commit()?0:1;
}
static uint16_t erase_sector(uint16_t sector){
 if(!pmd_flash_range_valid(sector,PMD_FLASH_SECTOR)){error="Invalid flash sector";return 1;}
 memcpy(candidate,current,sizeof(candidate));memset(candidate+sector*PMD_FLASH_SECTOR,0xff,PMD_FLASH_SECTOR);
 return commit()?0:1;
}
static uint16_t erase_chip(void){
 if(!ready){error="Flash not opened";return 1;}
 memset(candidate,0xff,sizeof(candidate));return commit()?0:1;
}
uint16_t (*ProgramFlashSector)(uint16_t,uint8_t *)=program;
uint16_t (*EraseFlashChip)(void)=erase_chip;
uint16_t (*EraseFlashSector)(uint16_t)=erase_sector;
uint16_t IdentifyFlash(void){return ready?0:1;}
uint16_t SetFlashTimerIntr(uint8_t timer,void (**handler)(void)){
 /* Native writes are synchronous; the hardware timer handler stays untouched. */
 return timer<4&&handler?0:1;
}
void ReadFlash(uint16_t sector,uint32_t offset,uint8_t *dest,uint32_t size){
 if(!ready||!dest||sector>=32||offset>PMD_FLASH_BYTES-sector*PMD_FLASH_SECTOR||
    size>PMD_FLASH_BYTES-sector*PMD_FLASH_SECTOR-offset){error="Invalid flash read";return;}
 memcpy(dest,current+sector*PMD_FLASH_SECTOR+offset,size);
}
uint32_t VerifyFlashSectorNBytes(uint16_t sector,uint8_t *src,uint32_t size){
 if(!src||size>PMD_FLASH_SECTOR||!pmd_flash_range_valid(sector,(int32_t)size))return 1;
 for(uint32_t i=0;i<size;i++)if(current[sector*PMD_FLASH_SECTOR+i]!=src[i])return 0x0e000000u+sector*PMD_FLASH_SECTOR+i;
 return 0;
}
uint32_t VerifyFlashSector(uint16_t sector,uint8_t *src){return VerifyFlashSectorNBytes(sector,src,PMD_FLASH_SECTOR);}
uint32_t ProgramFlashSectorAndVerifyNBytes(uint16_t sector,uint8_t *src,uint32_t size){
 uint32_t status=1;
 if(size>PMD_FLASH_SECTOR)return status;
 for(unsigned n=0;n<3;n++){
  status=program(sector,src);if(!status)status=VerifyFlashSectorNBytes(sector,src,size);if(!status)break;
 }
 return status;
}
uint32_t ProgramFlashSectorAndVerify(uint16_t sector,uint8_t *src){return ProgramFlashSectorAndVerifyNBytes(sector,src,PMD_FLASH_SECTOR);}
