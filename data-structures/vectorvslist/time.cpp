#include <iostream>
#include <chrono>
#include <string>
#include <sstream>

#include "time.h"

using std::endl;
using std::string;
using std::stringstream;
using std::ostream;

using std::chrono::high_resolution_clock;
using std::chrono::time_point;

ostream& printTimeDifference(ostream& out, high_resolution_clock::time_point a, high_resolution_clock::time_point b, string prefix, string postfix) {
    if(prefix != "") out << prefix;
    out << timeDifferenceToString(a, b) << endl;
    if(postfix != "") out << postfix;
    return out;
}

string timeDifferenceToString(high_resolution_clock::time_point a, high_resolution_clock::time_point b) {
    stringstream ss;
//    high_resolution_clock::time_point diff = b - a;
    ss << "Elapsed time: " << endl << endl
        << std::chrono::duration_cast<std::chrono::nanoseconds>(b - a).count() << " ns" << endl
        << std::chrono::duration_cast<std::chrono::microseconds>(b - a).count() << " µs" << endl
        << std::chrono::duration_cast<std::chrono::milliseconds>(b - a).count() << " ms" << endl
        << std::chrono::duration_cast<std::chrono::seconds>(b - a).count() << " s" << endl
    ;
    return ss.str();
}
