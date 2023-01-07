// 
/* Classes definition; see also "classes.h" */
//
#include <iostream>
#include <fstream>     // open, read and write to an external file
#include "classes.h"

Job::Job(){
    std::cout << "" << std::endl;
    std::cout << "Setting job type" << std::endl;
    std::cout << "" << std::endl;
}

void Job::getData(std::string filename){

    std::ifstream myfile(filename);

    if (myfile.is_open()){
        std::string temp1,temp2;
        //std::cout << "OK" << std::endl;

        myfile >> temp1 >> temp2;
        std::cout << temp1 << temp2 << std::endl;

        myfile.close();
    } else {
        std::cout << "Unable to open input file" << std::endl;
    }
    
    //std::cin >> type;

    
}