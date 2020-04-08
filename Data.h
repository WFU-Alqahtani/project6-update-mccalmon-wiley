//
// Created by Cade Wiley on 3/31/20.
//
#ifndef BINARYINSERTIONSORT_DATA_H
#define BINARYINSERTIONSORT_DATA_H
#include <iostream>
using namespace std;

class Data {
public:
    Data();
    Data(double d);
    bool operator<=(const Data &rhs);
    bool operator>(const Data &rhs);
    bool operator==(const Data &rhs);
    Data& operator=(const Data &rhs);
    friend ostream& operator<<(ostream& os, const Data& d);


private:
    double data;
};



#endif //BINARYINSERTIONSORT_DATA_H
