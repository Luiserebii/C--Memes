#include "vector.h"
#include <iostream>

using std::ostream;
using std::cout;
using std::endl;

template <class T>
void print(T begin, T end, ostream& out=cout);

int main() {

    Vector<int> v;
    v.push_back(1);



}

template <class T>
void print(T begin, T end, ostream& out) {
    while(begin != end) {
        out << *begin++ << endl;
    }
}
