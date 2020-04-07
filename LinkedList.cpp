//
// Created by sarra on 3/30/2020.
//

#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    cout << "Destructor called" << endl;
    Node* current = head;
    if (current->next == nullptr) {
        delete current;
    }
    else {
        while (current->next != nullptr) {
            Node* previous = current;
            current = current->next;
            delete previous;
        }
    }

}

LinkedList::LinkedList(const LinkedList &list) {
    cout << "Copy constructor called" << endl;
    head = new Node;
    *head = *(list.head);
}

LinkedList &LinkedList::operator=(LinkedList rhs) {
    cout << "Assignment operator called" << endl;
    swap(*this, rhs);
    return *this;
}
