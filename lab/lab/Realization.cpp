//
//  Realization.cpp
//  lab

#include "Header.hpp"

Sort::Sort(int size) {
    sizeOfArray = size;
    array = new int[sizeOfArray];
}

Sort::~Sort() {
    delete[] array;
}

void Sort::pushArray() {
    for (int i = 0; i < sizeOfArray; i++) {
        cin >> array[i];
    }
}

void Sort::printArray() {
    for (int i = 0; i < sizeOfArray; i++) {
        cout << " [" << i << "]" << array[i];
    }
    cout << '\n';
}
