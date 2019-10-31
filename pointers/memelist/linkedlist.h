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
    if(head != nullptr) {
        Node<T>* n = head;
        while(n->getNext() != nullptr) {
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
Node<T>* LinkedList<T>::begin() {
    return head;
}

template <class T>
Node<T>* LinkedList<T>::end() {
    Node<T>* n = head;
    while(n->getNext() != nullptr) {
        n = n->getNext();
    }
    return n;
}

template <class T>
T LinkedList<T>::get(size_t index) {
    //Start from the head
    Node<T>* n = head;
    //Iterate upwards, based on index
    for(size_t i = 0; i < index; ++i) {
        n = n->getNext();
        if(n == nullptr) {
            throw "Out of bounds";
        }
    }
    return n->getVal();
}

template <class T>
size_t LinkedList<T>::size() const {

    if(head != nullptr) {
        //Start at one, including the valid one we have at head
        size_t s = 1;
        for(Node<T>* n = head; n->getNext() != nullptr; ++s) {
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
