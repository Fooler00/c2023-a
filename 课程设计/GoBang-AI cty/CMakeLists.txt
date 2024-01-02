cmake_minimum_required(VERSION 3.26)
project(GoBang_AI_master)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(GoBang_AI_master
        GoBang.cpp
        Gobang.h
        GoBangMaster.cpp
        GoBangMaster.h
        Main.cpp
        NewMain.cpp)
