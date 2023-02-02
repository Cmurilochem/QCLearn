#ifndef CLASSES_H_
#define CLASSES_H_

#include <iostream>

class Job{
  private:
    std::string type;
    double param1, param2;

  public: 
    Job();                                 // constructor
    void getData(std::string filename);    // reading private attributes from file
    void putData();                        // printing relevant data
};

#endif