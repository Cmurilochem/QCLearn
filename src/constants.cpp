// 
/* GLobal constants definition; see also "constants.h" */
//
#include "constants.h"
//#include <cmath> // pi { acos(-1.0E+00) };

namespace constants
{
    // actual global variables
    extern const double pi { 3.14159 };
    extern const double planck { 6.62607015E-34 }; // m**2 Kg s**-1
    extern const double planckBar { planck/2.0*pi }; // m**2 Kg s**-1

}