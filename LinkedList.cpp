//
// Created by sarra on 3/30/2020.
//

#include "LinkedList.h"
#include <vector>

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
    head = new Node(0, nullptr);
    *head = *(list.head);
}

LinkedList &LinkedList::operator=(LinkedList rhs) {
    cout << "Assignment operator called" << endl;
    swap(*this, rhs);
    return *this;
}

void LinkedList::InsertionSort(vector<Data> v) {
    Node* current = head;
    Node* previous = current;
    bool didInsert;
    for(int i = 0; i < v.size(); i++) {
        didInsert = false;
        current = head;
        previous = current;
        if (current->next == nullptr) {
            Node* nextNode = new Node(v.at(i), nullptr);
            current->next = nextNode;
            didInsert = true;
            continue;
        }
        while (current->next != nullptr) {
            previous = current;
            current = current->next;
            if (previous->value <= v.at(i) && current->value > v.at(i)) {
                Node* nextNode = new Node(v.at(i), nullptr);
                previous->next = nextNode;
                didInsert = true;
                break;
            }
        }
        if (!didInsert) {
            Node* nextNode = new Node(v.at(i), nullptr);
            current->next = nextNode;
        }

    }

}