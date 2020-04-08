//
// Created by sarra on 3/30/2020.
//

#include "LinkedList.h"
#include <vector>

LinkedList::LinkedList() {
    head = new Node();
}

LinkedList::~LinkedList() {
    cout << "Destructor called" << endl;
    Node* current = head;
    while (head->next != nullptr) {
        head = head ->next;
        delete current;
        current = head;
    }

}

LinkedList::LinkedList(const LinkedList &list) {
    cout << "Copy constructor called" << endl;
    Node* current = list.head;
    if (current->next == nullptr) {
        head = new Node(current->value, nullptr);
        current = current ->next;
    }

    while (current->next != nullptr) {
        Node* newNode = new Node(current->value, current->next);
        current = current ->next;
    }
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
            if (v.at(i) > previous->value && v.at(i) <= current->value) {
                Node* nextNode = new Node(v.at(i), current);
                previous->next = nextNode;
                didInsert = true;
                break;
            }
        }
        if (!didInsert) {
            Node* nextNode = new Node(v.at(i), nullptr);
            current->next = nextNode;
            continue;
        }

    }
    while (head -> next != nullptr) {
        head = head->next;
        cout << head->value << endl;
    }

}


void LinkedList::printList() {
    Node* current = head;
    while(current->next != nullptr) {
        current = current->next;
        cout << current->value << endl;
    }
}