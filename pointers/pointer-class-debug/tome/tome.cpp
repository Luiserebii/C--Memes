#include "tome.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

/**
 * Constructors
 */
Tome::Tome(): title(""), type(""), pages(0) {}
Tome::Tome(string tt, string tp, int p): title(tt), type(tp), pages(p) {}

/**
 * Accessors
 */
string Tome::getTitle() const {
    return title;
}

string Tome::getType() const {
    return type;
}

int Tome::getPages() const {
    return pages;
}

/**
 * Functions
 */
void Tome::output() const {
    cout << "Title: " << title << endl
        << "Type: " << type << endl
        << "Pages: " << pages << endl;
}
