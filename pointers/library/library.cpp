#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>

using std::string;
using std::stringstream;
using std::domain_error;
using std::ostream;
using std::endl;

Library::Library() {

}

Book* Library::begin() {
    return books;
}

Book* Library::end() {
    return books + MAX_CAPACITY;
}

int Library::addBook(const Book b) {
    for(Library::const_iterator i = begin(); i < end(); ++i) {
        if(i->isEmpty()) {
            *i = i;
            return i - begin();
        }
    }
    //If we reached here, there's no more space!
    throw domain_error("Library full at max capacity!");
}

Book Library::getBook(size_t index) {
    return books[index];
}

string Library::toString() {
    stringstream ss;
    for(Library::const_iterator i = begin(); i < end(); ++i) {
        ss << i->toString() < endl;
    }
    return ss.str();
}

ostream& write(ostream& out) {
    out << toString();
}

/*
class Library {
    private:
        Book books[CAPACITY];
    public:
        Library();

        int addBook(const Book b);

        //Accessors
        Book getBook(size_t index);

        //Output functions
        std::string toString();
        std::ostream write();
        void output();

};
*/
