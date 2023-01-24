#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp> //<catch2/catch.hpp>
#include "particle_box.h"
#include "constants.h"

TEST_CASE( "Cheking Wave Function at middle", "") {
    
    REQUIRE( particleBoxExactWF(1,2.0,1.0) == 1.0 );  
}

TEST_CASE( "Cheking Wave Function at corner", "") {
    
    REQUIRE( particleBoxExactWF(1,2.0,2.0) < 1.0e-12 );
}

TEST_CASE( "Cheking Wave Function at origin", "") {
    
    REQUIRE( particleBoxExactWF(1,2.0,0.0) < 1.0e-12 );
}

TEST_CASE( "Cheking Wave Function: excited state at middle", "") {
    
    REQUIRE( particleBoxExactWF(2,2.0,1.0) < 1.0e-12 );  
}



