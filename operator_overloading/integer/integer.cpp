#include "integer.h"
#include <string>
#include <sstream>
#include <iostream>

using std::cout;
using std::endl;

using std::string;
using std::istringstream;

Integer::Integer(): v(0) {

}

Integer::Integer(int i): v(i) {

}


Integer::Integer(double d): v(d) {

}

Integer::Integer(const string& s) {
    istringstream iss(s);
    iss >> v;
}

Integer& Integer::operator+=(const Integer& i) {
    //Add onto
    v += i.val();
    return *this;
}

Integer operator+(const Integer& a, const Integer& b) {
    cout << "uguu" << endl;
    return a.val() + b.val();
}
