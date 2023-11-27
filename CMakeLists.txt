cmake_minimum_required(VERSION 3.26)
project(reservaHotel C)

set(CMAKE_C_STANDARD 11)

add_executable(reservaHotel main.c
        funcoes.h
        funcoes.c)
