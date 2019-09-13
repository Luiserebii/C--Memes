#include <iostream>
#include <cstring>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;

char[] tol337c0de(const char[]& str) {

    char[] c0de;
    //Create a copy of our c-string
    strcpy(c0de, str);

    for(size_t i = 0; i < strlen(c0de); i++) {
        if(isalpha(c0de[i])) {
            //Let's grab a lowercase instance to make it easier to identify
            char c = tolower(c0de[i]);
            if(c == 'a') { c0de[i] = '@'; } 
            else if(c == 'e') { c0de[i] = '3'; }
            else if(c == 'i') { c0de[i] = '1'; }
            else if(c == 'o') { c0de[i] = '0'; }
            else if(c == 't') { c0de[i] = '7'; }
        }
    }
    return c0de;
}

char[] dec0de() {

}

int main() {

    const string limit = 25;
    char cstring[limit]; 
    cout << "Type in up to " << limit << " characters for our little c-string: " << endl;

    cin >> cstring;
    cout << "cstring:   " << cstring << endl << "LENGTH:  " << strlen(cstring) << endl;
    if(strlen(cstring) > limit) throw "String passed is too long";


    return 0; 
}


