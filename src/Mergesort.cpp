#include "Mergesort.h"

Mergesort::Mergesort() {
    counter = 0;
}

void Mergesort::merged(std::vector<int> &arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    counter+=2;

    // Create temp arrays
    int L[n1], R[n2];
    counter+=2;

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
        counter+=4;
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
        counter+=4;

    // Merge the temp arrays back into arr[l..r]

    // Initial index of first subarray
    int i = 0;

    // Initial index of second subarray
    int j = 0;

    // Initial index of merged subarray
    int k = l;

    counter+=3;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
            counter+=2;
        } else {
            arr[k] = R[j];
            j++;
            counter+=2;
        }
        k++;
        counter+=4;
    }

    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
        counter+=4;
    }

    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
        counter+=4;
    }


}

void Mergesort::mergeSort(std::vector<int> &arr, int l, int r) {
    if(l>=r) {
        return;//returns recursively
    }
    counter++;
    int m = l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merged(arr,l,m,r);
    counter+=4;
}

void Mergesort::run(std::vector<int> &arr) {
    // Using time point and system_clock
    std::chrono::time_point<std::chrono::system_clock> start, stop;

    // sorting first array
    start = std::chrono::system_clock::now();
    mergeSort(arr, 0, arr.size() - 1);
    stop = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = stop - start;

    // print to console
    for (auto val: arr) {
        std::cout<<val<<std::endl;
    }
    std::cout<<elapsed_seconds.count()<<"s\n";
    std::cout<<"\nThe number of operations are "<<counter<<std::endl;
}



