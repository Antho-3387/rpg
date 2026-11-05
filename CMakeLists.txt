cmake_minimum_required(VERSION 4.3)
project(RPGFighting)

set(CMAKE_CXX_STANDARD 20)

add_executable(RPGFighting main.cpp
        Player.cpp
        Player.h
        Fight.cpp
        Fight.h
        Bot.cpp
        Bot.h
        Menu.cpp
        Menu.h
        Race.cpp
        Race.h)
