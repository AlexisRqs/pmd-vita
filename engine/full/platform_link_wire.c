#include "platform_link_wire.h"
#include <string.h>
static int phase_valid(unsigned phase) { return phase>=PMD_LINK_HELLO && phase<=PMD_LINK_STATUS; }
static uint32_t get32(const uint8_t *p) { return (uint32_t)p[0]<<24 | (uint32_t)p[1]<<16 | (uint32_t)p[2]<<8 | p[3]; }
static void put32(uint8_t *p,uint32_t v) { p[0]=(uint8_t)(v>>24);p[1]=(uint8_t)(v>>16);p[2]=(uint8_t)(v>>8);p[3]=(uint8_t)v; }
static uint32_t update_crc(uint32_t crc,const uint8_t *p,size_t n) {
    for(size_t i=0;i<n;++i) {
        crc^=p[i];
        for(unsigned bit=0;bit<8;++bit) crc=(crc>>1)^((crc&1u)?UINT32_C(0xedb88320):0);
    }
    return crc;
}
static uint32_t frame_crc(const uint8_t *p,size_t length) {
    return update_crc(update_crc(UINT32_MAX,p,12),p+16,length)^UINT32_MAX;
}
size_t pmd_link_encode(const pmd_link_message *m,uint8_t *dst,size_t capacity) {
    if(!m || !dst || m->length>PMD_LINK_WIRE_MAX_PAYLOAD || !phase_valid(m->phase)) return 0;
    size_t n=PMD_LINK_WIRE_HEADER_SIZE+m->length;
    if(capacity<n) return 0;
    memcpy(dst,"PMDL",4);dst[4]=PMD_LINK_WIRE_VERSION;dst[5]=m->phase;
    dst[6]=(uint8_t)(m->length>>8);dst[7]=(uint8_t)m->length;put32(dst+8,m->sequence);
    memcpy(dst+16,m->payload,m->length);put32(dst+12,frame_crc(dst,m->length));return n;
}
void pmd_link_decoder_reset(pmd_link_decoder *d) { if(d) memset(d,0,sizeof(*d)); }
enum pmd_link_decode_result pmd_link_decoder_feed(pmd_link_decoder *d,const uint8_t *input,size_t length,size_t *consumed,pmd_link_message *output) {
    if(consumed) *consumed=0;
    if(!d) return PMD_LINK_ERROR;
    if(d->failed) return PMD_LINK_ERROR;
    if(!consumed || !output || (!input && length)) { d->failed=1;return PMD_LINK_ERROR; }
    /* Incomplete header: collect only the header before trusting its length. */
    if(d->used<16) {
        size_t n=16-d->used;if(n>length)n=length;
        if(n) memcpy(d->bytes+d->used,input,n);
        d->used+=n;*consumed+=n;
        if(d->used<16) return PMD_LINK_NEED_MORE;
    }
    const uint8_t *h=d->bytes;
    size_t payload_length=((size_t)h[6]<<8)|h[7];
    if(memcmp(h,"PMDL",4) || h[4]!=PMD_LINK_WIRE_VERSION || !phase_valid(h[5]) || payload_length>PMD_LINK_WIRE_MAX_PAYLOAD) {
        d->failed=1;return PMD_LINK_ERROR;
    }
    size_t remaining=16+payload_length-d->used;
    size_t available=length-*consumed;
    size_t n=remaining<available?remaining:available;
    if(n) memcpy(d->bytes+d->used,input+*consumed,n);
    d->used+=n;*consumed+=n;
    if(d->used<16+payload_length) return PMD_LINK_NEED_MORE;
    if(get32(h+12)!=frame_crc(h,payload_length)) { d->failed=1;return PMD_LINK_ERROR; }
    /* Initialize the full result so unused payload bytes never leak old data. */
    pmd_link_message message={0};message.phase=h[5];message.sequence=get32(h+8);
    message.length=(uint16_t)payload_length;memcpy(message.payload,h+16,payload_length);
    *output=message;d->used=0;return PMD_LINK_FRAME;
}
