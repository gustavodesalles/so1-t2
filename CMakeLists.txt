cmake_minimum_required(VERSION 3.26)
project(so1_t2)

set(CMAKE_CXX_STANDARD 17)

add_executable(so1_t2 main.cpp
        Leitor.cpp
        Leitor.h
        Algoritmo.cpp
        Algoritmo.h
        AlgoritmoFIFO.cpp
        AlgoritmoFIFO.h
        AlgoritmoLRU.cpp
        AlgoritmoLRU.h
)
