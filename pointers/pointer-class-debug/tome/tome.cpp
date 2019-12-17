#include "tome.h"
#include <string>

using std::string;

/**
 * Constructors
 */
Tome::Tome(): title(""), pages(0) {}
Tome::Tome(string t, int p): title(t), pages(p) {}

/**
 * Accessors
 */
string getTitle() const {
    return title;
}

int getPages() const {
    return pages;
}
