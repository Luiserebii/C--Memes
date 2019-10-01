#include <iostream>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::endl;

using std::map;
using std::string;

void createMap(map<int, string>& m);
string wordMapToString(const map<int, string>& m);

int main() {
    map<int, string> m;
    createMap(m);
    string mapStr = wordMapToString(m);
    cout << "Map: " << mapStr << endl;
}

void createMap(map<int, string>& m) {
    m[0] = "Hello";
    m[1] = "I";
    m[2] = "am";
    m[3] = "a";
    m[4] = "word";
    m[5] = "map!";
}

//This is a minor issue in that the last fragment of the string will have
//an extra space, but I am willing to ignore this for the sake of the
//example for the time being
string wordMapToString(const map<int, string>& m) {
    string s = "";
    for(map<int, string>::const_iterator i = m.begin(); i != m.end(); ++i) {
        s += i->second + " ";
    }
    return s;
}
