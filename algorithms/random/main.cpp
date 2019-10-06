#include <iostream>
#include <vector>

using std::vector;

bool isEven(double d);

int main() {
    
    vector<double> meme = {1,2.3,6,8,10,7.9};

    return 0;
}

bool isEven(double d) {
    return ((d % 2) == 0);
}
