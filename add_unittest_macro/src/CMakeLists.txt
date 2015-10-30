cmake_minimum_required(VERSION 2.8)

add_library(Foo SHARED Foo.h)
# Since this is header only, CMake needs to know what language it is
# https://cmake.org/pipermail/cmake/2006-July/010380.html
set_property(TARGET Foo PROPERTY LINKER_LANGUAGE CXX)
# set_target_properties(Foo PROPERTIES LINKER_LANGUAGE CXX)

# Either this or define in test.cpp
add_definitions(-DBOOST_TEST_DYN_LINK)
add_unittest(unittest test.cpp Foo)
