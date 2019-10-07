#include <iostream>

using std::cout;
using std::endl;

template <class T>
T returnVar(T val);

int main() {

    int meme = returnVar(12);
    cout << "AAAAA: " << meme << endl;
    return 0;
}

//template <class T>
T returnVar(T val){
    return val;
}
