#include <iostream>
#include <string>
#include <sstream>
#include "FibLFSR.hpp"

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Main
#include <boost/test/unit_test.hpp>

// The initial test that was given in this file.
BOOST_AUTO_TEST_CASE(sixteenBitsThreeTaps) 
{
	FibLFSR test("1011011000110110");
  	BOOST_REQUIRE(test.step() == 0);
  	BOOST_REQUIRE(test.step() == 0);
  	BOOST_REQUIRE(test.step() == 0);
  	BOOST_REQUIRE(test.step() == 1);
  	BOOST_REQUIRE(test.step() == 1);
  	BOOST_REQUIRE(test.step() == 0);
  	BOOST_REQUIRE(test.step() == 0);
 	BOOST_REQUIRE(test.step() == 1);
 	BOOST_REQUIRE(test.step() == 1);
  	FibLFSR test1("1011011000110110");
  	BOOST_REQUIRE(test1.generate(9) == 51);
}

//This is my first example
BOOST_AUTO_TEST_CASE(my1stexample)
{
  	// step test
  	FibLFSR test("00110101");
  	BOOST_REQUIRE(test.step() == 0);
  	BOOST_REQUIRE(test.step() == 1);
  	BOOST_REQUIRE(test.step() == 0);
  	BOOST_REQUIRE(test.step() == 0);
  	BOOST_REQUIRE(test.step() == 0);
  	FibLFSR test2("00110101");
  	BOOST_REQUIRE(test2.generate(5) == 8);
}

//This is my second example
BOOST_AUTO_TEST_CASE(my2ndexample)
{
  	// step test
  	FibLFSR test("01010101");
  	BOOST_REQUIRE(test.step() == 0);
  	BOOST_REQUIRE(test.step() == 0);
  	BOOST_REQUIRE(test.step() == 0);
  	BOOST_REQUIRE(test.step() == 0);
  	BOOST_REQUIRE(test.step() == 0);
  	BOOST_REQUIRE(test.step() == 1);
  	BOOST_REQUIRE(test.step() == 1);
  	FibLFSR test3("01010101");
  	BOOST_REQUIRE(test3.generate(7) == 3);
}
