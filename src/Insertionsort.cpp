#include "Insertionsort.h"

Insertionsort::Insertionsort(std::vector<int> a, std::vector<int> b, std::vector<int> c) {
    arr1 = a;
    arr2 = b;
    arr3 = c;
    counter = 0;
}

void Insertionsort::Insertionsort::sort1() {

    // Using time point and system_clock
    std::chrono::time_point<std::chrono::system_clock> start, stop;

    // sorting first array
    start = std::chrono::system_clock::now();

    // code stuff for sorting
    int j, key;
    for (int i = 1; i < arr1.size(); i++) {
        j = i -1;
        key = arr1[i];
        counter+=2;

        while (j >= 0 && arr1[j] > key) {
            arr1[j+1] = arr1[j];
            j = j -1;
            counter+=2;
        }
        counter+=2;
        arr1[j+1] = key;
        counter+=4;
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

void Insertionsort::Insertionsort::sort2() {
    // Using time point and system_clock
    std::chrono::time_point<std::chrono::system_clock> start, stop;

    // sorting first array
    start = std::chrono::system_clock::now();

    // code stuff for sorting
    int j, key;
    for (int i = 1; i < arr2.size(); i++) {
        j = i -1;
        key = arr2[i];
        counter+=2;

        while (j >= 0 && arr2[j] > key) {
            arr2[j+1] = arr2[j];
            j = j -1;
            counter+=2;
        }
        counter+=2;
        arr2[j+1] = key;
        counter+=4;
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

void Insertionsort::Insertionsort::sort3() {
    // Using time point and system_clock
    std::chrono::time_point<std::chrono::system_clock> start, stop;

    // sorting first array
    start = std::chrono::system_clock::now();

    // code stuff for sorting
    int j, key;
    for (int i = 1; i < arr3.size(); i++) {
        j = i -1;
        key = arr3[i];
        counter+=2;

        while (j >= 0 && arr3[j] > key) {
            arr3[j+1] = arr3[j];
            j = j -1;
            counter+=2;
        }
        counter+=2;
        arr3[j+1] = key;
        counter+=4;
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

