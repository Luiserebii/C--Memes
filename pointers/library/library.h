#ifndef GUARD_LIBRARY_H
#define GUARD_LIBRARY_H
#define MAX_CAPACITY 10

#include "book.h"
#include <iostream>
#include <string>

class Library {
    private:
        Book books[MAX_CAPACITY];
    public:
        Library();

        int addBook(const Book b);

        //Accessors
        Book getBook(size_t index);

        //Output functions
        std::string toString();
        std::ostream& write(std::ostream& out);
        void output();

};

#endif
