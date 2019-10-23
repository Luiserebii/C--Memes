#ifndef GUARD_Book_h
#define GUARD_Book_h

#include <string>

class Book {
    
    private:
        std::string title;
        std::string author;
        std::string description;

    public: 
        Book();
        Book(const std::string& t, const std::string& a, const std::string& d);

        std::string getTitle();
        std::string getAuthor();
        std::string getDescription();

        void setTitle(const std::string& t);
        void setAuthor(const std::string& a);
        void setDescription(const std::string& d);

        std::string toString();
};

#endif
