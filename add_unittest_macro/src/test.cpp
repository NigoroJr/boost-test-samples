// This, or use add_definition in CMakeLists.txt
// #define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE AddUnitTest
#include <boost/test/unit_test.hpp>

#include "Foo.h"

BOOST_AUTO_TEST_CASE(first_case) {
    Foo f{42};
    BOOST_CHECK_EQUAL(f.x(), 42);
}
