#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

void fillInt(vector<int>& v, vector<int>::size_type s);


int main() {

    srand(time(NULL));



    return 0;
}

void fillInt(vector<int>& v, vector<int>::size_type s) {
    for(vector<int>::const_iterator i = v.begin(); i < s; ++i) {
        v.push_back(rand());
    }
}
