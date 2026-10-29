#include "platform_link_stream.h"
#include <string.h>
static void fail(pmd_link_stream *s) { s->state=PMD_LINK_STREAM_ERROR;s->session.failed=1; }
int pmd_link_stream_init(pmd_link_stream *s,unsigned role,unsigned mode,const uint8_t schema[32],const uint8_t nonce[8],pmd_link_stream_read read,pmd_link_stream_write write,void *context) {
 if(!s)return 0;
 memset(s,0,sizeof(*s));s->read=read;s->write=write;s->context=context;
 if(!read || !write || !pmd_link_session_init(&s->session,role,mode,schema,nonce)){fail(s);return 0;}
 pmd_link_decoder_reset(&s->decoder);return 1;
}
int pmd_link_stream_submit(pmd_link_stream *s,unsigned phase,const uint8_t *payload,size_t length) {
 if(!s)return -1;
 if(s->state!=PMD_LINK_STREAM_OPEN){fail(s);return -1;}
 pmd_link_session next=s->session;pmd_link_message message;uint8_t bytes[PMD_LINK_WIRE_MAX_FRAME];
 if(!pmd_link_session_submit(&next,phase,payload,length,&message)){fail(s);return -1;}
 size_t n=pmd_link_encode(&message,bytes,sizeof(bytes));
 if(!n){fail(s);return -1;}
 if(n>sizeof(s->tx)-s->tx_length)return 0;
 memcpy(s->tx+s->tx_length,bytes,n);s->tx_length+=n;s->session=next;return 1;
}
static int result_valid(pmd_link_stream *s,ptrdiff_t n,size_t maximum) {
 if(n==PMD_LINK_IO_ERROR || n<PMD_LINK_IO_CLOSED || (n>0&&(size_t)n>maximum)){fail(s);return 0;}
 return 1;
}
size_t pmd_link_stream_tick(pmd_link_stream *s,size_t budget) {
 if(!s || s->state!=PMD_LINK_STREAM_OPEN)return 0;
 size_t calls=0;
 while(calls<budget && s->state==PMD_LINK_STREAM_OPEN) {
  if(s->tx_length && !s->prefer_read) {
   s->prefer_read=1;
   ptrdiff_t n=s->write(s->context,s->tx,s->tx_length);++calls;
   if(!result_valid(s,n,s->tx_length))break;
   if(n==PMD_LINK_IO_CLOSED){fail(s);break;}
   if(n>0){s->tx_length-=(size_t)n;memmove(s->tx,s->tx+n,s->tx_length);}
   if(n==PMD_LINK_IO_WOULD_BLOCK)break;
   continue;
  }
  s->prefer_read=0;
  uint8_t input[PMD_LINK_WIRE_MAX_FRAME];ptrdiff_t n=s->read(s->context,input,sizeof(input));++calls;
  if(!result_valid(s,n,sizeof(input)))break;
  if(n==PMD_LINK_IO_CLOSED) {
   if(s->session.stage==3 && !s->tx_length && !s->decoder.used)s->state=PMD_LINK_STREAM_CLOSED;
   else fail(s);
   break;
  }
  if(n>0) {
   size_t at=0;
   while(at<(size_t)n) {
    size_t consumed;pmd_link_message message;
    int decoded=pmd_link_decoder_feed(&s->decoder,input+at,(size_t)n-at,&consumed,&message);at+=consumed;
    if(decoded==PMD_LINK_ERROR || (decoded==PMD_LINK_FRAME && !pmd_link_session_receive(&s->session,&message))){fail(s);break;}
    if(!consumed){fail(s);break;}
   }
  }
  if(n==PMD_LINK_IO_WOULD_BLOCK)break;
 }
 return calls;
}
void pmd_link_stream_close(pmd_link_stream *s) {
 if(!s)return;
 unsigned error=s->state==PMD_LINK_STREAM_ERROR;
 pmd_link_session_close(&s->session);pmd_link_decoder_reset(&s->decoder);memset(s->tx,0,sizeof(s->tx));s->tx_length=0;
 s->read=NULL;s->write=NULL;s->context=NULL;s->state=error?PMD_LINK_STREAM_ERROR:PMD_LINK_STREAM_CLOSED;
}

int pmd_link_stream_ready(const pmd_link_stream *s,unsigned phase) {
 return s && s->state!=PMD_LINK_STREAM_ERROR && !s->tx_length && pmd_link_session_ready(&s->session,phase);
}
size_t pmd_link_stream_copy_pair(const pmd_link_stream *s,unsigned phase,uint8_t *a,uint8_t *b,size_t capacity) {
 return pmd_link_stream_ready(s,phase)?pmd_link_session_copy_pair(&s->session,phase,a,b,capacity):0;
}
