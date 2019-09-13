#include <iostream>
#include <cstring>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;


char[] tol337c0de(const char[]& str);
char[] d3c0de(const char[]& str);
bool is3qu@l(const char[]& str1, const char[]& str2);

/**
 * NOTE: UNTIL WE BETTER UNDERSTAND RETURNING ARRAYS FROM FUNCTIONS, THIS CODE WILL BE LEFT
 * ABANDONED FOR THE TIME BEING
 **/



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

char[] d3c0de(const char[]& str) {

}

bool is3qu@l(const char[]& str1, const char[]& str2) {
    if(strlen(str1) != strlen(str2)) return false;
    char[] l1 = tol337c0de(str1);
    char[] l2 = tol337c0de(str2);
    
    for(size_t i = 0; i < strlen(l1); i++) {
        if(l1[i] != l2[i]) return false;
    }

    return true;
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


