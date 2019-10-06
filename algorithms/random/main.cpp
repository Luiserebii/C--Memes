#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::ostream;
using std::cout;
using std::endl;

using std::partition;
using std::stable_partition;

bool isEven(int d);
void printVector(const vector<int>& v, ostream& out, bool headline = true);

int main() {
    
    vector<int> meme = {1, 2, 6, 8, 10, 7, 9};
    vector<int> memeCopy = meme;
    cout << "Current vector:" << endl;
    printVector(meme, cout);

    //Partition all the ones that aren't even
    partition(meme.begin(), meme.end(), isEven);

    //Print post-partition
    cout << "Vector post-partition: partition(meme.start(), meme.end(), isEven)" << endl;
    printVector(meme, cout);

    //Partition all the ones that aren't even, in order
    stable_partition(memeCopy.begin(), memeCopy.end(), isEven);

    //Print post-stable_partition
    cout << "Vector post-stable_partition: stable_partition(memeCopy.begin(), memeCopy.end(), isEven)" << endl;
    printVector(memeCopy, cout);
    return 0;
}

bool isEven(int d) {
    return ((d % 2) == 0);
}

void printVector(const vector<int>& v, ostream& out, bool headline) {
    if(headline) out << "====================" << endl;
    for(vector<int>::const_iterator i = v.begin(); i != v.end(); ++i) {
        out << *i << " ";
    }
    if(headline) out << endl << "====================";
    out << endl;
}
