#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "fib.h"

using std::cin;
using std::cout;
using std::endl;

/**
 *
 * Using our custom header files, the headers, and thus function declarations,
 * are copied in.
 *
 *
 * Run "g++ *.cpp" to compile them all together!
 *
 * Alternatively, a script provided will also do this for you.
 *
 **/


int main() {

    cout << "Hello, friend! :)" << endl;
    cout << "Please type in a number representing the upper limit of Fibonacci numbers you are looking for today." << endl;

    int lim;
    cin >> lim;

    cout << "\n" << "Limit chosen: " << lim << endl << "Generating..." << endl << endl;
    cout << generateFibonacciOutput(lim); 
    return 0;
}


