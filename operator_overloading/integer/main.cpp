#include <iostream>
#include "integer.h"

using std::cout;
using std::endl;

int main() {

    //Testing this stuff out
    cout << "Integer()" << endl;
    Integer a;
    cout << a.getVal() << endl;

    cout << "Integer(10)" << endl;
    Integer b = 10;
    cout << b.getVal() << endl;

    cout << "Integer(10.0)" << endl;
    Integer c = 10.0;
    cout << c.getVal() << endl;

    cout << "Integer(\"10\")" << endl;
    //Integer d = "10"; //Should break
    Integer d("10"); //Should break
    cout << d.getVal() << endl;   


}
