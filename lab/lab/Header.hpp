//
//  Header.hpp
//  lab

#ifndef Realization_hpp
#define Realization_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>

using std::cin;
using std::cout;

class Sort {
private:
    int *array;
    int sizeOfArray;
    std::ifstream file;
    
public:
    Sort(int size);
    ~Sort();
    void readFromFile(std::ifstream& file, int n);
    void printArray();
    void pushArray();
    
    void swap(int *a, int *b);
    void selectionSort();
    
    int partition(int arr[], int start, int end);
    void quickSort(int start, int end);
    
};

#endif 
