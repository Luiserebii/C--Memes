#ifndef GUARD_STRING_H
#define GUARD_STRING_H

#include <string>

class String {

    private: 
        std::string s;
    public:
        String();
        String(const std::string str) { s = str; }

        std::string getString() const { return s; }
        void setString(const std::string str) { s = str; }

        std::string str() const { return s; }

        // + operator concatenates internal std::strings together
        // - operator removes std::string, if existing
        // * operator "multiplies" the internal std::string by the integer passed in second operand
        // / operator "divides" the internal std::string by the integer passed in the second operand
        // [] operator obtains a char from the std::string
        String operator+(const String sO);
        String operator-(const String sO);
        String operator*(int n);
        String operator/(int n);
        char operator[](size_t i);

};

#endif
