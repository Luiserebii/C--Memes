#ifndef GUARD_MEMELIST_h
#define GUARD_MEMELIST_h

#include "node.h"

template <class T>
class LinkedList {
    private:
        Node<T>* head;
        
    public:
        LinkedList();

        void push_back(T val);

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

    } else {
        //In the case that we're blank, let's generate a new node and stick the value in:
        Node<T>* n = new Node<T>(val);
        head = n;
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
