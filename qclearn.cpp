// 
/* This is the main program */
//
#include <iostream> 
#include <cstdio>   // includes prinf function  
#include <time.h>   // allows one to check time

using namespace std; 

int main() {
  clock_t start = clock(); // initial time
  char head_1st[] = "QCLearn";
  char head_2nd[] = "Classical problems in quantum chemistry";
  char tail[] = "cpu time (in seconds): ";
  char delimiter[] = "######################################";
//
/* Printing the header*/
//
  printf("%s \n", delimiter);  
  printf("%s \n", head_1st);
  printf("%s \n", head_2nd);
  printf("%s \n", delimiter);  


//
/* Calculating and printing execution time*/
//
  clock_t end = clock(); // final time
  double total_time = double(end - start)/CLOCKS_PER_SEC; // total execution time in seconds

  cout << "######################################" << endl;
  printf("%s%g \n", tail, total_time);
  cout << "######################################" << endl;
//
/* End of program */
//
return 0;    
}    