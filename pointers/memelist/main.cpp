#include "linkedlist.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

using std::string;


int main() {
    LinkedList<string> meme;

    meme.push_back("anus");
    meme.push_back("uguu");
    meme.push_back("holy fuck");
    string cock = meme.get(1);
    cout << cock << endl;

}
