//
// Created by huber stark on 9/5/19.
//

#ifndef UNTITLED_SORT_H
#define UNTITLED_SORT_H
#include <stdio.h>
#include <iostream>
using namespace std;
class Sort{

public:

    void MergeSort(int *A, int n);
    void Merge(int*A, int *L,int leftCount,int *R,int rightCount);
    void Print(int*A, int num);




};
#endif //UNTITLED_SORT_H
