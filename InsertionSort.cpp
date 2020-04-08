#include <iostream>
#include <vector>
#include <cassert>
#include "BinaryInsertionSort.h"
#include "Node.h"
#include <iostream>
#include <fstream>
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
    inFile.open(../"data.txt");
    string temp;
    string line;
   //read the file name of your dataset

    vector<Data> v(2017);
    for(int i = 0; i < v.size(); i++)
        {

            getline(inFile, temp, ',');
            getline(inFile, temp, ',');
            getline(inFile, temp, ',');
            getline(inFile, dataStr, ',');
            getline(inFile, line, '\n');

            dataNum = stoi(dataStr);

            Data data(dataNum);

            v.at(i) = data;

        }

    inFile.close();
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