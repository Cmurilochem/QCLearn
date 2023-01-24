// 
/* Particle in a box problem; see also "particle_box.h" */
//
#include <iostream>
#include <cmath>
#include "constants.h"
#include "particle_box.h"

double particleBoxExactEnergy(int quant_num, double lenght, double mass){
//
/* Returns the exact quantized energies of a particle in a 1D box */
//
/* inputs */
//
// quant_num: quantum number = 1,2...n
// lenght: lenght of the box (l) in nm
// mass: mass of the particle in gram
/* output given in atomic units (E_h) */
//
    double massKg = mass*(1.0e-3); // converting mass from g to Kg
    double lenghtMeter = lenght*(1.0e-9); // converting nm to m   

    double num = ( pow(double(quant_num),2) * pow((constants::planck),2) ); // numerator: units --> m**4 Kg**2 s**-2 
    double denom = ( 8.0 * massKg * pow(lenghtMeter,2) ); // denominator units --> Kg m**2
    double energy = ( num / denom ); // total energy - m**2 Kg s**-2 = Joule
    double energyEh = energy / (constants::hartreeToJoule); // energy in Hartree

    //std::cout <<  pow((constants::planck),2) << " " << massKg << " " << lenghtMeter << std::endl;
    //std::cout << "Energy is (Eh): " << energyEh << std::endl;

    return energyEh;
}

double particleBoxExactWF(int quant_num, double lenght, double x_coord){
//
/* Returns the exact wavefunction of a particle in a 1D box */
// 
/* inputs */
//
// quant_num: quantum number = 1,2...n
// lenght: lenght of the box (l) in nm
// x_coord: coordinate of the particle in nm
//
/* output given in nm**-1 */
//
    double norm_factor = sqrt( 2.0 / lenght ); // normalization factor
    double sinpart = sin( (double(quant_num) * (constants::pi) * x_coord ) / lenght ); // sine function part 
    double psi = norm_factor * sinpart; // total normalized wave function

    //std::cout << "WF is: " << psi << std::endl; 

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

    particleBoxExactWF(1,2.0,2.0); 

    particleBoxExactEnergy(1,4.0,2.0E-26);

}