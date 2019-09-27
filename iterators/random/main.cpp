#include <iostream>
#include <vector>
#include <exception>
#include <string>
#include <sstream>

using std::vector;
using std::exception;
using std::istream;
using std::string;
using std::stringstream;

using std::cin;
using std::cout;
using std::endl;

istream& readIntsToVector(vector<int>& intVector, istream& in);
string intVectorToString(const vector<int>& v);

int main() {

    cout << "Hello, please type in as many integers as you wish; any non-integers will end the loop." << endl;
    vector<int> meme;
    readIntsToVector(meme, cin);
    cout << "Neat, thanks" << endl;
    string str = intVectorToString(meme);
    cout << "Here's your shit: " << endl << str << endl;
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

string intVectorToString(const vector<int>& v) {

    stringstream s;
    for(vector<int>::const_iterator i = v.begin(); i < v.end(); ++i) {
        s << *i << endl; //Applying dereference operator
    }
    return s.str();
}
