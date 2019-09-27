#include <iostream>
#include <chrono>
#include <string>
#include <sstream>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::istream;

using std::chrono::high_resolution_clock;
using std::chrono::time_point;

/**
 * Exercise:
 * 
 * Attempt to absorb a data set of integers via a file, load them into a vector and list.
 * Within both data structures, add a random number of random integers (from 1 - 1/2 size of list)
 * to random spots, using insert(). Compare by benchmarking the time.
 */
int main() {

//    const time_point<high_resolution_clock> start = high_resolution_clock::now();


//    const time_point<high_resolution_clock> end = high_resolution_clock::now();

    const high_resolution_clock::time_point start = high_resolution_clock::now();
    const high_resolution_clock::time_point end = high_resolution_clock::now();
    return 0;
}

istream& printTimeDifference(istream& in, /*time_point<high_resolution_clock> a, time_point<high_resolution_clock> b*/ high_resolution_clock::time_point a, high_resolution_clock::time_point b) {
    in << timeDifferenceToString(a, b);
    return in;
}

string timeDifferenceToString(/*time_point<high_resolution_clock> a, time_point<high_resolution_clock> b*/ high_resolution_clock::time_point a, high_resolution_clock::time_point b) {
    stringstream ss;
//    time_point<high_resolution_clock> diff = b - a;
    high_resolution_clock::time_point diff = b - a;
    in << "Elapsed time: " << endl << endl
        << std::chrono::duration_cast<std::chrono::nanoseconds>(diff).count() << " ns" << endl
        << std::chrono::duration_cast<std::chrono::microseconds>(diff).count() << " µs" << endl
        << std::chrono::duration_cast<std::chrono::milliseconds>(diff).count() << " ms" << endl
        << std::chrono::duration_cast<std::chrono::seconds>(diff).count() << " s" << endl
    ;
    return ss.str();
}
