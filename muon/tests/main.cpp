#define BOOST_TEST_MODULE name
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(tests)

BOOST_AUTO_TEST_CASE(my_test) {
  BOOST_CHECK_EQUAL(1, 1);
}


BOOST_AUTO_TEST_SUITE_END()
