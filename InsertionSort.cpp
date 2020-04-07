#include <iostream>
#include <vector>
#include <cassert>
#include "BinaryInsertionSort.h"
#include "Node.h"
#include "Data.h"
using namespace std;

int main() {

    string filename;
   //read the file name of your dataset

    vector<Data> v;

    // populate the vector with the data from your data set

    // binary insertion sort
    insertionSort(v, v.size());

    // check if sorted
    for (int i = 1; i < v.size(); i++) {
        assert(v[i-1] <= v[i]);
    }

    // print out sorted list
    for (int i = 0; i < v.size(); i++) {
        //you should ovrride << to YourClass
        cout << v[i] << endl;
    }

    // FINISH ME

}