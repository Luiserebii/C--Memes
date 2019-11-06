#include "string.h"
#include <iostream>
#include <string>

using std::ostream;
using std::cout;
using std::endl;
using std::string;

ostream& print(const String& sO, const string& name);

int main() {

    String s = String("uguu");
    String t = String("owo");

    print(s, "s");
    print(t, "t");

    //operator+
    String sum = s + t;
    cout << "s + t: " << sum.str() << endl; 

    //operator-
    String f = String("Fly me to the moon");
    String m = String("me to the ");
    
    print(f, "f");
    print(m, "m");

    String diff = f - m;
    cout << "f - m: " << diff.str() << endl;

    //operator*

    //operator/

    //operator[]  

}

ostream& print(const String& sO, const string& name) {
    cout << "String " << name << ": " << sO.str() << endl;
    return cout;
}
