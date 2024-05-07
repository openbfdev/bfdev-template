# SPDX-License-Identifier: GPL-2.0-or-later
#
# Copyright(c) 2023 John Sanpe <sanpeqf@gmail.com>
#

cmake_minimum_required(VERSION 3.9)
project(bfdev-template VERSION "0.0.2" LANGUAGES C)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
set(PROJECT_SOURCE_PATH ${PROJECT_SOURCE_DIR}/src)
set(PROJECT_GENERATED_PATH ${PROJECT_BINARY_DIR}/generated)

configure_file(
    ${CMAKE_MODULE_PATH}/config.h.in
    ${PROJECT_GENERATED_PATH}/config.h
)

include(${CMAKE_MODULE_PATH}/bfdev.cmake)
include_directories(${PROJECT_GENERATED_PATH})

add_executable(helloworld ${PROJECT_SOURCE_PATH}/main.c)
target_link_libraries(helloworld bfdev)
