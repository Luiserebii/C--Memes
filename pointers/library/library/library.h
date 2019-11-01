#ifndef GUARD_LIBRARY_H
#define GUARD_LIBRARY_H
#define MAX_CAPACITY 10

#include "../book/book.h"
#include <iostream>
#include <string>

class Library {
    private:
        Book books[MAX_CAPACITY];
    public:
        typedef Book* iterator;
        typedef const Book* const_iterator;

        Library();

        iterator begin();
        iterator end();

        const_iterator begin() const;
        const_iterator end() const;

        int addBook(const Book b);

        //Accessors
        Book getBook(size_t index);

        //Output functions
        std::string toString() const;
        std::ostream& write(std::ostream& out);
        void output();

};

#endif
