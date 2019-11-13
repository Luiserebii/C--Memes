#ifndef GUARD_INTEGER_H
#define GUARD_INTEGER_H

#include <string>

class Integer {

    public:
        Integer();
        Integer(int i);
        //Automatic conversion for doubles
        Integer(double d);
        //Construction via strings **MUST** be explicit
        explicit Integer(const std::string& s);

        Integer& operator+=(const Integer& i);
        //Our magical conversion operator; I wonder if this will cause all operators to just sort of work?
        operator int() const { return v; };

        int val() const { return v; }

    private:
        int v;

};

//Testing priority vs. auto-conversion
Integer operator+(const Integer& a, const Integer& b);


#endif
