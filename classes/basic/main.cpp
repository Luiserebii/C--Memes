#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::string;

class Book {
    
    private:
        string title;
        string author;
        string description;

    public: 
        
        Book();
        Book(const string& t, const string& a, const string& d);

        string getTitle();
        string getAuthor();
        string getDescription();

        void setTitle(const string& t);
        void setAuthor(const string& a);
        void setDescription(const string& d);

        string toString();
};

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

int main() {
    Book b;    
    cout << b.toString() << endl;

    Book t("Accelerated C++", "Koening, Andrew", "This is a first-rate introductory book that takes a practical approach to solving problems using C++. It covers a much wider scope of C++ programming than other introductory books Ive seen, and in a surprisingly compact format.");
    cout << t.toString() << endl;

    return 0;
}
