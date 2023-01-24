#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_approx.hpp>
#include "particle_box.h"
#include "constants.h"

TEST_CASE( "Cheking Energy", "") {
    
    REQUIRE( particleBoxExactEnergy(1,4.0,2.0E-26) == Catch::Approx(3.93379e-05) );  
}



