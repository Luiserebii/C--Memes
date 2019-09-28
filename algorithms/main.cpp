#include <iostream>
#include <cstdlib>
#include <ctime>

#include <vector>
#include <sstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::vector;
using std::stringstream;
using std::string;

using std::rand;
using std::srand;

void fillInt(vector<int>& v, vector<int>::size_type s);
string vectorToString(const vector<int>& v);


int main() {

    srand(time(NULL));

    vector<int> a, b;
    fillInt(a, 10);
    fillInt(b, 15);
    cout << "a: " << vectorToString(a) << endl;
    cout << "b: " << vectorToString(b) << endl;

    return 0;
}

void fillInt(vector<int>& v, vector<int>::size_type s) {
    vector<int>::const_iterator limit = v.begin() + s;
    for(vector<int>::const_iterator i = v.begin(); i < limit; ++i) {
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
