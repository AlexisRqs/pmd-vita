#ifndef PMD_PLATFORM_BACKUP_H
#define PMD_PLATFORM_BACKUP_H
#include <stdint.h>
typedef struct { int slot,valid; uint64_t sequence,created; } PmdBackupInfo;
/* Files are siblings of save_path. Returns 1 copied, 0 unchanged/absent, -1 failure. */
int pmd_backup_auto(const char *save_path);
void pmd_backup_list(const char *save_path,PmdBackupInfo entries[3]);
/* Call only while paused. Exit afterwards even on failure; never resume old RAM. */
int pmd_backup_restore(const char *save_path,int slot);
const char *pmd_backup_error(void);
/* Read newest validated automatic copy, without changing any file. */
int pmd_backup_recover(const char *path,unsigned char *out);
#endif
