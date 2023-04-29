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

void Sort::readFromFile(std::ifstream& file, int n) {
    
    for (int i = 0; i < n; i++) {
            file >> array[i];
    }
}

void Sort::pushArray() {
    for (int i = 0; i < sizeOfArray; i++) {
        array[i] = rand() % 100;
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

int Sort::partition(int arr[], int start, int end) {
 
    int pivot = arr[(end + start)/2];
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
 
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(&arr[pivotIndex], &arr[start]);
//    printArray();
 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(&arr[i++], &arr[j--]);
//            printArray();
        }
    }
 
    return pivotIndex;
}
 
void Sort::quickSort(int start, int end) {
    
    // base case
    if (start >= end)
        return;
    
    // partitioning the array
    int p = partition(array, start, end);
    
    
    // Sorting the left part
    quickSort(start, p - 1);
    
    // Sorting the right part
    quickSort(p + 1, end);
}
