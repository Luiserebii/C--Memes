#include <iostream>
#include "book.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    Book b;    
    cout << b.toString() << endl;

    Book t("Accelerated C++", "Koening, Andrew", "This is a first-rate introductory book that takes a practical approach to solving problems using C++. It covers a much wider scope of C++ programming than other introductory books Ive seen, and in a surprisingly compact format.");
    cout << t.toString() << endl;

    return 0;
}
