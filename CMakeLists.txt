cmake_minimum_required(VERSION 3.20)
project(RPGFighting)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(RPGFighting
        main.cpp
        Player.cpp
        Fight.cpp
        Bot.cpp
        Menu.cpp
        Race.cpp
        Weapon.cpp
        Inventory.cpp)
