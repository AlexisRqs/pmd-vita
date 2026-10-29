#define _POSIX_C_SOURCE 200809L
#include "platform_backup.h"
#include "port-menu/port_model.h"
#include "platform_flash.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <time.h>
/* Separate from the live flash buffers, used only on the main thread. */
static unsigned char selected[PMD_FLASH_BYTES],scratch[PMD_FLASH_BYTES];
static const char *failure="";
const char *pmd_backup_error(void){return failure;}
static int fail(const char *s){failure=s;return -1;}
static int pathcat(char out[1024],const char *path,const char *suffix){
 if(!path||!*path||strlen(path)+strlen(suffix)>=1024)return 0;
 snprintf(out,1024,"%s%s",path,suffix);return 1;
}
static int slotpath(char out[1024],const char *path,int slot){
 char suffix[32];if(slot<0||slot>=3)return 0;
 snprintf(suffix,sizeof(suffix),".auto%d.pmb",slot+1);return pathcat(out,path,suffix);
}
static uint32_t u32(const unsigned char *p){return (uint32_t)p[0]|(uint32_t)p[1]<<8|(uint32_t)p[2]<<16|(uint32_t)p[3]<<24;}
static uint64_t u64(const unsigned char *p){return u32(p)|((uint64_t)u32(p+4)<<32);}
static void put32(unsigned char*p,uint32_t n){for(int i=0;i<4;i++)p[i]=(unsigned char)(n>>(i*8));}
static void put64(unsigned char*p,uint64_t n){put32(p,(uint32_t)n);put32(p+4,(uint32_t)(n>>32));}
static uint32_t crc(uint32_t n,const unsigned char*p,size_t size){
 while(size--){n^=*p++;for(int i=0;i<8;i++)n=(n>>1)^(0xedb88320u&-(int32_t)(n&1));}return n;
}
/* Match save.c's main record checksum, magic, size and duplicate at sector6.
 * This is a structural check, not validation of every dungeon/script field. */
static int game_record(const unsigned char*p){
 uint32_t sum=0;for(unsigned i=4;i<0x57d4;i+=4)sum+=u32(p+i);
 return sum==u32(p)&&!memcmp(p+0x404,"POKE_DUNGEON__05",16)&&u32(p+0x414)==0x05071412;
}
static int game_image(const unsigned char*p){return game_record(p)||game_record(p+0x6000);}
static int raw_read(const char *path,unsigned char *data){
 FILE*f=fopen(path,"rb");if(!f)return errno==ENOENT?0:-1;
 size_t n=fread(data,1,PMD_FLASH_BYTES,f);int extra=fgetc(f),bad=ferror(f);if(fclose(f))bad=1;
 return !bad&&n==PMD_FLASH_BYTES&&extra==EOF?1:-1;
}
static int read_copy(const char*path,unsigned char*data,PmdBackupInfo *info){
 unsigned char h[32];FILE*f=fopen(path,"rb");if(!f)return errno==ENOENT?0:-1;
 int ok=fread(h,1,32,f)==32&&fread(data,1,PMD_FLASH_BYTES,f)==PMD_FLASH_BYTES;
 int extra=fgetc(f),bad=ferror(f);if(fclose(f))bad=1;
 if(!ok||bad||extra!=EOF||memcmp(h,"PMDBKP01",8)||u32(h+24)!=PMD_FLASH_BYTES||!u64(h+8))return -1;
 if(~crc(crc(~0u,h,28),data,PMD_FLASH_BYTES)!=u32(h+28)||!game_image(data))return -1;
 if(info){info->sequence=u64(h+8);info->created=u64(h+16);}return 1;
}
void pmd_backup_list(const char*path,PmdBackupInfo e[3]){
 for(int i=0;i<3;i++){char p[1024];e[i]=(PmdBackupInfo){.slot=i};e[i].valid=slotpath(p,path,i)?read_copy(p,scratch,&e[i]):-1;}
 PmdBackupInfo raw[3];memcpy(raw,e,sizeof(raw));uint64_t seq[3];bool valid[3];unsigned order[3];
 for(int i=0;i<3;i++){seq[i]=raw[i].sequence;valid[i]=raw[i].valid==1;}
 PM_SortNewest(order,seq,valid,3);for(int i=0;i<3;i++)e[i]=raw[order[i]];
}
static int flush_close(FILE*f,int ok){if(ok&&fflush(f))ok=0;if(ok&&fsync(fileno(f)))ok=0;if(fclose(f))ok=0;return ok;}
static int write_raw(const char*path,const unsigned char*data){
 FILE*f=fopen(path,"wb");if(!f)return 0;
 return flush_close(f,fwrite(data,1,PMD_FLASH_BYTES,f)==PMD_FLASH_BYTES);
}
int pmd_backup_auto(const char*path){
 failure="";char primary[1024],backup[1024],dest[1024],temp[1024];
 if(!pathcat(primary,path,"")||!pathcat(backup,path,".bak"))return fail("Chemin invalide");
 int a=raw_read(primary,selected),b=0;
 if(a!=1||!game_image(selected)){b=raw_read(backup,selected);if(b!=1||!game_image(selected))return a==0&&b==0?0:fail("Sauvegarde non verifiable");}
 PmdBackupInfo e[3];pmd_backup_list(path,e);
 if(e[0].valid==1){slotpath(dest,path,e[0].slot);if(read_copy(dest,scratch,NULL)!=1)return fail("Lecture copie impossible");if(!memcmp(selected,scratch,PMD_FLASH_BYTES))return 0;}
 uint64_t seq=e[0].valid==1?e[0].sequence:0;if(seq==UINT64_MAX)return fail("Compteur copie invalide");
 if(!slotpath(dest,path,e[2].slot)||!pathcat(temp,dest,".tmp"))return fail("Chemin invalide");
 unsigned char h[32]={0};memcpy(h,"PMDBKP01",8);put64(h+8,seq+1);time_t now=time(NULL);put64(h+16,now>0?(uint64_t)now:0);put32(h+24,PMD_FLASH_BYTES);put32(h+28,~crc(crc(~0u,h,28),selected,PMD_FLASH_BYTES));
 FILE*f=fopen(temp,"wb");if(!f)return fail("Copie: ecriture impossible");
 int ok=fwrite(h,1,32,f)==32&&fwrite(selected,1,PMD_FLASH_BYTES,f)==PMD_FLASH_BYTES;
 if(!flush_close(f,ok)||read_copy(temp,scratch,NULL)!=1||memcmp(selected,scratch,PMD_FLASH_BYTES)){remove(temp);return fail("Copie non verifiee");}
 if(rename(temp,dest))return fail("Copie non installee");
 return read_copy(dest,scratch,NULL)==1&&!memcmp(selected,scratch,PMD_FLASH_BYTES)?1:fail("Copie non verifiee");
}
/* Preserve even a truncated/corrupt current file before replacing anything.
 * An absent file is not an error. Verification compares every byte. */
