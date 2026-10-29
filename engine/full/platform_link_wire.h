#ifndef PMD_PLATFORM_LINK_WIRE_H
#define PMD_PLATFORM_LINK_WIRE_H
#include <stddef.h>
#include <stdint.h>
/* Version 1: bytes 0..3 "PMDL", byte 4 version, byte 5 phase,
 * bytes 6..7 payload length, 8..11 sequence, 12..15 CRC32.
 * Multi-byte fields are big endian. CRC32/ISO-HDLC (reflected polynomial
 * 0xedb88320, initial/final xor 0xffffffff) covers bytes 0..11 then payload.
 * HELLO/DATA/STATUS currently carry opaque payloads of 0..256 bytes.
 * This codec defines no handshake, transport, retransmission or game semantics.
 * Session freshness, sequence ordering/anti-replay, expected phase, mode and
 * schema compatibility are higher-layer responsibilities. CRC detects accidental
 * corruption; it is not authentication. */
#define PMD_LINK_WIRE_VERSION 1u
#define PMD_LINK_WIRE_HEADER_SIZE 16u
#define PMD_LINK_WIRE_MAX_PAYLOAD 256u
#define PMD_LINK_WIRE_MAX_FRAME (PMD_LINK_WIRE_HEADER_SIZE + PMD_LINK_WIRE_MAX_PAYLOAD)
enum pmd_link_phase { PMD_LINK_HELLO=1, PMD_LINK_DATA=2, PMD_LINK_STATUS=3 };
typedef struct {
    uint32_t sequence;
    uint16_t length;
    uint8_t phase;
    uint8_t payload[PMD_LINK_WIRE_MAX_PAYLOAD];
} pmd_link_message;
/* Fixed decoder storage; initialize with reset before first feed. Fields are
 * implementation state: callers must not modify them directly. */
typedef struct {
    uint8_t bytes[PMD_LINK_WIRE_MAX_FRAME];
    size_t used;
    int failed;
} pmd_link_decoder;
enum pmd_link_decode_result { PMD_LINK_ERROR=-1, PMD_LINK_NEED_MORE=0, PMD_LINK_FRAME=1 };
/* Returns encoded size or 0 on invalid arguments/capacity; no output modified
 * on failure. Message and destination storage must not overlap. */
size_t pmd_link_encode(const pmd_link_message *message, uint8_t *dst, size_t capacity);
void pmd_link_decoder_reset(pmd_link_decoder *decoder);
/* Consumes at most one frame, so callers retain any remaining input. After FRAME,
 * decoder is ready for another frame. Errors latch until reset. *consumed is
 * always set when supplied, including on error. Output is unchanged unless FRAME.
 * NULL input is valid only for zero length. Decoder/input/output must not overlap. */
enum pmd_link_decode_result pmd_link_decoder_feed(pmd_link_decoder *decoder,
    const uint8_t *input, size_t length, size_t *consumed, pmd_link_message *output);
#endif
