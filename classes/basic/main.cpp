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
 
        string getTitle();
        string getAuthor();
        string getDescription();

        void setTitle(const string& t);
        void setAuthor(const string& a);
        void setDescription(const string& d);

        string toString();
}

Book::Book() {
    title = "Sample Title";
    author = "Sample Author";
    description = "Sample Description";
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

void setTitle(const string& t) {
    title = t;
}

void setAuthor(const string& a) {
    author = a;
}

void setDescription(const string& d) {
    description = d;
}

string Book::toString() {
    return title + "\n" + author + "\n" + description;
}

int main() {
    
    return 0;
}
