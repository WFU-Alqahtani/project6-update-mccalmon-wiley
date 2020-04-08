//
// Created by Cade Wiley on 3/31/20.
//

using namespace std;

class Data {
public:
    Data();
    Data(double d);
    bool operator<=(const Data &rhs);
    bool operator>(const Data &rhs);
    bool operator<<(const Data &rhs);

private:
    double data;
};

#ifndef BINARYINSERTIONSORT_DATA_H
#define BINARYINSERTIONSORT_DATA_H

#endif //BINARYINSERTIONSORT_DATA_H
