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

String String::operator*(int n) {
    string str = "";
    for(int i = 0; i < n; ++i) {
        str += s;
    }
    return String(str);
}

String String::operator/(int n) {
    int pos = s.length()/n;
    return String(s.substr(0, pos));
}

char& String::operator[](size_t i) {
    return s.at(i);
}
