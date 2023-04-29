//
//  main.cpp
//  lab



#include <iostream>
#include "Header.hpp"
#include <ctime>
#include <chrono>
using namespace std;


int main() {
    Sort arrayOfHundred(100);
    Sort arrayOfFiveHundred(500);
    Sort arrayOfFiveThousand(5000);

    ifstream inputHundred;
    ifstream inputFiveHundred;
    ifstream inputFiveThousand;



    int viewOfArray;
    cout << "Select view of Numbers:\n 1.Sorted Numbers\n 2.Back Sorted Numbers\n 3.Part Sorted Numbers\n";
    cout << "Enter the number: ";
    cin >> viewOfArray;

    if (viewOfArray == 1) {
        inputHundred.open(
                          "sorted100.txt"
                          );
        inputFiveHundred.open(
                              "sorted500.txt"
                              );
        inputFiveThousand.open(
                               "sorted5000.txt"
                               );
    } else if (viewOfArray == 2) {
        inputHundred.open(
                          "backSorted100.txt"
                          );
        inputFiveHundred.open(
                              "backSorted500.txt"
                              );
        inputFiveThousand.open(
                               "backSorted5000.txt"
                               );
    } else {
        inputHundred.open(
                          "partSorted100.txt"
                          );
        inputFiveHundred.open(
                              "partSorted500.txt"
                              );
        inputFiveThousand.open(
                               "partSorted5000.txt"
                               );
    }

    if (!inputHundred.is_open() && !inputFiveHundred.is_open() && !inputFiveThousand.is_open()) {
        cout << "Files are not open\n";
        return 0;
    }
    //MARK: - 100

    arrayOfHundred.readFromFile(inputHundred, 100);

    cout << "Amout of elements: 100" << endl;
    auto start = chrono::high_resolution_clock::now();
    arrayOfHundred.selectionSort();
    auto end = chrono::high_resolution_clock::now();
    long long time = chrono::duration_cast<chrono::microseconds>(end - start).count();
    cout << "Run time of selectionSort: " << time << " (ms)" << endl;

    arrayOfHundred.readFromFile(inputHundred, 100);

    start = chrono::high_resolution_clock::now();
    arrayOfHundred.quickSort(0, 100);
    end = chrono::high_resolution_clock::now();
    time = chrono::duration_cast<chrono::microseconds>(end - start).count();
    cout << "Run time of quickSort: " << time << " (ms)" << '\n';

    //MARK: - 500

    arrayOfFiveHundred.readFromFile(inputFiveHundred, 500);
    cout << "\nAmout of elements: 500" << '\n';

    start = chrono::high_resolution_clock::now();
    arrayOfFiveHundred.selectionSort();
    end = chrono::high_resolution_clock::now();
    time = chrono::duration_cast<chrono::microseconds>(end - start).count();
    cout << "Run time of selectionSort: " << time << " (ms)" << '\n';

    arrayOfFiveHundred.readFromFile(inputFiveHundred, 500);

    start = chrono::high_resolution_clock::now();
    arrayOfFiveHundred.quickSort(0, 499);
    end = chrono::high_resolution_clock::now();
    time = chrono::duration_cast<chrono::microseconds>(end - start).count();
    cout << "Run time of quickSort: " << time << " (ms)" << '\n';


    //MARK: - 5000

    arrayOfFiveThousand.readFromFile(inputFiveThousand, 5000);
    cout << "\nAmout of elements: 5000" << '\n';

    start = chrono::high_resolution_clock::now();
    arrayOfFiveThousand.selectionSort();
    end = chrono::high_resolution_clock::now();
    time = chrono::duration_cast<chrono::microseconds>(end - start).count();
    cout << "Run time of selectionSort: " << time << " (ms)" << '\n';

    arrayOfFiveThousand.readFromFile(inputFiveThousand, 5000);

    start = chrono::high_resolution_clock::now();
    arrayOfFiveThousand.quickSort(0, 4999);
    end = chrono::high_resolution_clock::now();
    time = chrono::duration_cast<chrono::microseconds>(end - start).count();
    cout << "Run time of quickSort: " << time << " (ms)" << '\n';
    
    return 0;
}

