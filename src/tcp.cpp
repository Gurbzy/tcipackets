#include "../include/tcp.h"
#include <arpa/inet.h>

uint16_t parse_dor(uint8_t offset, uint8_t flags, uint8_t reserved = 0) {
	uint16_t result = 0;

	result |= (offset & 0xF) << 12;  
	result |= (reserved & 0x7) << 9; 
	result |= flags & 0xFF;	

	return htons(result);
}
