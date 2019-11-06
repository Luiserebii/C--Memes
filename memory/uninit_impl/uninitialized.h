#ifndef GUARD_UNINITIALIZED_H
#define GUARD_UNINITIALIZED_H

#include <memory>

template <class T, In>
T* uninitialized_copy(In begin, In end, T* out) {

    std::allocator<T> alloc;
    while(begin != end) {
        alloc.construct(out++, *begin++)
    }
    return out;

}



#endif
