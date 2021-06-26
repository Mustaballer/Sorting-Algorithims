#ifndef MERGESORT_H
#define MERGESORT_H

#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include <ctime>

class Mergesort
{
    public:
        Mergesort();
        void mergeSort(std::vector<int>&, int, int);
        void merged(std::vector<int>&, int, int, int);
        void run(std::vector<int>&);

    private:
        long long counter;

};

#endif // MERGESORT_H
