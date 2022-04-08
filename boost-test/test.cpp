// test.cpp
#include "formula.h"
#define BOOST_TEST_MODULE SqrTests
#include "boost/test/unit_test.hpp"

BOOST_AUTO_TEST_SUITE(s_suit)
BOOST_AUTO_TEST_CASE(FailTest)
{
  BOOST_CHECK_EQUAL(4, Formula::bla(2));
}
BOOST_AUTO_TEST_SUITE_END()

// BOOST_AUTO_TEST_CASE(PassTest)
// {

//   BOOST_CHECK_EQUAL(4, sqr(2));
// }