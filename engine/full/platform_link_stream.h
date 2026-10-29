#ifndef PMD_PLATFORM_LINK_STREAM_H
#define PMD_PLATFORM_LINK_STREAM_H
#include "platform_link_session.h"
#define PMD_LINK_IO_WOULD_BLOCK ((ptrdiff_t)0)
#define PMD_LINK_IO_ERROR ((ptrdiff_t)-1)
#define PMD_LINK_IO_CLOSED ((ptrdiff_t)-2)
#define PMD_LINK_STREAM_TX_CAPACITY PMD_LINK_WIRE_MAX_FRAME
typedef ptrdiff_t (*pmd_link_stream_read)(void *,uint8_t *,size_t);
typedef ptrdiff_t (*pmd_link_stream_write)(void *,const uint8_t *,size_t);
enum pmd_link_stream_state { PMD_LINK_STREAM_OPEN,PMD_LINK_STREAM_CLOSED,PMD_LINK_STREAM_ERROR };
typedef struct {
 pmd_link_session session;
 pmd_link_decoder decoder;
 uint8_t tx[PMD_LINK_STREAM_TX_CAPACITY];
 size_t tx_length;
 unsigned prefer_read;
 pmd_link_stream_read read;
 pmd_link_stream_write write;
 void *context;
 enum pmd_link_stream_state state;
} pmd_link_stream;
/* Connected transport is externally owned. Callbacks MUST be nonblocking and
 * return 1..requested bytes, WOULD_BLOCK, ERROR or CLOSED. No OS resource is
 * opened/closed here. init starts a fresh session; caller supplies fresh nonce.
 * Fields are implementation state. Use stream_ready/copy_pair, NOT session.ready,
 * for application progression: queued-unsent bytes must drain first. */
int pmd_link_stream_init(pmd_link_stream *,unsigned role,unsigned mode,const uint8_t schema[32],const uint8_t nonce[8],pmd_link_stream_read,pmd_link_stream_write,void *context);
/* 1 queued,0 FIFO full (session unchanged),-1 sticky error. Copies immediately.
 * Queued means neither delivered nor remotely committed; never retry transactions
 * automatically. Invalid submission is an error even when FIFO is full. */
int pmd_link_stream_submit(pmd_link_stream *,unsigned phase,const uint8_t *,size_t);
/* At most budget callback invocations; each read decodes at most272bytes.
 * Returns callback invocations performed. budget0 performs no work. */
size_t pmd_link_stream_tick(pmd_link_stream *,size_t budget);
/* EOF after all3 rounds AND all queued bytes sent retains ready pairs, sets CLOSED.
 * Earlier EOF/errors hide ready pairs and latch ERROR. Neither implies remote
 * commit. Explicit close clears everything except role/error, never closes the
 * external transport. Reinit is the only error recovery. */
int pmd_link_stream_ready(const pmd_link_stream *,unsigned phase);
size_t pmd_link_stream_copy_pair(const pmd_link_stream *,unsigned phase,uint8_t *,uint8_t *,size_t capacity);
void pmd_link_stream_close(pmd_link_stream *);
#endif
