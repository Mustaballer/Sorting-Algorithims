#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include <ctime>

class Quicksort
{
    public:
        Quicksort();
        void qSort(std::vector<int>&, int s, int e);
        int partitionQ(std::vector<int>&, int s, int e);
        void run(std::vector<int>&);

    private:
        long long counter;
};

#endif // QUICKSORT_H
