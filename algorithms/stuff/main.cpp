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

const string statusFateDialogue = 
    "Oh my!\
    Watch out!\
    Now, no!\
    KIRLIA, stop that!\
    Kirlia used [MOVE]!\
    Look here! That's quite enough!\
    ...\
    I must apologize to you...\
    My KIRLIA has a TIMID nature...\
    \
    It attacks without warning if it is startled by another person...\
    Are you and your POKéMON all right?"


//Need to map condition to move


int main() {

    setSeed();
    vector<Pokemon> pkmn;

    writePokemon(cout, pkmn);
    
    Status s = rollStatus(pkmn); //Pass reference
    writeStatusFateDialogue(cout, statusFateDialogue, s);
    writePokemon(cout, pkmn);

    return 0;

}

void setSeed() {
    srand(time(NULL));
}


