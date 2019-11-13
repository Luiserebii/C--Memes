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

        int getVal() const { return val; }

    private:
        int val;





};


#endif
