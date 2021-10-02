cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name
project(acs-hw-1 LANGUAGES CXX)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(BINARY_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(SOURCE_FILES
        main.cpp

        container.cpp
        container.h

        languages.cpp
        languages.h

        functional.cpp
        functional.h

        utils.h
        utils.cpp

        objectOriented.h
        objectOriented.cpp

        procedural.cpp
        procedural.h)

add_executable(acs-hw-1 ${SOURCE_FILES})
