#include <iostream>
#include <vector>
#include <exception>

using std::vector;
using std::exception;
using std::istream;

using std::cin;
using std::cout;
using std::endl;

istream& readIntsToVector(vector<int>& intVector, istream& in);

int main() {

    cout << "Hello, please type in as many integers as you wish; any non-integers will end the loop." << endl;
    return 0;
}


istream& readIntsToVector(vector<int>& intVector, istream& in) {

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
