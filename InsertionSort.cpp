#include <iostream>
#include <vector>
#include <cassert>
#include "BinaryInsertionSort.h"
#include "Node.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include "LinkedList.h"
using namespace std;

ostream& operator<<(ostream& os, const Data& d)
{
    os << d.data;
    return os;
}

int main() {
    string dataStr;
    double dataNum;
    ifstream inFile;
    inFile.open("../data.txt");
    string temp;
    string line;
   //read the file name of your dataset


    vector<Data> v(2017);
    for(int i = 0; i < v.size(); i++)
        {
        if (!inFile.eof()) {

            getline(inFile, temp, ',');
            getline(inFile, temp, ',');
            getline(inFile, temp, ',');
            getline(inFile, dataStr, ',');
            getline(inFile, line, '\n');

            dataNum = stod(dataStr);

            Data data(dataNum);

            v.at(i) = data;
        }

        }

    inFile.close();
    // populate the vector with the data from your data set


    // FINISH ME
    LinkedList list;
    clock_t start_listInsertionSort = clock();
    list.InsertionSort(v);
    clock_t end_listInsertionSort = clock();
    list.printList();

    // binary insertion sort
    clock_t start_insertionSort = clock();
    insertionSort(v, v.size());
    clock_t end_insertionSort = clock();

    /*
    // check if sorted
    for (int i = 1; i < v.size(); i++) {
        assert(v[i-1] <= v[i]);
    }
*/
    // print out sorted list
    for (int i = 0; i < v.size(); i++) {
        //you should ovrride << to YourClass
        cout << v[i] << endl;
    }

    double elapsed_insertionSort = double(end_insertionSort - start_insertionSort) / CLOCKS_PER_SEC;
    cout << elapsed_insertionSort << endl;
    double elapsed_listinsertionSort = double(end_listInsertionSort - start_listInsertionSort) / CLOCKS_PER_SEC;
    cout << elapsed_listinsertionSort << endl;
}