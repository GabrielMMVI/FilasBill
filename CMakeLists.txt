cmake_minimum_required(VERSION 3.29)
project(FilasBill C)

set(CMAKE_C_STANDARD 23)

add_executable(FilasBill main.c
        filaLinear.c
        filaCircular.c
        filaPonteiros.c)
