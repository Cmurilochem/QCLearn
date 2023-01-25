#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_approx.hpp>
#include "particle_box.h"
#include "constants.h"

TEST_CASE( "Cheking Energy for ground state", "") {
    
    REQUIRE( particleBoxExactEnergy(1,4.0,2.0E-26) == Catch::Approx(3.93379e-05) );  
}

TEST_CASE( "Cheking Energy for the first exited state", "") {
    
    REQUIRE( particleBoxExactEnergy(2,4.0,2.0E-26) == Catch::Approx(0.000157352) );  
}

TEST_CASE( "Cheking Energy for the second exited state", "") {
    
    REQUIRE( particleBoxExactEnergy(3,4.0,2.0E-26) == Catch::Approx(0.000354041) );  
}

TEST_CASE( "Cheking for an exception for lenght = 0", "") {
    
     REQUIRE_THROWS_AS( particleBoxExactEnergy(3,0.0,2.0E-26), std::exception);  
}

TEST_CASE( "Cheking for an exception quantum number < 1", "") {
    
     REQUIRE_THROWS_AS( particleBoxExactEnergy(3,4.0,0.0), std::exception);  
}

TEST_CASE( "Cheking for both exception", "") {
    
     REQUIRE_THROWS_AS( particleBoxExactEnergy(0,4.0,2.0E-26), std::exception);  
}



