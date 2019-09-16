/**
 * The idea of this file is just to play with using native C++ string functions
 * 
 *
 **/


#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

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
}

string options() {
    string opt = "(" + SIZE + ")" + " size()" + "\n";
    return opt;
}

void runSize() {
    cout << "Please enter a string." << endl;
    string str;
    cin >> str;
    cout << "The string you entered is: " << str << endl << endl;
    cout << "size(): " << str.size() << endl;
}

