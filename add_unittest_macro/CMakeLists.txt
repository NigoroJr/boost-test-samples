cmake_minimum_required(VERSION 2.8)
project(UnitTest)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
set(CMAKE_CXX_RELEASE "-O")

# Add Boost.Test
find_package(Boost REQUIRED COMPONENTS unit_test_framework)
enable_testing()
macro (add_unittest NAME MAIN_SRC)
    add_executable (${NAME} ${MAIN_SRC} ${ARGN})
    target_link_libraries (${NAME} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})
    add_test (${NAME} ${NAME})
endmacro (add_unittest)

include_directories(src)
add_subdirectory(src)
