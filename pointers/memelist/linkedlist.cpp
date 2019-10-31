#include <iostream>


template <class T>
class Node {
    private:
        T val; //Our value
        Node* next; //Pointer to next node
    public:
        Node(T v);
        Node(T v, Node* n);        

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

int main() {



}
