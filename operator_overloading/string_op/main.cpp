#include <string>
using std::string;

class String {

    private: 
        string s;
    public:
        String();
        String(const string str) { s = str; }

        string getString() const { return s; }
        void setString(const string str) { s = str; }

        // + operator concatenates internal strings together
        // - operator removes string, if existing
        // * operator "multiplies" the internal string by the integer passed in second operand
        // / operator "divides" the internal string by the integer passed in the second operand
        // [] operator obtains a char from the string
        String operator+(const String stringO);
        String operator-(const String stringO);
};

String String::operator+(const String stringO) {
    return String(s + stringO.getString());
}

String String::operator-(const String stringO) {
    string str = "";
    int pos = s.find(stringO.getString());
    if(pos != -1) {
        //Get first piece without
        str += s.substr(0, pos);
        //Get second piece without
        str += s.substr(pos + (stringO.getString()).length);
        return str;
    } 
    //If we hit here, just return what we have
    return s;
}

int main() {


}
