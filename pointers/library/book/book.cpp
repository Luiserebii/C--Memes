#include "book.h"

#include <iostream>
#include <string>
#include <sstream>

using std::endl;
using std::string;
using std::stringstream;

Book::Book() {

}

Book::Book(const string t, const string a): title(t), author(a) {
    
}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

void Book::setTitle(const string s) {
    title = s;
}

void Book::setAuthor(const string s) {
    author = s;
}

bool Book::isEmpty() const {
    return (title == "" && author == "");
}

string Book::toString() const {
    stringstream ss;
    ss << "Title: " << title << endl
        << "Author: " << author << endl;
    return ss.str();
}

/*
class Book {
    
    private:
        std::string title;
        std::string author;

    public:
        Book(const std::string t, const std::string a);

        //Acessors/Mutators
        std::string getTitle();
        std::string getAuthor();

        void setTitle(const string s);
        void setAuthor(const string s);

        //Output
        std::string toString();

}
*/
