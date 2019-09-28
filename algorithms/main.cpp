#include <iostream>
#include <cstdlib>
#include <ctime>

#include <sstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

void fillInt(vector<int>& v, vector<int>::size_type s);


int main() {

    srand(time(NULL));

    vector<int> a, b;
    fillInt(a, 10);
    fillInt(b, 15);
    return 0;
}

void fillInt(vector<int>& v, vector<int>::size_type s) {
    for(vector<int>::const_iterator i = v.begin(); i < s; ++i) {
        v.push_back(rand());
    }
}

string vectorToString(const vector<int>& v) {
    stringstream ss;
    for(vector<int>::const_iterator i = v.begin(); i < --v.end(); ++i) {
        ss << *i << " ";
    }
    ss << *--v.end();

    return ss.str();
}
