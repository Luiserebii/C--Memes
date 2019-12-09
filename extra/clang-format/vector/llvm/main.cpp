#include "vector.h"
#include <iostream>

using std::ostream;
using std::cout;
using std::endl;

template <class T> void print(T begin, T end, ostream &out = cout);

int main() {

  // Initial tests, create and all values
  Vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(4);
  print(v.begin(), v.end());

  // Make a copy
  Vector<int> vc = v;
  print(vc.begin(), vc.end());

  // Testing operator "[]", and if modification affects both vectors (is our
  // copy constructor working?)
  cout << "v[0]: " << v[0] << endl;
  v[0] = 100;
  cout << "v[0]: " << v[0] << endl;
  print(v.begin(), v.end());
  print(vc.begin(), vc.end());

  // Testing self-assignment
  cout << "Testing self-assignment" << endl;
  print(v.begin(), v.end());
  v = v;
  print(v.begin(), v.end());

  // Testing pop_back
  cout << "Testing pop_back: " << endl;
  print(v.begin(), v.end());
  v.pop_back();
  print(v.begin(), v.end());
}

template <class T> void print(T begin, T end, ostream &out) {
  while (begin != end) {
    out << *begin++ << " ";
  }
  out << endl;
}
