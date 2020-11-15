cmake_minimum_required(VERSION 3.17)
project(learnc C)

set(CMAKE_C_STANDARD 11)

add_executable(learnc src/main.c src/utils/utils.h src/utils/utils.c)