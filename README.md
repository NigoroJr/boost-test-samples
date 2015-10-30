# Boost.Test Sample Programs

## Description
These are some sample programs to try out the
[Boost.Test](http://www.boost.org/doc/libs/1_59_0/libs/test/doc/html/index.html)
unit testing framework.

## Usage
Go into any of the directories. If there is a `build` directory, go into that
and run `cmake ..`. If not, compile it and link against the unit test
framework with:

    g++ -std=c++11 -lboost_unit_test_framework <source file>

To run the test, either run the executable built or run `ctest` if it's a
project that uses CMake.

## Directories
### `simple`
Simple usage for the framework with only one file.

### `add_unittest_macro`
Has `src` and `build` directories but with only source code for testing
(without `main.cpp`). Copied off of:

https://github.com/utisam/blif

### `cmake`
Multiple files with `src`, `test`, and `build` directories. This project has a
`main.cpp` and also a `test.cpp`. Basically a copy of:

http://stackoverflow.com/questions/14446495/cmake-project-structure-with-unit-tests

## License
Same as whatever the source/website that the project was based off of.
Otherwise, [WTFPL](http://www.wtfpl.net/).
