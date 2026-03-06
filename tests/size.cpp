#include "../include/ipv4.h"
#include "../include/tcp.h"

#include "test.h"

int main() {
    TEST_ASSERT(sizeof(TCPacket) == 20);
    TEST_ASSERT(sizeof(I4Packet) == 20);

    test_summary();
}
