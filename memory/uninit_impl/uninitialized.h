#ifndef GUARD_UNINITIALIZED_H
#define GUARD_UNINITIALIZED_H

#include <memory>

template <class T, class In>
T* uninitialized_copy(In begin, In end, T* out) {

    std::allocator<T> alloc;
    while(begin != end) {
        alloc.construct(out++, *begin++);
    }
    return out;

}

template <class T> 
void uninitialized_fill(T* begin, T* end, const T& val) {
    
    std::allocator<T> alloc;
    while(begin != end) {
        alloc.construct(begin++, val);
    }

}


#endif
