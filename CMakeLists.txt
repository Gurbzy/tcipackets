cmake_minimum_required(VERSION 3.16)
project(tcipackets LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(TIP_SOURCES
	src/tcp.cpp
	src/ipv4.cpp
)

add_library(tiplib ${TIP_SOURCES}) 	


target_include_directories(tiplib PUBLIC  
	${CMAKE_CURRENT_SOURCE_DIR}/include
)
add_executable(tip src/main.cpp)

target_link_libraries(tip PRIVATE tiplib)

enable_testing()

set(TIP_TESTS
	tests/size.cpp
)

add_executable(packet_tests ${TIP_TESTS}) 
target_link_libraries(packet_tests PRIVATE tiplib)
