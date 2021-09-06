cmake_minimum_required(VERSION 3.20)
project(CppTest)

set(CMAKE_CXX_STANDARD 14)

add_executable(CppTest main.cpp lib/tlpi_hdr.h lib/error_functions.h lib/error_functions.c lib/ename.c.inc lib/get_num.h lib/get_num.c lib/chapter04/copy.h lib/chapter04/copy.c)
