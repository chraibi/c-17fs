#  cmake  -DCMAKE_CXX_COMPILER=g++-8  ..
cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(test LANGUAGES CXX)

add_executable(main main.cpp)

# c++17 ----
set(CMAKE_CXX_EXTENSIONS OFF)
set_property(TARGET main PROPERTY CXX_STANDARD 17)
set_property(TARGET main PROPERTY CXX_STANDARD_REQUIRED ON)

# optional stuff to check compiler

include(CheckCXXCompilerFlag)

# Check for standard to use
check_cxx_compiler_flag(-std=c++17 HAVE_FLAG_STD_CXX17)
if(HAVE_FLAG_STD_CXX17)
    message(STATUS "Have -std=c++17")
else()
    check_cxx_compiler_flag(-std=c++1z HAVE_FLAG_STD_CXX1Z)
    if(HAVE_FLAG_STD_CXX1Z)
      message(STATUS "Have -std=c++1z")
    else()
      message(ERROR "apparently no c++17 support")
    endif()
    message(ERROR "apparently no c++17 support")
endif()
