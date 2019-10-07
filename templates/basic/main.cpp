#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template <class T>
T returnVar(T val);

template <class T>
T add(T v1, T v2);

int main() {

    int meme = returnVar(12);
    cout << "Template return: " << meme << endl;
    cout << "Template adding: " << endl;
    cout << "   " << add(1, 2) << endl;
    cout << "   " << add(1.2, 2.5) << endl;
    cout << "   " << add(string("Fly me to "), string("the moon")) << endl;
    cout << "   " << add(-5, 3) << endl;


    return 0;
}

template <class T> 
T returnVar(T val) {
    return val;
}

template <class T>
T add(T v1, T v2) {
    return v1 + v2;
}

template <class T>
T testTwoTypes(const T& left, const T& right) {
    return left;
}
