cmake_minimum_required(VERSION 3.21)
project(Zraxon)

set(CMAKE_CXX_STANDARD 14)

add_executable(Zraxon main.cpp player.cpp location.cpp include/Locations.h Display.cpp include/Location_Ids.h Locations.cpp)
