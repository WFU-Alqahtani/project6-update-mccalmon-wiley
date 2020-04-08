//
// Created by Cade Wiley on 3/31/20.
//
#ifndef BINARYINSERTIONSORT_DATA_H
#define BINARYINSERTIONSORT_DATA_H

class Data {
public:
    Data();
    Data(double d);
    bool operator<=(const Data &rhs);
    bool operator>(const Data &rhs);
    bool operator==(const Data &rhs);
    Data& operator=(const Data &rhs);


private:
    double data;
};



#endif //BINARYINSERTIONSORT_DATA_H
