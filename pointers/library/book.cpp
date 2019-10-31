#include "book.h"

#include <string>
using std::string;

Book::Book(const string t, const string a): title(t), author(a) {
    
}

string Book::getTitle() {
    return title;
}

string Book::getAuthor() {
    return author;
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
