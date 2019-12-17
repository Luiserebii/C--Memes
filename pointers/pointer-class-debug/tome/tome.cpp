#include "tome.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using sed::endl;

/**
 * Constructors
 */
Tome::Tome(): title(""), type(""), pages(0) {}
Tome::Tome(string t, int p): title(t), type(""), pages(p) {}

/**
 * Accessors
 */
string getTitle() const {
    return title;
}

string getType const {
    return type;
}

int getPages() const {
    return pages;
}

/**
 * Functions
 */
void output() const {
    cout << "Title: " << title << endl
        << "Type: " << type << endl
        << "Pages: " << pages << endl;
}
