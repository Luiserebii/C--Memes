#ifndef GUARD_MEMELIST_h
#define GUARD_MEMELIST_h

#include "node.h"

template <class T>
class LinkedList {
    private:
        Node<T>* head;
        
    public:
        LinkedList();

        Node<T>* getHead() const;
        void setHead(Node<T>* n);


};

template <class T>
LinkedList<T>::LinkedList(): head(nullptr) {
    
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
