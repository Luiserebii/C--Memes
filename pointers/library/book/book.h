#ifndef GUARD_BOOK_H
#define GUARD_BOOK_H
#include <string>

class Book {
    
    private:
        std::string title;
        std::string author;

    public:
        Book();
        Book(const std::string title, const std::string author);

        //Acessors/Mutators
        std::string getTitle() const;
        std::string getAuthor() const;

        void setTitle(const std::string s);
        void setAuthor(const std::string s);

        bool isEmpty() const;

        //Output
        std::string toString() const;

};

#endif
