#include "Selectionsort.h"

Selectionsort::Selectionsort(std::vector<int> a, std::vector<int> b, std::vector<int> c) {
    arr1 = a;
    arr2 = b;
    arr3 = c;
    counter = 0;
}

void Selectionsort::sort1() {

    // Using time point and system_clock
    std::chrono::time_point<std::chrono::system_clock> start, stop;

    // sorting first array
    start = std::chrono::system_clock::now();
    int i, j, minIndex;
    for (i = 0; i < arr1.size()-1; i++) {
        minIndex = i;

        for (j = i+1; j < arr1.size(); j++) {
            if (arr1[j] < arr1[minIndex]) {
                minIndex = j;
                counter++;
            }
            counter+=4;
        }

        int temp = arr1[minIndex];;
        arr1[minIndex] = arr1[i];
        arr1[i] = temp;
        counter+=7;
    }

    stop = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = stop - start;

    // print to console
    for (auto val: arr1) {
        std::cout<<val<<std::endl;
    }
    std::cout<<elapsed_seconds.count()<<"s\n";
    std::cout<<"\nThe number of operations are "<<counter<<std::endl;
}

void Selectionsort::sort2() {
    // Using time point and system_clock
    std::chrono::time_point<std::chrono::system_clock> start, stop;

    // sorting first array
    start = std::chrono::system_clock::now();
    int i, j, minIndex;
    for (i = 0; i < arr2.size()-1; i++) {
        minIndex = i;

        for (j = i+1; j < arr2.size(); j++) {
            if (arr2[j] < arr2[minIndex]) {
                minIndex = j;
                counter++;
            }
            counter+=4;
        }

        int temp = arr2[minIndex];;
        arr2[minIndex] = arr2[i];
        arr2[i] = temp;
        counter+=7;
    }

    stop = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = stop - start;

    // print to console
    for (auto val: arr2) {
        std::cout<<val<<std::endl;
    }
    std::cout<<elapsed_seconds.count()<<"s\n";
    std::cout<<"\nThe number of operations are "<<counter<<std::endl;
}

void Selectionsort::sort3() {
    // Using time point and system_clock
    std::chrono::time_point<std::chrono::system_clock> start, stop;

    // sorting first array
    start = std::chrono::system_clock::now();
    int i, j, minIndex;
    for (i = 0; i < arr3.size()-1; i++) {
        minIndex = i;

        for (j = i+1; j < arr3.size(); j++) {
            if (arr3[j] < arr3[minIndex]) {
                minIndex = j;
                counter++;
            }
            counter+=4;
        }

        int temp = arr3[minIndex];;
        arr3[minIndex] = arr3[i];
        arr3[i] = temp;
        counter+=7;
    }

    stop = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = stop - start;

    // print to console
    for (auto val: arr3) {
        std::cout<<val<<std::endl;
    }
    std::cout<<elapsed_seconds.count()<<"s\n";
    std::cout<<"\nThe number of operations are "<<counter<<std::endl;
}




