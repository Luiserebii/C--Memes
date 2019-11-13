#include "integer.h"
#include <string>
#include <sstream>

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
/*
Integer operator+(const Integer& a, const Integer& b) {
    return a.val() + b.val();
}*/
