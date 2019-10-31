#ifndef GUARD_MEMELIST_h
#define GUARD_MEMELIST_h

#include <cstddef>
#include "node.h"
#include <iostream>

using std::cout; 
using std::endl;
template <class T>
class LinkedList {
    private:
        Node<T>* head;
        
    public:
        LinkedList();

        void push_back(T val);
        void pop();

        Node<T>* begin() const;
        Node<T>* end() const;

        Node<T>* last() const;

        T get(size_t index);
        size_t size() const;

        //Accessors/Mutators
        Node<T>* getHead() const;
        void setHead(Node<T>* n);


};

template <class T>
LinkedList<T>::LinkedList(): head(nullptr) {
    
}


template <class T>
void LinkedList<T>::push_back(T val) {
    if(head != end()) {
        Node<T>* n = head;
        while(n->getNext() != end()) {
            n = n->getNext(); //Iterate upwards
        }

        //Create our new node
        Node<T>* newNode = new Node<T>(val);

        //Set the pointer of the newest end
        n->setNext(newNode);
        cout << "Adding a new node: " << val << endl;

    } else {
        //In the case that we're blank, let's generate a new node and stick the value in:
        Node<T>* n = new Node<T>(val);
        head = n;
        cout << "Making a new head: " << val << endl;
    }
}

template <class T>
void LinkedList<T>::pop() {
}

template <class T>
Node<T>* LinkedList<T>::begin() const {
    return head;
}

//Since nullptr will always signify the +1 after the end of the range, we return this
template <class T>
Node<T>* LinkedList<T>::end() const {
    return nullptr; 
}

template <class T>
Node<T>* LinkedList<T>::last() const {
    Node<T>* n = head;
    while(n->getNext() != end()) {
        n = n->getNext();
    }
    return n;
}

template <class T>
T LinkedList<T>::get(size_t index) {
    if(index >= size()) throw "Out of bounds";

    //Start from the head
    Node<T>* n = head;
    //Iterate upwards, based on index
    for(size_t i = 0; i < index; ++i) {
        n = n->getNext();
    }
    return n->getVal();
}

//Arguably, this is fairly expensive as an operation
template <class T>
size_t LinkedList<T>::size() const {

    if(head != end()) {
        //Start at one, including the valid one we have at head
        size_t s = 1;
        for(Node<T>* n = head; n->getNext() != end(); ++s) {
            n = n->getNext();
            cout << "IT: " << n->getVal() << endl;
        }
        return s;
    } else {
        return 0;
    }
}

template <class T>
Node<T>* LinkedList<T>::getHead() const {
    return head;
}

template <class T>
void LinkedList<T>::setHead(Node<T>* n) {
    head = n;
}

#endif
