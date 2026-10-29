#ifndef PMD_LOCALE_NAME_H
#define PMD_LOCALE_NAME_H
/* Compare only the ten bytes available in a saved nickname. Never write it. */
static inline const unsigned char *pmd_default_display(const unsigned char *stored,
 const unsigned char *english, const unsigned char *french) {
 unsigned i;
 for (i=0;i<10;i++) {
  if (stored[i]!=english[i]) return stored;
  if (!stored[i]) return french;
 }
 return french;
}
const unsigned char *pmd_display_name(int species, const unsigned char *stored);
#endif
