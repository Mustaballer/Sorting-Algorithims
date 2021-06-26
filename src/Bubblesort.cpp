#include "Bubblesort.h"

Bubblesort::Bubblesort(std::vector<int> a, std::vector<int> b, std::vector<int> c) {
    arr1 = a;
    arr2 = b;
    arr3 = c;
    counter = 0;
}

void Bubblesort::sort1() {

    // Using time point and system_clock
    std::chrono::time_point<std::chrono::system_clock> start, stop;

    // sorting first array
    bool swapped;
    start = std::chrono::system_clock::now();
    for (int i = 0; i < arr1.size(); i++) {
        swapped = false;
        counter++;
        for (int j = 0; j < arr1.size()-i-1; j++) {
            if (arr1[j] > arr1[j+1]) {
                int temp = arr1[j+1];
                arr1[j+1] = arr1[j];
                arr1[j] = temp;
                swapped = true;
                counter+=4;
            }
            counter++;
            counter+=3;
        }

        if (swapped == false) {
            break;
            counter++;
        }
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

void Bubblesort::sort2() {
    // Using time point and system_clock
    std::chrono::time_point<std::chrono::system_clock> start, stop;

    // sorting first array
    bool swapped;
    start = std::chrono::system_clock::now();
    for (int i = 0; i < arr2.size(); i++) {
        swapped = false;
        counter++;
        for (int j = 0; j < arr2.size()-i-1; j++) {
            if (arr2[j] > arr2[j+1]) {
                int temp = arr2[j+1];
                arr2[j+1] = arr2[j];
                arr2[j] = temp;
                swapped = true;
                counter+=4;
            }
            counter++;
            counter+=3;
        }

        if (swapped == false) {
            break;
            counter++;
        }
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

void Bubblesort::sort3() {
    // Using time point and system_clock
    std::chrono::time_point<std::chrono::system_clock> start, stop;

    // sorting first array
    bool swapped;
    start = std::chrono::system_clock::now();
    for (int i = 0; i < arr3.size(); i++) {
        swapped = false;
        counter++;
        for (int j = 0; j < arr3.size()-i-1; j++) {
            if (arr3[j] > arr3[j+1]) {
                int temp = arr3[j+1];
                arr3[j+1] = arr3[j];
                arr3[j] = temp;
                swapped = true;
                counter+=4;
            }
            counter++;
            counter+=3;
        }

        if (swapped == false) {
            break;
            counter++;
        }
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

