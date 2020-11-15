cmake_minimum_required(VERSION 3.17)
project(learnc C)

set(CMAKE_C_STANDARD 11)

add_executable(
        learnc
        src/main.c
        src/utils/utils.h
        src/utils/utils.c
        src/global.h
        src/mem/mem.c
        src/mem/mem.h
        src/utils/list/list.h
        src/utils/list/array_list.c
)