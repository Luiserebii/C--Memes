#include <cstdlib>
#include <memory>

using std::allocator;
using std::uninitialized_copy;
using std::ptrdiff_t;

template <class T>
class Vector {

    public: 

        //Types
        typedef T* iterator;
        typedef const T* const_iterator;
        typedef size_t size_type;
        typedef T value_type;
        typedef ptrdiff_t difference_type;
        typedef T& reference;
        typedef const T& const_reference;

        //Constructors
        Vector();

        T& operator[](size_t i);

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
T& Vector<T>::operator[](size_t i) {
    if(i < size() && i >= 0) {
        return *(head + i);
    } else {
        //Good idea to throw an error, like out_of_bounds()
    }
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

        //Add new element
        alloc.construct(e, val);

        //Destroy old stuff (don't we have to destroy individually, or deallocation is fine...?)
        alloc.deallocate(head, size());

        //Set new stuff up
        head = b;
        tail = e + 1;
        
    } else {
        //Allocate fresh element
        T* b = alloc.allocate(1);
        
        //Create
        alloc.construct(b, val);

        head = b;
        tail = b + 1;
    }
}
