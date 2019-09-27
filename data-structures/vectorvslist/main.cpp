#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>

#include <vector>
#include <list>

#include "time.h"
#include "pretty-print.h"
#include "execution.h"

using std::cin;
using std::cout;
using std::endl;
using std::rand;
using std::srand;

using std::vector;
using std::list;

using std::chrono::high_resolution_clock;
using std::chrono::time_point;

/**
 * Exercise:
 * 
 * Attempt to absorb a random data set of integers, load them into a vector and list.
 * Within both data structures, iterate through each one by one. Randomly make a delete and
 * insert at the same position. Compare by benchmarking the time.
 */
int main() {

    //Build a vector and list from file
    cout << "Building <vector> and <list> from random..." << endl;
    cout << "Enter a size: "; 
    double size;
    cin >> size;

    vector<int> v;
    list<int> l;

    //Set RNG random seed
    srand(time(NULL));

    for(double i = 0; i < size; ++i) {
        int n = rand();
        v.push_back(n);
        l.push_back(n);
    }

    //Finally, let's engage in execution and benchmarking...
    TimeRecord vTime, lTime;

    //Test our insert/delete algorithm on <vector>
    vTime.start = high_resolution_clock::now();
    vectorInsertDelete(v);
    vTime.end = high_resolution_clock::now();
    printTimeDifference(cout, vTime.start, vTime.end, toTitle("<vector> test"));

    //...and, on list...
    lTime.start = high_resolution_clock::now();
    listInsertDelete(l);
    lTime.end = high_resolution_clock::now();
    printTimeDifference(cout, lTime.start, lTime.end, toTitle("<list> test"));

    return 0;
}
