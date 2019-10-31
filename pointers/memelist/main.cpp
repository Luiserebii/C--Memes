#include "linkedlist.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

using std::string;


int main() {
    LinkedList<string> meme;
    cout << "SIZE: " << meme.size() << endl;
    meme.push_back("anus");
    meme.push_back("uguu");
    meme.push_back("holy fuck");
    string cock = meme.get(1);
    cout << cock << endl;

    for(LinkedList<string>::iterator i = meme.begin(); i != meme.end(); i = i->getNext()) {
        cout << " | ELEMENT: " << i->getVal() << endl;
    }

    cout << "SIZE: " << meme.size() << endl;
    meme.pop();
    cout << "SIZE POST-POP: " << meme.size() << endl;
    meme.pop();
    cout << "SIZE POST-POP: " << meme.size() << endl;
    meme.pop();
    cout << "SIZE POST-POP: " << meme.size() << endl;


}


