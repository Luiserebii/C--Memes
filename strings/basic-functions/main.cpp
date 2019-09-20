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

enum fx { SIZE, INSERT, ERASE, FIND, RFIND, AT, SUBSTR, EMPTY };

void run();
string options();
string option(int n, string name);
void runSize();
void runInsert();
void runErase(); //NOT runRemove(); string::remove() doesn't seem to exist, or has been depricated;
                 //it's now string::erase(), I imagine, which has the same params and functionality
void runFind();
void runRFind();
void runAt();
void runSubstr();
void runEmpty();

string promptString();
string::size_type promptStringSizeType();


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
    } else if(opt == INSERT) {
        runInsert();
    } else if(opt == ERASE) {
        runErase();
    } else if(opt == FIND) {
        runFind();
    } else if(opt == RFIND) {
        runRFind();
    } else if(opt == AT) {
        runAt();
    } else if(opt == SUBSTR) {
        runSubstr();
    } else if(opt == EMPTY) {
        runEmpty();
    }
}

string options() {
    stringstream opts;
    opts << option(SIZE, "size()");
    opts << option(INSERT, "insert()");
    opts << option(ERASE, "erase()");
    opts << option(FIND, "find()");
    opts << option(RFIND, "rfind()");
    opts << option(AT, "at()");
    opts << option(SUBSTR, "substr()");
    opts << option(EMPTY, "empty()");
    return opts.str();
}

string option(int n, string name) {
    stringstream opt;
    opt <<  "(" << n << ")" << "  " << name << endl;
    return opt.str();
}

string promptString() {
    cout << "Please enter a string." << endl;
    string str;
    cin >> str;
//    cout << "The string you entered is: " << str << endl << endl;
    return str;
}

string::size_type promptStringSizeType() {
    cout << "Please enter an integer, or a number which corresponds to string::size_type: " << endl;
    string::size_type num;
    cin >> num;
    return num;
}



void runSize() {
    string str = promptString();
    cout << "size(): " << str.size() << endl;
}

void runInsert() {
    cout << "string& insert (size_t pos, const string& str);" << endl; 
    string str = promptString();
    cout << "Now for params..." << endl;
    string::size_type pos = promptStringSizeType();
    string inStr = promptString();
    
    //Run insert
    str.insert(pos, inStr);
    
    cout << "insert(): " << str << endl;
}

void runErase() {
    cout << "string& erase (size_t pos = 0, size_t len = npos);" << endl;
    string str = promptString();
    cout << "Now for params..." << endl;
    string::size_type pos = promptStringSizeType();
    string::size_type len = promptStringSizeType();
    
    //Run erase
    str.erase(pos, len);

    cout << "erase(): " << str << endl;
}

void runFind() {
    cout << "size_t find (const string& str, size_t pos = 0) const;" << endl;
    string str = promptString();
    cout << "Now for params..." << endl;
    string str2 = promptString();

    //Run find
    string::size_type i = str.find(str2);

    cout << "find(): " << i << endl;
}

void runRFind() {
    cout << "size_t rfind (const string& str, size_t pos = npos) const;" << endl;
    string str = promptString();
    cout << "Now for params..." << endl;
    string str2 = promptString();

    //Run rfind
    string::size_type i = str.rfind(str2);

    cout << "rfind(): " << i << endl;
}

void runAt() {
    cout << "const char& at (size_t pos) const;" << endl;
    string str = promptString();
    cout << "Now for params..." << endl;
    string::size_type pos = promptStringSizeType();

    //Run at
    char res = str.at(i);

    cout << "at(): " << res << endl;
}

void runSubstr() {
    cout << "string substr (size_t pos = 0, size_t len = npos) const;" << endl;
    string str = promptString();
    cout << "Now for params..." << endl;
    string::size_type pos = promptStringSizeType();
    string::size_type npos = promptStringSizeType();

    //Run substr
    string res = str.substr(pos, npos);

    cout << "substr() " << res << endl;
}

void runEmpty() {
    cout << "bool empty() const;" << endl;
    string str = promptString();

    //Run empty
    bool res = str.empty();

    cout << "empty() " << res << endl;
}
