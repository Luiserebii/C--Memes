#include "string.h"
#include <iostream>
#include <string>

using std::ostream;
using std::cout;
using std::endl;
using std::string;

ostream& print(const String& sO, const string& name);
ostream& title(const string& msg);

int main() {

    //operator+
    title("operator+");
    String s = String("uguu");
    String t = String("owo");

    print(s, "s");
    print(t, "t");

    String sum = s + t;
    cout << "s + t: " << sum.str() << endl << endl; 

    //operator-
    title("operator-");
    String f = String("Fly me to the moon");
    String m = String("me to the ");
    
    print(f, "f");
    print(m, "m");

    String diff = f - m;
    cout << "f - m: " << diff.str() << endl << endl;

    //operator*
    title("operator*");
    String prod = s * 5;
    cout << "s * 5: " << prod.str() << endl << endl;

    //operator/
    title("operator/");
    String quot = prod / 5;
    cout << "prod / 5: " << quot.str() << endl << endl;

    //operator[]  
    title("operator[]");
    cout << "s[3]: " << f[3] << endl;

}

ostream& print(const String& sO, const string& name) {
    cout << "String " << name << ": " << sO.str() << endl;
    return cout;
}

ostream& title(const string& msg) {
    cout << msg << endl << "=====================" << endl; 
    return cout;
}
