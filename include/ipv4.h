#ifndef IPV4_H
#define IPV4_H

#include <cstdint>

typedef struct I4Packet {
	uint8_t version_ihl;	
	uint8_t type_of_service;
	uint16_t length;

	uint16_t id; 
	uint16_t flag_offset; 

	uint8_t ttl;
	uint8_t protocol;
	uint16_t checksum; 

	uint32_t source_adr;
	uint32_t dest_adr;
} I4Packet; 

#endif
