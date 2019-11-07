#include <cstdlib>


template <class T>
class Vector {

    public: 

        typedef T* iterator;
        typedef const T* const_iterator;



        iterator begin() { return head; }
        const_iterator begin() const { return head; }

        iterator end() { return tail; }
        const_iterator end() const { return tail; }

        size_t size() const { return tail - head; }

    private:

        iterator head;
        iterator tail;


};
