#ifndef BINARYINSERTIONSORT_H
#define BINARYINSERTIONSORT_H

#include <vector>
#include "Data.h"
using namespace std;

int binarySearch(vector<Data> a, int item, int low, int high);
void insertionSort(vector<Data> &a, int n);

#endif //BINARYINSERTIONSORT_H
