#include <cmath>
#include "constants.h"

double particleBoxExactWF(int quant_num, double lenght, double x_coord){
//
/* Returns the exact wavefunction of a particle in a 1D box */
// 
/* inputs */
//
// quant_num: quantum number = 1,2...n
// lenght: lenght of the box (l) in ...
// x_coord: coordinate of the particle in ...
//
/* output given in atomic units (E_h) */
//
    double norm_factor = sqrt(2.0E+00/lenght); // normalization factor
    double sinpart = sin( (quant_num * (constants::pi) * x_coord)/lenght );
    double psi = norm_factor * sinpart;

    std::cout << "Energy is: " << psi << std::endl; 

    return psi;
}

void particle_box(){
    std::cout << "             ∞                                  ∞             " << std::endl;
    std::cout << "             .                                  .             " << std::endl;
    std::cout << "             .                                  .             " << std::endl;
    std::cout << "             .                                  .             " << std::endl;
    std::cout << "    V(x)=∞   |              V(x)=0              |    V(x)=∞   " << std::endl;
    std::cout << "             |                                  |             " << std::endl;
    std::cout << "             |                                  |             " << std::endl;
    std::cout << "   region    |              region              |    region   " << std::endl;
    std::cout << "     I       |                II                |      III    " << std::endl;
    std::cout << "             |                                  |             " << std::endl;
    std::cout << "             |                                  |             " << std::endl;
    std::cout << "             |                                  |             " << std::endl;
    std::cout << "             |               box                |             " << std::endl;
    std::cout << "-----------------------------------------------------------> x" << std::endl;
    std::cout << "            x=0                                x=l            " << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Considerations" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "1). The particle is subject to a potential-energy function which" << std::endl;
    std::cout << "    is infinite everywhere, except at a line segment of lenght l" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "2). The wave function, |Ψ>, in regions I and III is thus zero!" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "3). In region II, the time-independent Schrödinger equation is" << std::endl;
    std::cout << "" << std::endl;  

    particleBoxExactWF(1,2,1.0); 

}

