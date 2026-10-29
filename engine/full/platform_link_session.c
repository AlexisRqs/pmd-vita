#include "platform_link_session.h"
#include <string.h>
static size_t data_size(unsigned mode) {
    switch(mode) {case 0:case 1:return 8;case 2:case 3:case 6:case 7:return 48;
        case 4:case 5:return 112;case 9:case 10:return 180;default:return 0;}
}
static unsigned partner_mode(unsigned mode) { return mode==9?10:mode==10?9:mode^1u; }
static int nonzero(const uint8_t *p,size_t length) { unsigned v=0;for(size_t i=0;i<length;++i)v|=p[i];return v!=0; }
static size_t stage_size(const pmd_link_session *s,unsigned stage) { return stage==0?20:stage==1?data_size(s->mode):4; }
static int fail(pmd_link_session *s) { if(s)s->failed=1;return 0; }
static int usable(pmd_link_session *s) { return s && s->active && !s->failed; }
static void advance(pmd_link_session *s) { if(s->stage<3 && s->present[s->stage][0] && s->present[s->stage][1])++s->stage; }
int pmd_link_session_init(pmd_link_session *s,unsigned role,unsigned mode,const uint8_t schema[32],const uint8_t nonce[8]) {
    if(!s)return 0;
    memset(s,0,sizeof(*s));s->role=(uint8_t)role;
    if(role>1 || !data_size(mode) || !schema || !nonce || !nonzero(nonce,8) || !nonzero(schema,32))return fail(s);
    s->mode=(uint8_t)mode;memcpy(s->schema,schema,32);memcpy(s->nonce[role],nonce,8);s->active=1;return 1;
}
int pmd_link_session_submit(pmd_link_session *s,unsigned phase,const uint8_t *payload,size_t length,pmd_link_message *message) {
    if(!usable(s))return fail(s);
    if(phase<1 || phase>3 || phase-1!=s->stage || s->present[s->stage][s->role] || !payload || !message || length!=stage_size(s,s->stage))return fail(s);
    pmd_link_message m={0};m.phase=(uint8_t)phase;m.sequence=s->stage;
    if(s->stage==0) {
        m.length=62;m.payload[0]=s->role;m.payload[1]=s->mode;memcpy(m.payload+2,s->schema,32);
        memcpy(m.payload+34,s->nonce[s->role],8);memcpy(m.payload+42,payload,20);
    } else {
        m.length=(uint16_t)(16+length);memcpy(m.payload,s->nonce[s->role],8);
        memcpy(m.payload+8,s->nonce[s->role^1],8);memcpy(m.payload+16,payload,length);
    }
    memcpy(s->payload[s->stage][s->role],payload,length);s->present[s->stage][s->role]=1;
    *message=m;advance(s);return 1;
}
int pmd_link_session_receive(pmd_link_session *s,const pmd_link_message *m) {
    if(!usable(s))return fail(s);
    if(!m || s->stage>=3 || m->phase!=s->stage+1 || m->sequence!=s->stage || s->present[s->stage][s->role^1])return fail(s);
    unsigned peer=s->role^1;const uint8_t *payload;
    if(s->stage==0) {
        if(m->length!=62 || m->payload[0]!=peer || m->payload[1]!=partner_mode(s->mode) || memcmp(m->payload+2,s->schema,32) || !nonzero(m->payload+34,8) || !memcmp(m->payload+34,s->nonce[s->role],8))return fail(s);
        memcpy(s->nonce[peer],m->payload+34,8);payload=m->payload+42;
    } else {
        if(m->length!=16+stage_size(s,s->stage) || memcmp(m->payload,s->nonce[peer],8) || memcmp(m->payload+8,s->nonce[s->role],8))return fail(s);
        payload=m->payload+16;
    }
    memcpy(s->payload[s->stage][peer],payload,stage_size(s,s->stage));s->present[s->stage][peer]=1;advance(s);return 1;
}
int pmd_link_session_ready(const pmd_link_session *s,unsigned phase) {
    return s && s->active && !s->failed && phase>=1 && phase<=3 && s->present[phase-1][0] && s->present[phase-1][1];
}
size_t pmd_link_session_copy_pair(const pmd_link_session *s,unsigned phase,uint8_t *a,uint8_t *b,size_t capacity) {
    if(!a || !b || !pmd_link_session_ready(s,phase))return 0;
    size_t n=stage_size(s,phase-1);if(capacity<n)return 0;
    memcpy(a,s->payload[phase-1][0],n);memcpy(b,s->payload[phase-1][1],n);return n;
}
void pmd_link_session_close(pmd_link_session *s) {
    if(!s)return;
    uint8_t role=s->role,failed=s->failed;
    memset(s,0,sizeof(*s));s->role=role;s->failed=failed;
}
