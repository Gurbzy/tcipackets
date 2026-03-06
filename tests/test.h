#ifndef TEST_H
#define TEST_H

#include <iostream>

inline int tests_run = 0;
inline int tests_failed = 0;

#define TEST_ASSERT(cond) \
do { \
    tests_run++; \
    if (!(cond)) { \
        tests_failed++; \
        std::cerr << "Test failed: " << #cond \
                  << " (" << __FILE__ << ":" << __LINE__ << ")\n"; \
    } \
} while(0)

inline void test_summary() {
    std::cout << "Tests run: " << tests_run << "\n";
    std::cout << "Tests failed: " << tests_failed << "\n";

    if (tests_failed == 0)
        std::cout << "All tests passed\n";
}

#endif