static int preserve(const char*path){
 char dest[1024],temp[1024];if(!pathcat(dest,path,".pre-restore")||!pathcat(temp,dest,".tmp"))return 0;
 FILE*in=fopen(path,"rb");if(!in)return errno==ENOENT;
 FILE*out=fopen(temp,"wb");if(!out){fclose(in);return 0;}
 unsigned char a[4096],b[4096];size_t n;int ok=1;
 while((n=fread(a,1,sizeof(a),in))){if(fwrite(a,1,n,out)!=n){ok=0;break;}}
 if(ferror(in))ok=0;if(fclose(in))ok=0;if(!flush_close(out,ok))return 0;
 in=fopen(path,"rb");out=fopen(temp,"rb");if(!in||!out){if(in)fclose(in);if(out)fclose(out);return 0;}
 do{n=fread(a,1,sizeof(a),in);size_t m=fread(b,1,sizeof(b),out);if(n!=m||memcmp(a,b,n)){ok=0;break;}}while(n);
 if(ferror(in)||ferror(out))ok=0;if(fclose(in))ok=0;if(fclose(out))ok=0;
 return ok&&rename(temp,dest)==0;
}
int pmd_backup_restore(const char*path,int slot){
 failure="";char copy[1024],backup[1024],temp[1024],btemp[1024];
 if(!slotpath(copy,path,slot)||!pathcat(backup,path,".bak")||!pathcat(temp,path,".restore.tmp")||!pathcat(btemp,backup,".restore.tmp"))return fail("Chemin invalide");
 if(read_copy(copy,selected,NULL)!=1)return fail("Copie invalide: annule");
 if(!preserve(path)||!preserve(backup))return fail("Protection impossible");
 if(!write_raw(temp,selected)||raw_read(temp,scratch)!=1||memcmp(selected,scratch,PMD_FLASH_BYTES))return fail("Preparation impossible");
 if(!write_raw(btemp,selected)||raw_read(btemp,scratch)!=1||memcmp(selected,scratch,PMD_FLASH_BYTES))return fail("Preparation secours echouee");
 /* Recovery is installed first: loss of primary during rename has a valid fallback. */
 if(rename(btemp,backup)||raw_read(backup,scratch)!=1||memcmp(selected,scratch,PMD_FLASH_BYTES))return fail("Secours non remplace");
 if(rename(temp,path)||raw_read(path,scratch)!=1||memcmp(selected,scratch,PMD_FLASH_BYTES))return fail("Restauration incomplete");
 return 1;
}

int pmd_backup_recover(const char *path,unsigned char *out){
 PmdBackupInfo entries[3];pmd_backup_list(path,entries);
 for(int i=0;i<3;i++)if(entries[i].valid==1){char p[1024];if(slotpath(p,path,entries[i].slot)&&read_copy(p,out,NULL)==1)return 1;}
 return 0;
}
