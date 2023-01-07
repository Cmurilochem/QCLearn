// 
/* This is the main program */
//
#include <iostream>  
#include <time.h>      // allows one to check time
#include <string>      // when dealing with strings
#include "head_foot.h" // file with external functions for printing program heading and footer
#include "classes.h"   // file with external definitions of classes (objects with attributes and methods)
#include "reading.h"   // file to read input

using namespace std; 

int main(){
  clock_t start = clock(); // initial time 
//
/* Printing header*/
//
  printhead();
//
/* object defining the job to run */
//
  Job qc_problem;
//
/* reading the input file */
//
  reading(qc_problem);

  //cout << qc_problem.type << endl;  
//
/* Calculating execution time*/
//
  clock_t end = clock(); // final time
  
  double total_time = double(end - start)/CLOCKS_PER_SEC; // total execution time in seconds
//
/* Printing footer*/
//
  printfoot(total_time);
//
/* End of program */
//
return 0;    
}    