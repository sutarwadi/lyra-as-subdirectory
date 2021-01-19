cmake_minimum_required(VERSION 3.12)
project(lyratest)

add_subdirectory(lyra EXCLUDE_FROM_ALL)
add_executable(test test.cpp)
target_link_libraries(test PUBLIC bfg::Lyra)
