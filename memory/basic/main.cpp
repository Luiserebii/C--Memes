#include <iostream>
#include <memory>

using std::cout;
using std::endl;

using std::allocator;

template <class T>
void print(T begin, T end);

int main() {

    //Create an int allocator
    allocator<int> alloc;

    //Allocate 10 spots for int
    int* nums = alloc.allocate(10);

    //Assign values, 1-10
    //This may fail, as nothing initialized? Let's see...
    int* n = nums;
    for(int i = 0; n != nums + 10; ++i) {
        *n++ = i;
    }

    //Print
    print(nums, nums + 10);

    //Now, let'd try de-allocating...
}

template <class T>
void print(T begin, T end) {
    while(begin != end) {
        cout << *begin << " ";
        ++begin;
    }
    cout << endl;
}
