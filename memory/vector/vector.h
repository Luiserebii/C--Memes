#include <cstdlib>
#include <memory>
#include <stdexcept>

#include <iostream>
using std::cout;
using std::endl;

using std::allocator;
using std::uninitialized_copy;
using std::ptrdiff_t;
using std::out_of_range;

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

        //Copy, assign, destruct
        Vector(const Vector&);
        Vector& operator=(const Vector& rhs);
        ~Vector();

        T& operator[](size_t i);
        const T& operator[](size_t i) const;

        T& at(size_t);

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

        void create();
        void create(const T* b, const T* e);
        void destroy();

};

template <class T>
Vector<T>::Vector() {
    //Create a fresh, empty vector
    create();
}

template <class T>
Vector<T>::Vector(const Vector& v) {
    //Load in values from second vector in
    create(v.begin(), v.end());
}

template <class T>
Vector<T>& Vector<T>::operator=(const Vector& rhs) {
    //If not self-assigning...
    if(this != &rhs) {
        //Destroy
        destroy();

        //Set up
        create(rhs.begin(), rhs.end());
    }
    //In any case, return the left-hand side, i.e. our class
    return *this;
}

template <class T>
Vector<T>::~Vector() {
    //Destroy
    destroy();
}


//Create a fresh, empty vector
template <class T>
void Vector<T>::create() {
    head = tail = 0;
}

//Set up using a pair of iterators
template <class T>
void Vector<T>::create(const T* b, const T* e) {
    //Allocate space according to the size of the iterators, and...
    head = alloc.allocate(e - b);
    //Load into memory
    tail = uninitialized_copy(b, e, head);
}

template <class T>
void Vector<T>::destroy() {

    //Destroy all data, if existing
    if(head != 0) {
        T* b = head;
        while(b != tail) {
            alloc.destroy(b++);
        }
    }
    //Deallocate
    alloc.deallocate(head, size());

    //Reset pointers
    head = tail = 0;
}


template <class T>
T& Vector<T>::operator[](size_t i) {
    return at(i);
}

template <class T>
const T& Vector<T>::operator[](size_t i) const {
    return at(i);
}

template <class T>
T& Vector<T>::at(size_t i) {
    if(i < size() && i >= 0) {
        return *(head + i);
    } else {
        throw out_of_range("Index is out of bounds!");
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

        //Destroy old stuff 
        destroy();

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
