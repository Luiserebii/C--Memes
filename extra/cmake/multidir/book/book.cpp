#include <string>
#include "book.h"

using std::string;

Book::Book() {
    title = "Sample Title";
    author = "Sample Author";
    description = "Sample Description";
}

Book::Book(const string& t, const string& a, const string& d) {
    setTitle(t);
    setAuthor(a);
    setDescription(d);
}

string Book::getTitle() {
    return title;
}

string Book::getAuthor() {
    return author;
}

string Book::getDescription() {
    return description;
}

void Book::setTitle(const string& t) {
    title = t;
}

void Book::setAuthor(const string& a) {
    author = a;
}

void Book::setDescription(const string& d) {
    description = d;
}

string Book::toString() {
    return title + "\n" + author + "\n" + description;
}
