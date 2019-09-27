#include <iostream>
#include <chrono>

using std::cout;
using std::endl;

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

    const time_point<high_resolution_clock> start = high_resolution_clock::now();

    cout << "The current time: " << start << endl;

    const time_point<high_resolution_clock> end = high_resolution_clock::now();

    return 0;
}

istream& printTimeDifference(time_point<high_resolution_clock> a, time_point<high_resolution_clock> b) {

    cout << "Elapsed time: " << endl << endl
        << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns" << endl
        << chrono::duration_cast<chrono::microseconds>(end - start).count() << " µs" << endl
        << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " ms" << endl
        << chrono::duration_cast<chrono::seconds>(end - start).count() << " s" << endl
    ;

}


