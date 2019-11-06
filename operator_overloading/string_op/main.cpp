#include "string.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {

    String s = String("uguu");
    String t = String("owo");

    cout << "String s: " << s.str() << endl;
    cout << "String t: " << t.str() << endl;
    String sum = s + t;
    cout << "s + t: " << sum.str() << endl; 

}
