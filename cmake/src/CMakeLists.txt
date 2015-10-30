add_library(MyFoo Foo.cpp Foo.h)
add_executable(demo main.cpp)
target_link_libraries(demo MyFoo)

set_property(TARGET demo PROPERTY CXX_STANDARD 11)
set_property(TARGET MyFoo PROPERTY CXX_STANDARD 11)
