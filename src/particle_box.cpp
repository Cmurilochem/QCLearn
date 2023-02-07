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

// Throw an exception for certain conditions

   try { 
            if ( lenght <= 0.0 ) {
                throw 10; 
            } else if ( mass <= 0.0 ){
                throw 10;
            } else if ( quant_num < 1 ){
                throw "10";
            }
        }
    catch (int e1) { 
        std::cerr << "Error inside particleBoxExactEnergy function !" << std::endl;
        std::cerr << "Lenght and/or mass cannot be lower or equal to zero" << std::endl;
        exit(0);
    }
    catch (...) { 
        std::cerr << "Error inside particleBoxExactEnergy function !" << std::endl;
        std::cerr << "Quantum number cannot be lower than 1" << std::endl;
        exit(0);
    }

// continuing 

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

// Throw an exception for certain conditions

   try { 
            if ( lenght <= 0.0 ) {
                throw 10; 
            } else if ( quant_num < 1 ){
                throw "10";
            }
        }
    catch (int e1) { 
        std::cerr << "Error inside particleBoxExactWF function !" << std::endl;
        std::cerr << "Lenght cannot be lower or equal to zero" << std::endl;
        exit(0);
    }
    catch (...) { 
        std::cerr << "Error inside particleBoxExactWF function !" << std::endl;
        std::cerr << "Quantum number cannot be lower than 1" << std::endl;
        exit(0);
    }

// continuing 

    double norm_factor = sqrt( 2.0 / lenght ); // normalization factor
    double sinpart = sin( (double(quant_num) * (constants::pi) * x_coord ) / lenght ); // sine function part 
    double psi = norm_factor * sinpart; // total normalized wave function

    //std::cout << "WF is: " << psi << std::endl; 

    return psi;
}

void data_particle_box(int quant_num, double energy, double lenght, std::string filename, int grid = 100){

    int i;
    double step, x, x0;

    x0 = 0.0;
    step = ( lenght - x0 ) / ( grid - 1.0 );

    for (i=0; i<grid; i++){
        x = x0 + (step * float(i));
        std::cout << i << " " << x << std::endl;
    }

}

void particle_box(double lenght, double mass, int nqtmax, std::string filename){
//
/* Returns the exact wavefunction as grid points and energy of a particle in a 1D box */
// 
/* inputs */
//
// lenght: lenght of the box (l) in nm
// mass: mass of the particle in gram
// nqtmax: maximum quantum number to generate data
//
/* outputs a file with wave functions evaluated at grid points and energies */
//
    //const double fact = 1.0E+03;
    int i, j, k;
    double energyEh, ZPE, energyEhRelZPE;

    //std::cout << "             ∞                                  ∞             " << std::endl;
    //std::cout << "             .                                  .             " << std::endl;
    //std::cout << "             .                                  .             " << std::endl;
    //std::cout << "             .                                  .             " << std::endl;
    //std::cout << "    V(x)=∞   |              V(x)=0              |    V(x)=∞   " << std::endl;
    //std::cout << "             |                                  |             " << std::endl;
    //std::cout << "             |                                  |             " << std::endl;
    //std::cout << "   region    |              region              |    region   " << std::endl;
    //std::cout << "     I       |                II                |      III    " << std::endl;
    //std::cout << "             |                                  |             " << std::endl;
    //std::cout << "             |                                  |             " << std::endl;
    //std::cout << "             |                                  |             " << std::endl;
    //std::cout << "             |               box                |             " << std::endl;
    //std::cout << "-----------------------------------------------------------> x" << std::endl;
    //std::cout << "            x=0                                x=l            " << std::endl;
    //std::cout << " " << std::endl;
    //std::cout << "Considerations" << std::endl;
    //std::cout << "" << std::endl;
    //std::cout << "1). The particle is subject to a potential-energy function which" << std::endl;
    //std::cout << "    is infinite everywhere, except at a line segment of lenght l" << std::endl;
    //std::cout << "" << std::endl;
    //std::cout << "2). The wave function, |Ψ>, in regions I and III is thus zero!" << std::endl;
    //std::cout << "" << std::endl;
    //std::cout << "3). In region II, the time-independent Schrödinger equation is" << std::endl;
    //std::cout << "" << std::endl;  

    std::cout << "Setting up wavefunctions and energies...\n\n";
//
/* Calculating now wavefunctions and energies for all states up to nqtmax */
//
    for (i=1; i<=nqtmax; i++){
//
/* Quantized energies relative to the botton of the box */
//
        energyEh = particleBoxExactEnergy(i, lenght, mass);
//
/* Setting up ZPE */
//
        if ( i == 1 ){
            ZPE = energyEh;
            //std::cout << ZPE << std::endl;
        }
//
/* Quantized energies relative to ZPE */
//
        energyEhRelZPE = (energyEh - ZPE); 
//
/* Printing out info */
//
        std::cout << "E_" << i << " " << "=" << " " << energyEh << " " << "E_h" << "    ";
        //std::cout << "E_" << i << " " << "=" << " " << energyEhRelZPE << " " << "E_h" << "    ";
        std::cout << "Calculating " << "|Ψ_" << i << ">\n\n";
//
/* Generating the wavefunctions as grid points and writting them to a file */
//
        data_particle_box(i, energyEh, lenght, filename);

    }

    particleBoxExactWF(1,2.0,2.0); 

    particleBoxExactEnergy(3,4.0,2.0E-26);

}