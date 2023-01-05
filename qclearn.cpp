// 
/* This is the main program */
//
#include <iostream>  
#include <time.h>      // allows one to check time
#include <string>      // when dealing with strings
#include "head_foot.h" // file with external definitions

using namespace std; 

int main(){
  clock_t start = clock(); // initial time 
//
/* Printing the header*/
//
  printhead();

//
/* Calculating execution time*/
//
  clock_t end = clock(); // final time
  
  double total_time = double(end - start)/CLOCKS_PER_SEC; // total execution time in seconds
//
/* Printing the footer*/
//
  printfoot(total_time);
//
/* End of program */
//
return 0;    
}    