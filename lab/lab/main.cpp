//
//  main.cpp
//  lab


#include <iostream>
#include "Header.hpp"

int main() {
    int sizeOfArray;
    cin >> sizeOfArray;
    Sort array(sizeOfArray);
    array.pushArray();
    array.printArray();
    
    
    
    return 0;
}
