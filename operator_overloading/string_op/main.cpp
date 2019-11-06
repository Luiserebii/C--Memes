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
        String operator+(const String string);

};

String String::operator+(const String string) {
    return String(s + string.getString());
}

int main() {


}
