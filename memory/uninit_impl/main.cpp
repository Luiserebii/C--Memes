#include "uninitialized.h"
#include <iostream>
#include <memory>

using std::cout;
using std::endl;
using std::allocator;

template <class T>
void print(T begin, T end);


int main() {

    //Allocate 10 spots for int
    allocator<int> alloc;
    int* a = alloc.allocate(10);



    //Ritualistically destroy the mandala
    int* temp = a;
    while(temp != a + 10) {
        alloc.destroy(temp++);
    }

    //Fill them up with the number 100
    uninitialized_fill(a, a + 10, 100);

    //Print
    print(a, a + 10);

}

template <class T>
void print(T begin, T end) {
    while(begin != end) {
        cout << *begin++ << " ";
    }
    cout << endl;
}
