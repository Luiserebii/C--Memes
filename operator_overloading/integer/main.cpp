#include <iostream>
#include "integer.h"

using std::cout;
using std::endl;

int main() {

    //Testing this stuff out
    cout << "Integer()" << endl;
    Integer a;
    cout << a.val() << endl;

    cout << "Integer(10)" << endl;
    Integer b = 10;
    cout << b.val() << endl;

    cout << "Integer(10.0)" << endl;
    Integer c = 10.0;
    cout << c.val() << endl;

    cout << "Integer(\"10\")" << endl;
    //Integer d = "10"; //Should break
    Integer d("10"); //Should break
    cout << d.val() << endl;   

    cout << "a + b + c" << endl;
    cout << a + b + c << endl;

    cout << "b += Integer(100)" << endl;
    b += Integer(100);
    cout << b << endl;

}
