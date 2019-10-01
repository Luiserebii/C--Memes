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

enum Meme { LOL, LMAO, XD }

int main() {

    //Note the "> >" at the end; to prevent confusion with >> operator
    map<Meme, vector<string> > m;

    return 0;
}

loadMemes(map<Meme, vector<string> >& m) {
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
