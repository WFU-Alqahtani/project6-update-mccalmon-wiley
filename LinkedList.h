//
// Created by sarra on 3/30/2020.
//

#ifndef BINARYINSERTIONSORT_LINKEDLIST_H
#define BINARYINSERTIONSORT_LINKEDLIST_H

#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList{

public:
    //Constructors
    LinkedList();
    LinkedList(const LinkedList & list);

    //Assignment Operator
    LinkedList &operator=(LinkedList rhs);

    //Destructor
    ~LinkedList();

    //Functions. You may not need to use them all
    //void append(Data obj);
    //bool Delete (Data obj);
    //Data find (Data obj)
    void printList();
    void InsertionSort(vector<Data> v);

private:
    Node* head;

};

#endif //BINARYINSERTIONSORT_LINKEDLIST_H