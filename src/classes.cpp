// 
/* Classes definition; see also "classes.h" */
//
#include <iostream>
#include <fstream>   // open, read and write to an external file
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
        
        getline(myfile,temp);                    // reading the whole first line
        type = temp.substr(temp.find(" ")+1,-1); // removing the "*JOB" part

        
        
        myfile.close();
    } else {
        std::cout << "Unable to open input file" << std::endl;
    }
    
    //std::cin >> type;

    
}

void Job::putData(){
    
    if (type == "PARTICLE_BOX_1D") {
        std::cout << "Particle in a 1D box selected" << std::endl;
    } else {
        std::cout << "ERROR" << std::endl;
    }
    
    
}