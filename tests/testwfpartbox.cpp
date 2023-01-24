#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>
#include "particle_box.h"
#include "constants.h"

TEST_CASE( "Cheking Wave Function at middle", "") {
    
    REQUIRE( particleBoxExactWF(1,2.0,1.0) == 1.0 );  
}

TEST_CASE( "Cheking Wave Function at corner", "") {
    
    REQUIRE_THAT( particleBoxExactWF(1,2.0,2.0), Catch::Matchers::WithinAbs(0, 0.000001) );
}

TEST_CASE( "Cheking Wave Function at origin", "") {
    
    REQUIRE_THAT( particleBoxExactWF(1,2.0,0.0), Catch::Matchers::WithinAbs(0, 0.000001) );
}

TEST_CASE( "Cheking Wave Function: excited state at middle", "") {
    
    REQUIRE_THAT( particleBoxExactWF(2,2.0,1.0), Catch::Matchers::WithinAbs(0, 0.000001) );  
}



