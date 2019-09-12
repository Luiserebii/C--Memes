#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "fib.h"

using std::endl;

using std::string;
using std::stringstream;
using std::vector;

string generateFibonacciOutput(int lim) {

    typedef vector<int>::size_type vec_sz;
    stringstream output;

    vector<int> fibonacci = generateFibonacci(lim);
    for(vec_sz i = 0; i < fibonacci.size(); i++) {
        output << fibonacci[i] << endl;
    }

    return output.str();
}

vector<int> generateFibonacci(int lim) {

    vector<int> fibonacci;
    fibonacci.push_back(0);
    fibonacci.push_back(1);

    while(nextFibonacci(fibonacci) < lim) {
        fibonacci.push_back(nextFibonacci(fibonacci));
    } 
    return fibonacci;   
}

/**
 * Yields next Fibonacci number from vector<int>
 *
 **/

int nextFibonacci(const vector<int>& fibonacci) {
    int a = fibonacci[fibonacci.size() - 2];
    int b = fibonacci[fibonacci.size() - 1];
    return nextFibonacci(a, b);
}

/**
 * Yields next Fibonacci number based on past two.
 *
 **/
int nextFibonacci(int a, int b) {
    return a + b;
}
