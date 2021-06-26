#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include <ctime>

class Selectionsort
{
    public:
        Selectionsort(std::vector<int>, std::vector<int>, std::vector<int>);
        void sort1();
        void sort2();
        void sort3();


    private:
        std::vector<int> arr1;
        std::vector<int> arr2;
        std::vector<int> arr3;
        long long counter;
};

#endif // SELECTIONSORT_H
