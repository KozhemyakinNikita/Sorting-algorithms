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
//        cin >> array[i];
        array[i] = rand() % 1000;
    }
}

void Sort::printArray() {
    for (int i = 0; i < sizeOfArray; i++) {
        cout << " [" << i << "]" << array[i];
    }
    cout << '\n';
}

void Sort::swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Sort::selectionSort() {
    int i, j, minIndex;
    for (i = 0; i < sizeOfArray - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < sizeOfArray; j++) {
            if (array[j] < array[minIndex])
                minIndex = j;
        }
        if (minIndex != i)
            swap(&array[minIndex], &array[i]);
    }
}
