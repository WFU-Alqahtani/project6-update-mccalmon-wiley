#include <iostream>
#include <vector>
#include <cassert>
#include "BinaryInsertionSort.h"
#include "Node.h"
#include "Data.h"
#include <iostream>
#include <fstream>
using namespace std;
int main() {

    double data;
    ifstream inFile;
    inFile.open("data.txt");
    string temp;
    string line;


   //read the file name of your dataset


    vector<Data> v;

    for(int i = 0; i < v.size(); i++)
        if(inFile.is_open())
        {
            getline(inFile, temp, ',');
            getline(inFile, line, '\n');
            v.at(i) = data;
        }
    inFile.close();
    // popula"te the vector with the data from your data set

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