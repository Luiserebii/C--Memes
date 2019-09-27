#include <iostream>
#include <vector>
#include <exception>

istream& readIntsToVector(vector<int>& intVector, istream& in);

using std::vector;
using std::exception;

using std::cin;
using std::cout;
using std::endl;

int main() {

    cout << "Hello, please type in as many integers as you wish; any non-integers will end the loop." << endl;
    return 0;
}


istream& readIntsToVector(vector<int>& intVector, istream& in) {

    vector<int> intVector;
    int x;
    while(in >> x) {
        //We make a pretty bad assumption here, partly for practice;
        //assume that attempting to push a non-int value onto the vector
        //will throw
        try { 
            intVector.push_back(x);
        } catch (exception e) {
            break;
        }
    }
    //Clear any error state encountered from stream
    in.clear();
    return in;

}
