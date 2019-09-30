#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

using std::ostream;
/**
 *
 * Program with a solid number of mons, structs with const. strings
 * Roll a number for each mon, determining if it has gotten poisoned,
 * paralyzed, frozen - Battle Pike gentleman. Generate a string with
 * this status for each mon, use algs
 *
 **/
//HTY = Healthy
enum Status { HTY, PAR, BRN, PSN, FRZ, SLP, FNT };

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
    //fill mons
    fillPokemon(pkmn);

    //Write mons to show filled mons
    writePokemon(cout, pkmn);
    
//    Status s = rollStatus(pkmn); //Pass reference
//    writeStatusFateDialogue(cout, statusFateDialogue, s);
//    writePokemon(cout, pkmn);

    return 0;

}

void setSeed() {
    srand(time(NULL));
}

void fillPokemon(vector<Pokemon>& pkmn) {
    pkmn.push_back({"Sceptile", "HTY"});
    pkmn.push_back({"Milotic", "HTY"});
    pkmn.push_back({"Metagross", "HTY"});
}

ostream& writePokemon(ostream& out, const vector<Pokemon>& pkmn) {
    return out << pokemonToString(pkmn);
}

string pokemonToString(const vector<Pokemon>& pkmn) {

    stringstream ss;
    typedef vector<Pokemon>::const_iterator iter;
    for(iter i = pkmn.begin(); i != pkmn.end(); ++i) {
        out << pkmn.name;
        if(pkmn.condition != HTY) out << " [" << pkmn.condition << " ]";
        out << endl;
    }
    return ss.str();

}
