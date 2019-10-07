#include <iostream>

using std::cout;
using std::endl;

template <class Fuck>
Fuck justReturnFuck(Fuck f);

int main() {

    int meme = justReturnFuck(12);
    cout << "FUCK: " << meme << endl;
    return 0;
}

template <class Fuck> 
Fuck justReturnFuck(Fuck f){
    return f;
}
