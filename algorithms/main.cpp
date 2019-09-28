#include <iostream>
#include <cstdlib>
#include <ctime>

#include <vector>
#include <sstream>
#include <string>

#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

using std::vector;
using std::stringstream;
using std::string;

using std::rand;
using std::srand;

using std::copy;

void fillInt(vector<int>& v, vector<int>::size_type s);
string vectorToString(const vector<int>& v);
void copyImplementation(vector<int>::iterator i1, vector<int>::iterator i2, vector<int>::iterator appendTo);

int main() {

    srand(time(NULL));

    vector<int> a, b;
    fillInt(a, 10);
    fillInt(b, 15);
    cout << "a: " << vectorToString(a) << endl;
    cout << "b: " << vectorToString(b) << endl;

    cout << "Performing a copy operation: " << endl;
    copy(a.begin(), a.end(), b.begin());

    cout << "a: " << vectorToString(a) << endl;
    cout << "b: " << vectorToString(b) << endl;

    cout << "Performing an implemented copy operation: " << endl;
//    copyImplementation(a.begin(), a.end(), b.begin());
    vector<int>::iterator i1, i2, appendTo;
    i1 = a.begin();
    i2 = a.end();
    appendTo = b.begin();

    for(vector<int>::iterator i = i1; i < i2; ++i) {
        cout << "i1:  " << *i << endl;
        //Copy to iterator
        *appendTo = *i;
        //Move appendTo up
        ++appendTo;
    }
//
    cout << "a: " << vectorToString(a) << endl;
    cout << "b: " << vectorToString(b) << endl;

    return 0;
}

void fillInt(vector<int>& v, vector<int>::size_type s) {
    vector<int>::const_iterator limit = v.begin() + s;
    for(vector<int>::const_iterator i = v.begin(); i < limit; ++i) {
        v.push_back(rand() % 1000);
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

void copyImplementation(vector<int>::iterator i1, vector<int>::iterator i2, vector<int>::iterator appendTo) {
    //Loop through each iterator, until end of iterator range
    for(vector<int>::iterator i = i1; i < i2; ++i) {
        cout << "i1:  " << *i1 << endl;
        //Copy to iterator
        *appendTo = *i1;
        //Move appendTo up
        ++appendTo;
    }

}
