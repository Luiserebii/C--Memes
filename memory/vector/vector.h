#include <cstdlib>
#include <memory>

using std::allocator;
using std::uninitialized_copy;

template <class T>
class Vector {

    public: 

        typedef T* iterator;
        typedef const T* const_iterator;

        //Constructors
        Vector();

        void push_back(const T& val);

        iterator begin() { return head; }
        const_iterator begin() const { return head; }

        iterator end() { return tail; }
        const_iterator end() const { return tail; }

        size_t size() const { return tail - head; }

    private:

        iterator head;
        iterator tail;
        allocator<T> alloc;

};

template <class T>
Vector<T>::Vector() {
    head = 0;
    tail = 0;
}

template <class T>
void Vector<T>::push_back(const T& val) {
    //Allocate memory for newly added value
    size_t newSize = size() + 1;

    if(size() != 0) {
        //Allocate new stuff
        T* b = alloc.allocate(newSize);

        //Copy stuff over
        T* e = uninitialized_copy(head, tail, b);

        //Destroy old stuff (don't we have to destroy individually, or deallocation is fine...?)
        alloc.deallocate(head, size());

        //Set new stuff up
        head = b;
        tail = e;
        
    }
}
