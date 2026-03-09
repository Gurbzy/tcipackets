#ifndef TCP_H
#define TCP_H

#include <cstdint>
#include <vector>

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

typedef enum TCP_Flags {
	TCP_FIN = 1,
	TCP_SYN = 1 << 1,
	TCP_RST = 1 << 2, 
	TCP_PSH = 1 << 3, 
	TCP_ACK = 1 << 4, 
	TCP_URG = 1 << 5, 
	TCP_ECE = 1 << 6, 
	TCP_CWR = 1 << 7, 
} TCP_Flags;

uint16_t parse_dor(uint8_t offset, uint8_t flags, uint8_t reserved);
std::vector<uint8_t> serialize(const TCPacket &p);

#endif
