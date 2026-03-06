#ifndef TCP_H
#define TCP_H

#include <cstdint>

typedef struct TCPacket {
	uint16_t source;	
	uint16_t dest;	
	
	uint32_t anum; // acknowledgement number
	uint32_t snum; // sequence number
	
	uint16_t dor_flags; // data offset reserved flags 
	uint16_t window;

	uint16_t checksum;
	uint16_t uptr;
} TCPacket; 

#endif
