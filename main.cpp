#include <cstdio>
#include <iostream>

#include "modules/core/include/Sort.h"

using namespace std;


int main() {
    /* Code to test the MergeSort function. */

    int A[] = {6,2,3,1,9,10,15,13,12,17}; // creating an array of integers.
    int numberOfElements;
//    int *nums = A;

    numberOfElements = sizeof(A)/sizeof(A[0]);
    Sort sort;

    // Calling merge sort to sort the array.
    sort.MergeSort(A, numberOfElements);
    sort.Print(A, numberOfElements);

}