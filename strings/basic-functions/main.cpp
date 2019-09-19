/**
 * The idea of this file is just to play with using native C++ string functions
 * 
 *
 **/


#include <iostream>
#include <sstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::string;
using std::stringstream;

enum fx { SIZE };

void run();
string options();
void runSize();

int main() {
    run();
    return 0;
}

void run() {

    cout << "Hello! This is a program allowing for selection of various string functions." << endl;
    cout << options() << endl;
    int opt;
    cin >> opt;
    if(opt == SIZE) {
        runSize();
    }
}

string options() {
    stringstream opt;
    opt <<  "(" << SIZE << ")" << " size()" << "\n";
    return opt.str();
}

string promptString() {
    cout << "Please enter a string." << endl;
    string str;
    cin >> str;
    cout << "The string you entered is: " << str << endl << endl;
    return str;
}

void runSize() {
    string str = promptString();
    cout << "size(): " << str.size() << endl;
}

void runInsert() {
    cout << "Please enter a string." << endl;
    string str;
    cin >> str;
    cout << "The string you entered is: " << str << endl;
    cout


}

void runRemove() {



}
