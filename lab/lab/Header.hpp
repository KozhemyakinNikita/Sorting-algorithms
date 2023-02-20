//
//  Header.hpp
//  lab

#ifndef Realization_hpp
#define Realization_hpp

#include <stdio.h>
#include <iostream>

using std::cin;
using std::cout;

class Sort {
private:
    int *array;
    int sizeOfArray;
    
public:
    Sort(int size);
    ~Sort();
    void printArray();
    void pushArray();
    
    
};

#endif /* Realization_hpp */
