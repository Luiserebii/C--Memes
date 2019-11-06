#ifndef GUARD_STRINGLIST_H
#define GUARD_STRINGLIST_H

#include <string>
#include <iostream>

/**
 * StringList is really a construct built on top of an array of chars.
 */

class StringList {
    
    private:
        char* head;
        char* tail;

    public: 
        StringList();
        StringList(size_t size);
        StringList(std::string s);

        //Copy, assign, destruct
        StringList(const StringList& s);
        ~StringList();

        size_t size() const;

        std::string toString() const;
        std::ostream& write(std::ostream& out = std::cout) const;
};

#endif
