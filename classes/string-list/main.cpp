#include <string>
#include <algorithm>

using std::string;
using std::copy;

class StringList {
    
    private:
        char* head;
        char* tail;

    public: 
        StringList();
        StringList(size_t size);
        StringList(string s);

}

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
    copy(s.begin(), s.end(), head);    
}
