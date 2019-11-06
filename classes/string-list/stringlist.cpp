#include "stringlist.h"
#include <string>
#include <algorithm>
#include <iostream>

using std::string;
using std::copy;
using std::ostream;
using std::cout;
using std::endl;

/**
 * StringList is really a construct built on top of an array of chars.
 */

StringList::StringList() {
    head = 0;
    tail = 0;
}

StringList::StringList(size_t size) {
    head = new char[size];
    tail = head + size;
}

StringList::StringList(string s) {
    head = new char[s.length()];
    tail = head + s.length();
    copy(s.begin(), s.end(), head);
}

string StringList::toString() const {
    string s = "";
    char* h = head;
    while(h != tail) {
        s += *h++;
    }
    return s;
}

ostream& StringList::write(ostream& out) const {
    out << toString() << endl;
}
