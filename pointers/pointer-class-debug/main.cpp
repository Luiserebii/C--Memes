#include "tome/tome.h"
#include "util/util.h"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {

    //Create some Tome instances
    Tome* t1 = new Tome("Accelerated C++", "SOFTCOVER", 300);
    Tome* t2 = new Tome("Modern C", "HARDCOVER", 800);
    Tome* t3 = new Tome("The C Programming Language", "SOFTCOVER", 150);

    //Construct Tome* vector
    vector<Tome*> v;
    v.push_back(t1);
    v.push_back(t2);
    v.push_back(t3);

    /**
     * Main piece of driver
     **/

    //1. Test recursive printing function
    vTomeOutput(v);

    //2. Test recursive conversion function
    vector<Tome*> vTrimSoft = vTomeTrim(v, "SOFTCOVER");
    cout << "===================================================" << endl
         << "Printing output for recursive trimming (SOFTCOVER):" << endl
         << "===================================================" << endl;
    vTomeOutput(vTrimSoft);

    vector<Tome*> vTrimHard = vTomeTrim(v, "HARDCOVER");
    cout << "===================================================" << endl
         << "Printing output for recursive trimming (HARDCOVER):" << endl
         << "===================================================" << endl;
    cout << "RETURNED VAL SIZE: " << vTrimHard.size();
    vTomeOutput(vTrimHard);
}
