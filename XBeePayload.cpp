#include "XBeePayload.h"

void *gen_payload(uint8_t *payload, uint8_t payload_size, uint8_t msg_type, uint8_t *data, uint16_t data_size) {
  /*
  Generate the payload array, including the CRC calculation
  */

  for (int i = 0; i < data_size; i++) {
    payload[i + 2] = data[i];
  }

  payload[0] = msg_type;
  payload[1] = crc_calc(data, data_size);
}
