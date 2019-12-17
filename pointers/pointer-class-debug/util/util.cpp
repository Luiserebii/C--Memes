#include "util.h"
#include "../tome/tome.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::domain_error;

//Static, as we don't want this exposed outside of this file
static vector<Tome*>::iterator vTomeTypeOnlyExists(vector<Tome*>::iterator b, vector<Tome*>::iterator e,
                                                   const string& type) {
    //If we hit the end of the range, just return
    if(b == e) {
        return b;
    }
    //Either recurse or return element found depending on type found
    if((*b)->getType() != type) {
        return b;
    } else {
        //Increment pointer b and recurse
        vTomeTypeOnlyExists(++b, e, type);
    }
}

void vTomeOutput(const vector<Tome*>& v) {
    if(v.empty()) {
        return;
    }
    //Print the first vector element
    (*v.begin())->output();
    //cout << "Address: " << (*v.begin()) << endl;
    //For legibility, print a newline at the end
    cout << endl;
    //Recursively call, passing a smaller vector
    vTomeOutput(vector<Tome*>(v.begin() + 1, v.end()));
}

vector<Tome*> vTomeTrim(const vector<Tome*>& vIn, const string& type) {
    //Construct a vector we can modify
    vector<Tome*> v(vIn.begin(), vIn.end());
    vector<Tome*>::iterator it;
    //If there are vector pointers which have not other kinds of files, return
    if((it = vTomeTypeOnlyExists(v.begin(), v.end(), type)) == v.end()) {
        cout << "===OwO===" << endl;
        vTomeOutput(v);
        cout << "v: " << v.end() - v.begin() << endl;
        cout << "=========" << endl;
        //vector<Tome*> ret(v.begin(), v.end());
        //cout << "Just forming the ret" << endl;
        //cout << "v: " << ret.end() - ret.begin() << endl;
        //return ret;
        return v;
    }
    //Erase the found element
    v.erase(it);
    vector<Tome*> vNew;
    //Recurse by calling our function once more
    vTomeTrim(v, type);
}


