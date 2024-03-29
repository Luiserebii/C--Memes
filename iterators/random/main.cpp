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
void removeIntLessThan(vector<int>& v, int x);
void allToInt(vector<int>& v, int x);

int main() {

    cout << "Hello, please type in as many integers as you wish; any non-integers will end the loop." << endl;
    vector<int> meme;
    readIntsToVector(meme, cin);
    cout << "Neat, thanks" << endl;
    string str = intVectorToString(meme);
    cout << "Here's your shit: " << endl << str << endl;
    cout << "Removing everything less than 100: " << endl;
    removeIntLessThan(meme, 100);
    cout << "Here's your revised shit: " << endl << intVectorToString(meme) << endl;
    allToInt(meme, 4);
    cout << "I turned them all to 4s to troll your ass too: " << endl << intVectorToString(meme) << endl;
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
    //We call v.begin() and v.end() here is actually not needed, but...
    for(vector<int>::const_iterator i = v.begin(); i < v.end(); ++i) {
        s << *i << endl; //Applying dereference operator
    }
    return s.str();
}


void removeIntLessThan(vector<int>& v, int x) {
    //Regular iterator needed here, as well as calling v.begin()/v.end()
    //on every pass through loop due to manipulation of container (thus
    //breaking any iterators) 

    //Why can't we use const_iterator? It complains it isn't implemented:
    // main.cpp:78:31: error: no matching function for call to ‘std::vector<int>::erase(std::vector<int>::const_iterator&)’
    //
    //However, it seems to exist in C++11: http://www.cplusplus.com/reference/vector/vector/erase/... This version of compiler is probably only conforming with the C++98, I'm guessing?
    for(vector<int>::const_iterator i = v.begin(); i < v.end(); ++i) {
        if(*i < 100) v.erase(i);
    }
}

void allToInt(vector<int>& v, int x) {
    for(vector<int>::iterator i = v.begin(); i < v.end(); ++i) {
        *i = x; //Would this set the element...? Oh wow, it does!?!?!? interesting...
    }
}
