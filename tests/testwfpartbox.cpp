#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "../include/qclearn/particle_box.h"
#include "../include/qclearn/constants.h"

TEST_CASE( "ChekingWaveFunction at middle") {
    
    REQUIRE( particleBoxExactWF(1,2.0,1.0) = 1.0 );  
}

TEST_CASE( "ChekingWaveFunction at corner") {
    
    REQUIRE( particleBoxExactWF(1,2.0,2.0) == 0.0 );
}

TEST_CASE( "ChekingWaveFunction at origin") {
    
    REQUIRE( particleBoxExactWF(1,2.0,0.0) == 0.0 );
}



