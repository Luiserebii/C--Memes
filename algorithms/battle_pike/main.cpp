#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <exception>

using std::cin;
using std::cout;
using std::endl;

using std::string;
using std::stringstream;
using std::vector;
using std::ostream;
using std::domain_error;

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
};

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
    Are you and your POKéMON all right?";


//Need to map condition to move

void setSeed();
void fillPokemon(vector<Pokemon>& pkmn);
ostream& writePokemon(ostream& out, const vector<Pokemon>& pkmn);
string pokemonToString(const vector<Pokemon>& pkmn);
Status rollStatus(vector<Pokemon>& pkmn);
Status rollStatus();
string statusToString(Status s);

int main() {

    setSeed();
    vector<Pokemon> pkmn;
    //fill mons
    fillPokemon(pkmn);

    //Write mons to show filled mons
    writePokemon(cout, pkmn);
    
    Status s = rollStatus(pkmn); //Pass reference
//    writeStatusFateDialogue(cout, statusFateDialogue, s);
    writePokemon(cout, pkmn);

    return 0;

}

void setSeed() {
    srand(time(NULL));
}

void fillPokemon(vector<Pokemon>& pkmn) {
    pkmn.push_back({"Sceptile", HTY});
    pkmn.push_back({"Milotic", HTY});
    pkmn.push_back({"Metagross", HTY});
}

ostream& writePokemon(ostream& out, const vector<Pokemon>& pkmn) {
    return out << pokemonToString(pkmn);
}

string pokemonToString(const vector<Pokemon>& pkmn) {

    stringstream ss;
    typedef vector<Pokemon>::const_iterator iter;
    for(iter i = pkmn.begin(); i != pkmn.end(); ++i) {
        ss << i->name;
        if(i->status != HTY) ss << " [ " << statusToString(i->status) << " ]";
        ss << endl;
    }
    return ss.str();

}

Status rollStatus(vector<Pokemon>& pkmn) {
    Status s = rollStatus();
    typedef vector<Pokemon>::iterator iter;
    for(iter i = pkmn.begin(); i != pkmn.end(); ++i) {
        int roll = rand() % 3;
        if(roll == 0) i->status = s;
    }
    return s;
}

Status rollStatus() {
    int roll = rand() % 5;
    if(roll == 0) return PAR;
    if(roll == 1) return BRN;
    if(roll == 2) return PSN;
    if(roll == 3) return FRZ;
    if(roll == 4) return SLP;
    throw domain_error("Status not in range for rolling a status condition at the Battle Pike!");
}

string statusToString(Status s) {
    if(s == PAR) return "PAR";
    if(s == BRN) return "BRN";
    if(s == PSN) return "PSN";
    if(s == FRZ) return "FRZ";
    if(s == SLP) return "SLP";
    if(s == FNT) return "FNT";
    throw domain_error("Status not in range for string value!");
}
