#include "string.h"
#include <string>

using std::string;

String String::operator+(const String s0) {
    return String(s + s0.getString());
}

String String::operator-(const String s0) {
    string str = "";
    int pos = s.find(s0.getString());
    if(pos != -1) {
        //Get first piece without
        str += s.substr(0, pos);
        //Get second piece without
        str += s.substr(pos + (s0.getString()).length());
        return str;
    } 
    //If we hit here, just return what we have
    return s;
}
