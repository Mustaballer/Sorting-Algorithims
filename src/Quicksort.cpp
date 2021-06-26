#include "Quicksort.h"

Quicksort::Quicksort() {
    counter = 0;
}

void Quicksort::qSort(std::vector<int> &arr, int s, int e) {
    if(s<e) {
        int p = partitionQ(arr,s, e);
        qSort(arr, s, (p-1));  // recursive QS call for left partition
        qSort(arr, (p+1), e);  // recursive QS call for right partition
        counter+=3;
    }
    counter++;
}

int Quicksort::partitionQ(std::vector<int> &arr, int s, int e) {
    int pivot = arr[e];
    int pIndex = s;
    counter+=2;

    for(int i = s; i<e; i++) {
        if(arr[i]<pivot) {
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
            counter+=4;
        }
        counter+=4;
    }

    int temp = arr[e];
    arr[e] = arr[pIndex];
    arr[pIndex] = temp;
    counter+=3;

    return pIndex;
}

void Quicksort::run(std::vector<int> &arr) {
    // Using time point and system_clock
    std::chrono::time_point<std::chrono::system_clock> start, stop;

    // sorting first array
    start = std::chrono::system_clock::now();
    qSort(arr, 0, arr.size() - 1);
    stop = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = stop - start;

    // print to console
    for (auto val: arr) {
        std::cout<<val<<std::endl;
    }
    std::cout<<elapsed_seconds.count()<<"s\n";
    std::cout<<"\nThe number of operations are "<<counter<<std::endl;
}

