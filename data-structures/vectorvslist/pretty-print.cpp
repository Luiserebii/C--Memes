#include <string>
#include "pretty-print.h"

using std::string;

string toTitle(string str) {
    string::size_type size = str.size() + 1;
    string headline(size, '=');
    return headline + "\n" + str + "\n" + headline + "\n";
}
