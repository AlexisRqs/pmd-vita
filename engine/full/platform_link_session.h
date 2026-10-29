#ifndef PMD_PLATFORM_LINK_SESSION_H
#define PMD_PLATFORM_LINK_SESSION_H
#include "platform_link_wire.h"
#define PMD_LINK_SCHEMA_SIZE 32u
#define PMD_LINK_NONCE_SIZE 8u
#define PMD_LINK_SESSION_MAX_DATA 180u
#define PMD_LINK_SESSION_HELLO_LENGTH 62u
/* HELLO: role[1],mode[1],schema[32],sender nonce[8],original HELLO[20].
 * DATA/STATUS: sender nonce[8],receiver nonce[8],original payload.
 * Wire phases HELLO/DATA/STATUS use sequences0/1/2, respectively.
 * Modes0/1=8bytes,2/3=48,4/5=112,6/7=48,9/10=180.
 * Nonces must be nonzero/distinct. Caller must supply a fresh unpredictable nonce
 * on every init; this module cannot prove freshness. CRC is not authentication.
 * Schema must be nonzero; caller must derive it from the actual compatible build
 * and payload ABI. This module compares IDs, it does not generate or verify them.
 * Original HELLO bytes are opaque: CHUNSOFT/game validation stays with callers.
 * submit only PRODUCES a message. Caller MUST enqueue every successful message
 * exactly once in order. Ready means local submission plus peer receipt, never
 * peer acknowledgment or distributed atomic commit. No retry/commit API exists.
 * Call init before any other operation; fields below are private implementation
 * state. Arguments must not overlap session storage or each other's output. */
typedef struct {
    uint8_t role,mode,stage,active,failed;
    uint8_t schema[32],nonce[2][8];
    uint8_t present[3][2];
    uint8_t payload[3][2][PMD_LINK_SESSION_MAX_DATA];
} pmd_link_session;
int pmd_link_session_init(pmd_link_session *s,unsigned role,unsigned mode,
    const uint8_t schema[32],const uint8_t nonce[8]);
int pmd_link_session_submit(pmd_link_session *s,unsigned phase,const uint8_t *payload,
    size_t length,pmd_link_message *message);
/* Only feed messages validated by the wire codec. Protocol errors latch. */
int pmd_link_session_receive(pmd_link_session *s,const pmd_link_message *message);
int pmd_link_session_ready(const pmd_link_session *s,unsigned phase);
/* Returns copied native payload size, or0 without modifying outputs if not ready,
 * invalid arguments, or insufficient capacity. Does not latch query errors. */
size_t pmd_link_session_copy_pair(const pmd_link_session *s,unsigned phase,
    uint8_t *participant0,uint8_t *participant1,size_t capacity);
/* Clears metadata/payloads, preserves role and any latched error. init required
 * for reuse. Querying s->role after close is supported; other fields are private. */
void pmd_link_session_close(pmd_link_session *s);
#endif
