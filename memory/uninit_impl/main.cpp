#include "uninitialized.h"
#include <iostream>
#include <memory>
#include <vector>

using std::cout;
using std::endl;
using std::allocator;
using std::vector;

template <class T>
void print(T begin, T end);

void fillInts(vector<int>& v, size_t n);

int main() {

    //Allocate 10 spots for int
    allocator<int> alloc;
    int* a = alloc.allocate(10);

    //Generate a vector, fill it with a range, 1-10
    vector<int> v;
    fillInts(v, 10);
    cout << "Printing our vector: " << endl;
    print(v.begin(), v.end());

    //Copy all stuff from vector<int> into our meme
    uninitialized_copy(v.begin(), v.end(), a);
    cout << "Printing our allocation post-copy: " << endl;
    print(a, a + 10);

    //Ritualistically destroy the mandala
    int* temp = a;
    while(temp != a + 10) {
        alloc.destroy(temp++);
    }

    //Fill them up with the number 100
    uninitialized_fill(a, a + 10, 100);

    //Print
    cout << "Printing our allocation post-fill with 100: " << endl; 
    print(a, a + 10);

}

template <class T>
void print(T begin, T end) {
    while(begin != end) {
        cout << *begin++ << " ";
    }
    cout << endl;
}

void fillInts(vector<int>& v, size_t n) {
    for(size_t i = 0; i < n; ++i) { 
        v.push_back(i + 1);
    }
}
