#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

using std::string;
using std::stringstream;
using std::vector;

vector<int> generateFibonacci(int lim);
int nextFibonacci(int a, int b);


int main() {

    cout << "Hello, friend! :)" << endl;
    cout << "Please type in a number representing the upper limit of Fibonacci numbers you are looking for today." << endl;

    int lim;
    cin >> lim;

    cout << "Your limit: " << lim << endl;    
    return 0;
}


vector<int> generateFibonacci(int lim) {

    vector<int> fibonacci;
    fibonacci.push_back(0);
    fibonacci.push_back(1);

    while(fibonacci[fibonacci.size() - 1] < lim) {
        int a = fibonacci[fibonacci.size() - 2];
        int b = fibonacci[fibonacci.size() - 1];
        fibonacci.push_back(nextFibonacci(a, b));
    } 
    return fibonacci;   
}

/**
 * Yields next Fibonacci number based on past two.
 *
 **/
int nextFibonacci(int a, int b) {
    return a + b;
}
