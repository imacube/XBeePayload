#ifndef XBeePayload
#define XBeePayload

#include "Arduino.h"
#include "crc.h"

void *gen_payload(uint8_t *payload, uint8_t payload_size, uint8_t msg_type, uint8_t *data, uint16_t data_size);

#endif
