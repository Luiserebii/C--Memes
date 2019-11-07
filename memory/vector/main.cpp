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
    v.push_back(2);
    v.push_back(4);

    print(v.begin(), v.end());
    Vector<int> vc = v;
    print(vc.begin(), vc.end());

    cout << "HEY, AT INDEX 0: " << v[0] << endl;
    v[0] = 100;
    cout << "HEY, AT INDEX 0: " << v[0] << endl;
    print(v.begin(), v.end());
    print(vc.begin(), vc.end());
}

template <class T>
void print(T begin, T end, ostream& out) {
    while(begin != end) {
        out << *begin++ << " ";
    }
    out << endl;
}
