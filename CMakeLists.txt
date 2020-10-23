cmake_minimum_required(VERSION 3.17)
project(Dungeons-Cookies)

set(CMAKE_CXX_STANDARD 20)
set(SOURCE_EXE src/main/main.cpp)
set(SOURCE_LIB src/main/Environment.cpp src/main/Environment.h src/main/Room.h src/main/Item.cpp src/main/Item.h src/main/Logger.cpp src/main/Logger.h src/main/Player.h src/main/Room.cpp src/main/Player.cpp)

add_library(lib STATIC ${SOURCE_LIB})
add_executable(exe ${SOURCE_EXE})
target_link_libraries(exe lib)