#include <iostream>
#include <map>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::map;
using std::vector;
using std::string;

enum Meme { LOL, LMAO, XD };
typedef map<Meme, string> MemeMapping;

void loadMemes(map<Meme, vector<string> >& m);
string memesToString(const map<Meme, vector<string> >& m);
MemeMapping loadMemeNames();

const MemeMapping memeNames = loadMemeNames();

int main() {

    //Note the "> >" at the end; to prevent confusion with >> operator
    map<Meme, vector<string> > m;
    loadMemes(m);
    cout << memesToString(m) << endl;
    

    return 0;
}

void loadMemes(map<Meme, vector<string> >& m) {
    m[LOL].push_back("This is a funny LOL string");
    m[LOL].push_back("A LOL string that is supposed to be funny");
    m[LOL].push_back("A combination of characters aligned in a sequential fashion intended to produce laughter within those who read them in a particularly arranged order, also happening to be tagged as LOL");
    m[LMAO].push_back("LMAO - I am quickly losing my originality");
    m[LMAO].push_back("An excellent sentence to LMAO in");
    m[XD].push_back("XD, so funny");
    m[XD].push_back("Pokemon XD: Gale of Darkness");
    m[XD].push_back("I am ready to XD if you are");
    m[XD].push_back("Has anyone told you what lovely XD you have?");
}

string memesToString(const map<Meme, vector<string> >& m) {
    string str = "";
    typedef map<Meme, vector<string> >::const_iterator memeIter;
    for(memeIter i = m.begin(); i != m.end(); ++i) {
        //Grab first pair element
        //Print the string name of the enum
        const Meme memeEnum = i->first;
        //NOTE: Seems like even when using find() to grab the iterator, we will be using the -> operator
        //shortcut anyways. In general, good rule of thumb to remember using: ->first or ->second when
        //getting any kind of iterator back from a map
        const string memeStr = memeNames.find(memeEnum)->second;
        str += "[ " + memeStr + " ]" + "\n";

        //Iterate through the vector<string> and print them each
        for(vector<string>::const_iterator j = i->second.begin(); j != i->second.end(); ++j) {
            str += "      " + *j + "\n";
        }
        str += "====================================\n";
    }
    return str;
}

MemeMapping loadMemeNames() {
    MemeMapping m;
    m[LOL] = "LOL";
    m[LMAO] = "LMAO";
    m[XD] = "XD";
    return m;
}
