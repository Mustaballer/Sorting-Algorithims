#include <iostream>
#include <fstream>
#include <vector>
#include "Bubblesort.h"
#include "Insertionsort.h"
#include "Mergesort.h"
#include "Selectionsort.h"
#include "Quicksort.h"

using namespace std;

int main()
{
    int num = 0;
    vector<int> numArray1;
    vector<int> numArray2;
    vector<int> numArray3;
    ifstream inFile;

    // num array 1
    inFile.open("r1.txt");


    while (inFile >> num) {
        numArray1.push_back(num);
    }
    inFile.close();

    // num array 2
    inFile.open("r2.txt");


    while (inFile >> num) {
        numArray2.push_back(num);
    }
    inFile.close();

    // num array 3
    inFile.open("r3.txt");


    while (inFile >> num) {
        numArray3.push_back(num);
    }
    inFile.close();



    // bubble sort
    //Bubblesort bubblesort(numArray1, numArray2, numArray3);
    //bubblesort.sort3();
    //bubblesort.sort2();
    //bubblesort.sort3();

    // insert sort
    //Insertionsort insertionsort(numArray1, numArray2, numArray3);
    //insertionsort.sort3();

    // merge sort
    //Mergesort mergesort;
    //mergesort.run(numArray3);

    // selection sort
    //Selectionsort selectionsort(numArray1, numArray2, numArray3);
    //selectionsort.sort3();

    // quick sort
    Quicksort quicksort;
    quicksort.run(numArray3);



    return 0;
}

