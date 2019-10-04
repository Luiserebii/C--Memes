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
 
        void setTitle();
        void setAuthor();
        void setDescription();

        string getTitle();
        string getAuthor();
        string getDescription();

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

string Book::toString() {
    
}

int main() {
    
    return 0;
}
