#include <iostream>
#include <memory>

using std::cout;
using std::endl;

using std::allocator;

int main() {

    //Create an int allocator
    allocator<int> alloc;

    //Allocate 10 spots for int
    int* nums = alloc.allocate(10);

    //Assign values, 1-10
    int* n = nums;
    for(int i = 0; n != nums + 10; ++i) {
        *n++ = i;
    }

}

template <class T>
void print(T begin, T end) {
    T* b = begin;
    while(b != end) {
        cout << b << " ";
        ++b;
    }
    cout << endl;
}
