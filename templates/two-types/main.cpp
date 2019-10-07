#include <iostream>

using std::cout;
using std::endl;

template <class T>
T testWithTwoTypes(const T& left, const T& right);

template <class T, class U>
T testWithTwoTypesToo(const T& left, const U& right);

template <class T, class U>
T max(const T& left, const U& right);

int main() {

    int x = 1;
    double y = 2.5;
    //This will break, as function def had specified two of the same var
    //cout << testWithTwoTypes(x, y) << endl;

    //This, however, does of course run:
    cout << testWithTwoTypesToo(x, y) << endl;

    //What if we took advantage of implicit type comparisons?
    cout << max(x, y) << endl;
    return 0;
}

template <class T>
T testWithTwoTypes(const T& left, const T& right) {
    return left;
}

template <class T, class U>
T testWithTwoTypesToo(const T& left, const U& right) {
    return left;
}

template <class T, class U>
T max(const T& left, const U& right) {
    return left > right ? left : right;
}
