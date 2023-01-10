// 
/* Classes definition; see also "classes.h" */
//
#include <iostream>
#include <fstream>   // open, read and write to an external file
#include <stdlib.h>  // necessary to abort 
#include "classes.h"

Job::Job(){
    std::cout << "" << std::endl;
    std::cout << "Setting job type" << std::endl;
    std::cout << "" << std::endl;
}

void Job::getData(std::string filename){
    std::string temp;

    std::ifstream myfile(filename);

    if (myfile.is_open()){
        
        getline(myfile,temp);                    // reading the job type (whole first line)
        type = temp.substr(temp.find(" ")+1,-1); // removing the "*JOB" part

        //
        /* handling exceptions - checking for errors */
        //

        try { 
            if (type != "PARTICLE_BOX_1D") {
                throw (type); // if the input is wrong, throw an error defined in catch 
            }
        }
        catch (std::string mytype) { 
            std::cout << "Error!" << std::endl;
            std::cout << "Please, provide a valid job type" << std::endl;
            std::cout << "Input job type ---> " << mytype << " <--- is not implemented" << std::endl;
            exit(0);
        }

        getline(myfile,temp);                    // reading second entire line
        std::cout << temp.substr(temp.find(" ")+1,-1) << std::endl; 

        myfile.close();

    } else {
        std::cout << "Unable to open input file" << std::endl;
    }
    
    //std::cin >> type;

    
}

void Job::putData(){
    
    if (type == "PARTICLE_BOX_1D") {
        std::cout << "Particle in a box selected" << std::endl;
    } else {
        std::cout << "ERROR" << std::endl;
        exit(0);
    }
    
    
}