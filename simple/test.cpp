#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Simple
#include <boost/test/unit_test.hpp>

/**
 * Compile and link against the boost unit test framework.
 * g++ -std=c++11 -lboost_unit_test_framework <this file>
 */

int add(const int i, const int j) {
    return i + j;
}

BOOST_AUTO_TEST_CASE(add_them) {
    BOOST_CHECK(add(2, 2) == 4);
}
