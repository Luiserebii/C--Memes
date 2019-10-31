#ifndef GUARD_LIBRARY_H
#define GUARD_LIBRARY_H
#define CAPACITY 10

#include "book.h"
#include <iostream>
#include <string>

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

#endif
