// 
/* Classes definition; see also "classes.h" */
//
#include <iostream>
#include <fstream>   // open, read and write to an external file
#include <stdlib.h>  // necessary to abort 
#include <string>  
#include <vector>    // dealing with vectors 
#include <sstream>   // streams
#include "classes.h"
#include "particle_box.h"
#include "rigid_rotor.h"
#include "harm_oscillator.h"

//
/* Function to split strings */
//
void split_str( std::string const &str, const char delim, std::vector <std::string> &out ){  
            // create a stream from the string  
            std::stringstream s(str);  
          
            std::string s2; 

            out.clear(); // just in case, clean the vector

            while (std:: getline (s, s2, delim) )  
            {  
                out.push_back(s2); // store the string in s2 
                
            }  

            //for (int i=0; i<out.size(); ++i)
            //    std::cout << out[i] << std::endl;
        }

//
/* Definition of the class methods*/
//

Job::Job(){ // Constructor
    std::cout << "" << std::endl;
    std::cout << "Setting job type..." << std::endl;
    std::cout << "" << std::endl;
}

void Job::getData(std::string filename){
    std::vector <std::string> out;
    std::string temp,line;
    int i;

    std::ifstream myfile(filename);

    if (myfile.is_open()){

        i=0;

        while (getline(myfile,line)){ // reading lines in a ro  

            split_str(line, ' ', out); // spliting the line into vector of string 

            switch (i) {
                case 0: // if it is the first line, define the type of job            
                    type = out[1];
                    //std::cout << type << std::endl;
                    break;              
                case 1:             
                    param1 = std::stod(out[1]);
                    //std::cout << param1 << std::endl;
                    break;              
                case 2:             
                    param2 = std::stod(out[1]);
                    //std::cout << param2 << std::endl;
                    break;              
                default: // if it is the last line, define the maximum quantum number           
                    nQuantMax = std::stoi(out[1]); 
                    //std::cout << n_quant_max << std::endl;                  
            }

            i++;
        }

        //
        /* handling exceptions - checking for errors */
        //

        try { 
            if ( (type != "PARTICLE_BOX" && 
                  type != "RIGID_ROTOR" && 
                  type != "HARM_OSCILLATOR") ) {

                throw (type); // if the input is wrong, throw an error defined in catch 
            }
        }
        catch (std::string mytype) { 
            std::cerr << "Error!" << std::endl;
            std::cerr << "Please, provide a valid job type" << std::endl;
            std::cerr << "Input job type ---> " << mytype << " <--- is not yet implemented" << std::endl;
            exit(0);
        }

        myfile.close();

    } else {
        std::cout << "Unable to open input file" << std::endl;
    }
    
}

void Job::putData(){
    
    if (type == "PARTICLE_BOX") {

        std::cout << "Particle in a 1D box selected" << std::endl;
        std::cout << " " << std::endl;
        std::cout << "Lenght of the box (in nanometer): " << param1 << std::endl;
        std::cout << "Mass of the particle (in gram): " << param2 << std::endl;
        std::cout << "Maximum quantum number: " << nQuantMax << std::endl;
        std::cout << " " << std::endl;

        particle_box(param1, param2, nQuantMax);

    } else if (type == "RIGID_ROTOR") {

        std::cout << "Rigid rotor selected" << std::endl;

        rigid_rotor();

    } else if (type == "HARM_OSCILLATOR") {

        std::cout << "Harmonic oscilattor selected" << std::endl;

        harm_oscillator();

    } else {
        std::cerr << "Error!" << std::endl;
        exit(0);
    }
    
    
}