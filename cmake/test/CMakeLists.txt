find_package (Boost COMPONENTS system filesystem unit_test_framework REQUIRED)
include_directories(${TEST_SOURCE_DIR}/src
    ${Boost_INCLUDE_DIRS}
    )

add_definitions(-DBOOST_TEST_DYN_LINK)
add_executable(UnitTest test.cpp)
target_link_libraries(UnitTest
    MyFoo
    ${Boost_FILESYSTEM_LIBRARY}
    ${Boost_SYSTEM_LIBRARY}
    ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
    )

set_property(TARGET UnitTest PROPERTY CXX_STANDARD 11)
