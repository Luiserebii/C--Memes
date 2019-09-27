#include <iostream>
#include <chrono>
#include <string>
#include <sstream>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::ostream;

using std::chrono::high_resolution_clock;
using std::chrono::time_point;

ostream& printTimeDifference(ostream& out, high_resolution_clock::time_point a, high_resolution_clock::time_point b, string prefix = "", string postfix = "");
string timeDifferenceToString(high_resolution_clock::time_point a, high_resolution_clock::time_point b);
string toTitle(string str);

/**
 * Exercise:
 * 
 * Attempt to absorb a data set of integers via a file, load them into a vector and list.
 * Within both data structures, add a random number of random integers (from 1 - 1/2 size of list)
 * to random spots, using insert(). Compare by benchmarking the time.
 */
int main() {

    const high_resolution_clock::time_point start = high_resolution_clock::now();
    const high_resolution_clock::time_point end = high_resolution_clock::now();
    printTimeDifference(cout, start, end, toTitle("<vector> test"));
    return 0;
}

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

string toTitle(string str) {
    string::size_type size = str.size() + 1;
    string headline(size, '=');
    return headline + "\n" + str + "\n" + headline + "\n";
}
