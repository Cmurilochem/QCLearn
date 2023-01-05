#include <iostream>
#include "head_foot.h"

std::string delimiter = "***************************************";

void printhead(){
    std::string head_1st = "QCLearn";
    std::string head_2nd = "Classical problems in quantum chemistry";
    
    std::cout << delimiter << std::endl;
    std::cout << head_1st << std::endl;
    std::cout << head_2nd << std::endl; 
    std::cout << delimiter << std::endl;
}

void printfoot(double total_time){
    std::string foot_1st = "end of program";
    std::string foot_2nd = "cpu time (in seconds): ";   
   
    std::cout << delimiter << std::endl;
    std::cout << foot_1st << std::endl;
    std::cout << foot_2nd << total_time << std::endl; 
    std::cout << delimiter << std::endl;
}