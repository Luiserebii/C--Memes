#include <iostream>

using std::cout;
using std::endl;

template <class T>
T testWithTwoTypes(const T& left, const T& right);


int main() {

    int x = 1;
    double y = 2.5;
    //This will break, as function def had specified two of the same var
    //cout << testWithTwoTypes(x, y) << endl;

    return 0;
}

template <class T>
T testWithTwoTypes(const T& left, const T& right) {
        return left;
}
