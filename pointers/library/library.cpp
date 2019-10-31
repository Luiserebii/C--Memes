#include <iostream>
#include <string>
#include <stdexcept>

using std::string;
using std::domain_error;
using std::ostream;

Library::Library() {

}

int Library::addBook(const Book b) {
    for(size_t i = 0; i < MAX_CAPACITY; ++i) {
        if(books[i].isEmpty()) {
            books[i] = b;
        }
    }
    //If we reached here, there's no more space!
    throw domain_error("Library full at max capacity!");
}

Book Library::getBook(size_t index) {
    return books[index];
}

string Library::toString() {
    
}

ostream& write(ostream& out) {

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
