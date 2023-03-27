//
//  main.cpp
//  lab


#include <iostream>
#include "Header.hpp"
#include <ctime>

int main() {
    
    int sizeOfArray;
    cout << "Enter number of elements in array: ";
    cin >> sizeOfArray;
    time_t t1=time(NULL);
    
    Sort array(sizeOfArray);
    array.pushArray();
    array.printArray();
    array.selectionSort();
    cout << "Sorted array by selestion sort: \n";
    array.printArray();
    time_t t2=time(NULL);
 
//    std::cout << "Время работы программы равно " << t2-t1 << std::endl;
    
    
    
    return 0;
}
