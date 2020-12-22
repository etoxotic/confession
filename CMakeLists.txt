cmake_minimum_required(VERSION 3.17)
project(confessionproject)

set(CMAKE_CXX_STANDARD 14)

set(SFML_INCLUDE_DIR "./resources/SFML-2.5.1/include")
set(SFML_LIBRARY_DIR "./resources/SFML-2.5.1/lib")
set(SFML_DIR "./resources/SFML-2.5.1/lib/cmake/SFML")

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

if(SFML_FOUND)
    message(STATUS "SFML_INCLUDE_DIR: ${SFML_INCLUDE_DIR}")
    message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
    message(STATUS "SFML_VERSION: ${SFML_VERSION}")
endif()

add_executable(confessionproject main.cpp Engine/Engine.cpp Engine/Engine.h Engine/Tile.cpp Engine/Tile.h Engine/Karma.h Engine/Bullet.cpp Engine/Bullet.h Engine/Ego.cpp Engine/Ego.h Engine/Interface.cpp Engine/Interface.h Engine/Button.cpp Engine/Button.h)
target_link_libraries (confessionproject sfml-graphics sfml-window sfml-system)