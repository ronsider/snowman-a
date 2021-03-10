/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Ron Sider>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {
    /////////////////////////////////////////////////////////////
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(21114411)) == nospaces("___\n.....\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(31114411)) == nospaces("_\n/_\\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(41114411)) == nospaces("___\n(_*_)\n(.,.)\n( : )\n( : )"));
    ////////////////////////////////////////////// hats variations

    ////////////////////////////////////////////////////////////////////////
    CHECK(nospaces(snowman(12114411)) == nospaces("_===_\n(...)\n( : )\n( : )"));
    CHECK(nospaces(snowman(13114411)) == nospaces("_===_\n(._.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(14114411)) == nospaces("_===_\n(. .)\n( : )\n( : )"));
    /////////////////////////////////////////////// nose variations


    ///////////////////////////////////////////////////////////////////
    CHECK(nospaces(snowman(11214411)) == nospaces("_===_\n(o,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11314411)) == nospaces("_===_\n(O,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11414411)) == nospaces("_===_\n(-,.)\n( : )\n( : )"));
    ///////////////////////////////////////////////////////left eye variations


    ////////////////////////////////////////////////////////////////////
    CHECK(nospaces(snowman(11124411)) == nospaces("_===_\n(.,o)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11134411)) == nospaces("_===_\n(.,O)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11144411)) == nospaces("_===_\n(.,-)\n( : )\n( : )"));
    /////////////////////////////////////////////////////// right eye variations


    /////////////////////////////////////////////////////////////////////
    CHECK(nospaces(snowman(11111411)) == nospaces("_===_\n(.,.)\n(<: )\n( : )"));
    CHECK(nospaces(snowman(11113411)) == nospaces("_===_\n(.,.)\n(/: )\n( : )"));
    ///////////////////////////////////////////////////////// left arm variations


    //////////////////////////////////////////////////////////////////////
    CHECK(nospaces(snowman(11114111)) == nospaces("_===_\n(.,.)\n( :>)\n( : )"));
    CHECK(nospaces(snowman(11114211)) == nospaces("_===_\n(.,.)\n( :/)\n( : )"));
    ///////////////////////////////////////////////////////// right arm variations

 

    /* Add more checks here */
}

TEST_CASE("Bad snowman code") {
    ///////////////////////////
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(981));
    //////////////////// bad formating

    


    
}


/* Add more test cases here */
