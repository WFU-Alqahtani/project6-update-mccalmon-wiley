//
// Created by Cade Wiley on 3/31/20.
//
#include "Data.h"
Data::Data() {

}
Data::Data(double d){
    data=d;
}
bool Data::operator<=(const Data &rhs) {
    if(this->data <= rhs.data)
    {return true;}
    else{
        return false;
    }
}
bool Data::operator>(const Data &rhs) {
    if(this->data > rhs.data)
    {return true;}
    else{
        return false;
    }
}

bool Data::operator==(const Data &rhs) {
    if (this->data == rhs.data) {
        return true;
    }
    else {
        return false;
    }

}

Data& Data::operator=(const Data &rhs) {
    this -> data = rhs.data;
    return *this;
}
