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
    v.push_back(3);

    print(v.begin(), v.end());

}

template <class T>
void print(T begin, T end, ostream& out) {
    while(begin != end) {
        out << *begin++ << " ";
    }
    out << endl;
}
