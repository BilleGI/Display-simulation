cmake_minimum_required(VERSION 3.5)

add_executable(untitled main.cpp ${MY_INCLUDE_DIR}/screen.h screen.cpp ${MY_INCLUDE_DIR}/window.h window.cpp)

target_include_directories(untitled PUBLIC ${MY_INCLUDE_DIR})
