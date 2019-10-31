#ifndef GUARD_NODE_h
#define GUARD_NODE_h

/**
 * Class Node of our MemeList
 *
 */
template <class T>
class Node {
    private:
        T val; //Our value
        Node* next; //Pointer to next node
    public:
        Node(T v);
        Node(T v, Node* n);        
        
        T getVal() const;
        Node* getNext() const;

        void setVal(T v);
        void setNext(Node* n);

};

template <class T>
Node<T>::Node(T v) {
    val = v;
    next = NULL;
}

template <class T>
Node<T>::Node(T v, Node* n) {
    val = v;
    next = n;
}

template <class T>
Node<T>::getVal() const {
    return val;
}

template <class T>
Node<T>::getNext() const {
    return next;
}

template <class T>
Node<T>::setVal(T v) {
    val = v;
}

template <class T>
Node<T>::setNext(Node* n) {
    next = n;
}

#endif
