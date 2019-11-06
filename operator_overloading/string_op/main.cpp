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

//    cout << "String s: " << s.str() << endl;
//    cout << "String t: " << t.str() << endl;
    print(s, "s");
    print(t, "t");

    //operator+
    String sum = s + t;
    cout << "s + t: " << sum.str() << endl; 

    //operator-

//    String diff = String("Fly me to the moon") - String("me to the ");
//    cout << ""

}

ostream& print(const String& sO, const string& name) {
    cout << "String " << name << ": " << sO.str() << endl;
    return cout;
}
