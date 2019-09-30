#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

/**
 *
 * Program with a solid number of mons, structs with const. strings
 * Roll a number for each mon, determining if it has gotten poisoned,
 * paralyzed, frozen - Battle Pike gentleman. Generate a string with
 * this status for each mon, use algs
 *
 **/

enum Status { PAR, BRN, PSN, FRZ, SLP };

struct Pokemon {
    string name;
    Status status;
}

int main() {

    setSeed();

    return 0;

}

void setSeed() {
    srand(time(NULL));
}


