#include "integer.h"
#include <string>
#include <sstream>

using std::string;
using std::istringstream;

Integer::Integer(): val(0) {

}

Integer::Integer(int i): val(i) {

}


Integer::Integer(double d): val(d) {

}

Integer::Integer(const string& s) {
    istringstream iss(s);
    iss >> val;
}
