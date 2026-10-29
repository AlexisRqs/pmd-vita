#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <unistd.h>
#include <sys/stat.h>
static const char *deny_write,*deny_rename;
static int remove_target,deny_sync;
static FILE *test_fopen(const char*p,const char*m){if(deny_write&&strstr(p,deny_write)&&strchr(m,'w')){errno=ENOSPC;return NULL;}return fopen(p,m);}
static int test_rename(const char*a,const char*b){if(deny_rename&&!strcmp(b,deny_rename)){if(remove_target)remove(b);errno=EIO;return -1;}return rename(a,b);}
static int test_sync(int fd){if(deny_sync){errno=EIO;return -1;}return fsync(fd);}
#define fopen test_fopen
#define rename test_rename
#define fsync test_sync
#include "platform_backup.c"
#undef fopen
#undef rename
#undef fsync
static unsigned char image[PMD_FLASH_BYTES],readback[PMD_FLASH_BYTES];
static void make_image(unsigned tag){
 memset(image,0,sizeof(image));image[8]=tag;memcpy(image+0x404,"POKE_DUNGEON__05",16);put32(image+0x414,0x05071412);
 uint32_t sum=0;for(unsigned i=4;i<0x57d4;i+=4)sum+=u32(image+i);put32(image,sum);memcpy(image+0x6000,image,0x57d4);assert(game_image(image));
}
static void save(const char*p,unsigned tag){make_image(tag);assert(write_raw(p,image));}
static void check(const char*p,unsigned tag){assert(raw_read(p,readback)==1&&readback[8]==tag&&game_image(readback));}
int main(int argc,char**argv){
 assert(argc==2);char path[1024],bak[1024],copy[1024],guard[1024];snprintf(path,sizeof(path),"%s/game.sav",argv[1]);assert(pathcat(bak,path,".bak"));
 assert(pmd_backup_auto(path)==0);PmdBackupInfo e[3];
 for(unsigned tag=1;tag<=4;tag++){save(path,tag);assert(pmd_backup_auto(path)==1);assert(pmd_backup_auto(path)==0);}
 pmd_backup_list(path,e);for(int i=0;i<3;i++){assert(e[i].valid==1&&e[i].sequence==(unsigned)(4-i));}
 save(bak,3);assert(pmd_backup_restore(path,e[2].slot)==1);check(path,2);check(bak,2);pathcat(guard,path,".pre-restore");check(guard,4);pathcat(guard,bak,".pre-restore");check(guard,3);
 /* Invalid checksum and malformed metadata cannot be restored. */
 slotpath(copy,path,e[0].slot);FILE*f=fopen(copy,"r+b");assert(f);assert(!fseek(f,50,SEEK_SET));int ch=fgetc(f);assert(!fseek(f,50,SEEK_SET));fputc(ch^1,f);fclose(f);
 assert(pmd_backup_restore(path,e[0].slot)==-1);check(path,2);check(bak,2);
 /* Failed protection must leave both originals intact. */
 deny_write=".pre-restore.tmp";assert(pmd_backup_restore(path,e[1].slot)==-1);deny_write=NULL;check(path,2);check(bak,2);
 deny_sync=1;assert(pmd_backup_restore(path,e[1].slot)==-1);deny_sync=0;check(path,2);check(bak,2);
 /* Preserve corrupt/truncated original bytes too. */
 f=fopen(path,"wb");assert(f);assert(fwrite("damaged",1,7,f)==7);fclose(f);
 assert(pmd_backup_restore(path,e[1].slot)==1);check(path,3);check(bak,3);pathcat(guard,path,".pre-restore");f=fopen(guard,"rb");assert(f);char bytes[8]={0};assert(fread(bytes,1,8,f)==7&&!memcmp(bytes,"damaged",7));fclose(f);
 /* Vita remove-before-rename failure: valid recovery must already be installed. */
 deny_rename=path;remove_target=1;assert(pmd_backup_restore(path,e[2].slot)==-1);deny_rename=NULL;remove_target=0;check(bak,2);
 assert(pmd_flash_open(path)&&pmd_flash_recovered());pmd_flash_close();
 /* Startup recovers from .bak and does not rotate identical contents. */
 assert(pmd_backup_auto(path)==1);assert(pmd_backup_auto(path)==0);
 save(path,7);deny_write=".pmb.tmp";assert(pmd_backup_auto(path)==-1);deny_write=NULL;check(path,7);pmd_backup_list(path,e);assert(e[0].sequence==4); /* invalid seq4 was replaced using max valid3 */
 /* No valid main record: do not preserve it as a supposedly usable new copy. */
 memset(image,0,PMD_FLASH_BYTES);assert(write_raw(path,image));remove(bak);assert(pmd_backup_auto(path)==-1);
 puts("PASS: fictitious files only; three-copy rotation, dedup, record/CRC checks, restore and rollback protection, truncation, write/fsync/rename failures, existing .bak recovery");
}
