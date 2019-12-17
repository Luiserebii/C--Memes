#include "tome.h"
#include <string>

using std::string;

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
