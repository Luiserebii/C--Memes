#include <iostream>
#include <vector>

using std::vector;
using std::ostream;
using std::cout;
using std::endl;

bool isEven(int d);
void printVector(const vector<int>& v, ostream& out);

int main() {
    
    vector<int> meme = {1, 2, 6, 8, 10, 7, 9};

    return 0;
}

bool isEven(int d) {
    return ((d % 2) == 0);
}

void printVector(const vector<int>& v, ostream& out) {
    for(vector<int>::const_iterator i = v.begin(); i != v.end(); ++i) {
        out << *i << " ";
    }
}
