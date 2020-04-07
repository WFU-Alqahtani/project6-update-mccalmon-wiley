#ifndef NODE_H
#define NODE_H
#include "Data.h"

class Node {
public:
    // Node constructor
    Node(Data v , Node* n = nullptr)
    {
        value = v;
        next = n;
    }

    //Destructor
    ~Node(){
        delete next;
    }
    friend class LinkedList;
private:

    Data value;
    Node* next;

};

#endif //NODE_H
