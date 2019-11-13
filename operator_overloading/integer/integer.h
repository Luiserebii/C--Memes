#ifndef GUARD_INTEGER_H
#define GUARD_INTEGER_H


class Integer {

    public:
        Integer();
        Integer(int i);
        //Automatic conversion for doubles
        Integer(double d);
        //Construction via strings **MUST** be explicit
        explicit Integer(const string& s);

    private:
        int val;





}


#endif
