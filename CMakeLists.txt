# SPDX-License-Identifier: GPL-2.0-or-later
#
# Copyright(c) 2023 John Sanpe <sanpeqf@gmail.com>
#

cmake_minimum_required(VERSION 3.9)
project(bfdev-template VERSION "0.0.1" LANGUAGES C)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
include(${CMAKE_MODULE_PATH}/bfdev.cmake)

add_executable(helloworld main.c)
target_link_libraries(helloworld bfdev)
