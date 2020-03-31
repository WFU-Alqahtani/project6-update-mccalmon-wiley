//
// Created by sarra on 3/30/2020.
//

#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    Node* current = head;
    Node* previous = head;

}

LinkedList::LinkedList(const LinkedList &list) {

}

LinkedList &LinkedList::operator=(const LinkedList &rhs) {
    return <#initializer#>;
}
