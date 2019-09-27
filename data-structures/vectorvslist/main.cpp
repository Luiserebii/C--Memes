#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>

#include <vector>
#include <list>

#include "time.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::ostream;
using std::rand;
using std::srand;

using std::vector;
using std::list;

using std::chrono::high_resolution_clock;
using std::chrono::time_point;
/*
std::ostream& printTimeDifference(std::ostream& out, std::chrono::high_resolution_clock::time_point a, std::chrono::high_resolution_clock::time_point b, std::string prefix = "", std::string postfix = "");
std::string timeDifferenceToString(std::chrono::high_resolution_clock::time_point a, std::chrono::high_resolution_clock::time_point b);
*/std::string toTitle(std::string str);

void vectorInsertDelete(std::vector<int>& v);
void listInsertDelete(std::list<int>& l);

/*struct TimeRecord {
    std::chrono::high_resolution_clock::time_point start;
    std::chrono::high_resolution_clock::time_point end;
};*/

/**
 * Exercise:
 * 
 * Attempt to absorb a random data set of integers, load them into a vector and list.
 * Within both data structures, iterate through each one by one. Randomly make a delete and
 * insert at the same position. Compare by benchmarking the time.
 */
int main() {

    //Build a vector and list from file
    cout << "Building <vector> and <list> from random..." << endl;
    cout << "Enter a size: "; 
    double size;
    cin >> size;

    vector<int> v;
    list<int> l;

    //Set RNG random seed
    srand(time(NULL));

    for(double i = 0; i < size; ++i) {
        int n = rand();
        v.push_back(n);
        l.push_back(n);
    }

    //Finally, let's engage in execution and benchmarking...
    TimeRecord vTime, lTime;

    //Test our insert/delete algorithm on <vector>
    vTime.start = high_resolution_clock::now();
    vectorInsertDelete(v);
    vTime.end = high_resolution_clock::now();
    printTimeDifference(cout, vTime.start, vTime.end, toTitle("<vector> test"));

    //...and, on list...
    lTime.start = high_resolution_clock::now();
    listInsertDelete(l);
    lTime.end = high_resolution_clock::now();
    printTimeDifference(cout, lTime.start, lTime.end, toTitle("<list> test"));

    return 0;
}

void vectorInsertDelete(vector<int>& v) {
    
    //Just for logging:
    /*typedef vector<int>::size_type v_size;
    v_size initialSize = v.size();
    v_size numOfExecs = 0;*/

    for(vector<int>::iterator i = v.begin(); i < v.end(); ++i) {
        //Roll from 0 - 2
        int n = rand() % 3;
        if(n == 0) {
            //Erase element, grab returned iterator to next position
            vector<int>::iterator pos = v.erase(i);
            //Generate random int and insert
            vector<int>::iterator newPos = v.insert(pos, rand());
            //Advance newPos once, and set it to our i to continue traversal
            ++newPos;
            i = newPos;

            //For logging:
            //++numOfExecs;
        }
    }
    //For logging:
    /*v_size endSize = v.size();
    cout << "Logging: " << endl << "Initial size: " << initialSize << endl << "End size: " << endSize << endl;
    cout << "Number of executions: " << numOfExecs << endl;
    cout << "[TESTERS NOTE]: The sizes should be the same, as each position is 1 opportunity for an insert/delete" << endl;
    */
}

void listInsertDelete(list<int>& l) {

    //Just for logging:
    /*typedef list<int>::size_type l_size;
    l_size initialSize = l.size();
    l_size numOfExecs = 0;
    */
    //Note the usage of != here; we don't have a sense of direction in indexing, "<" operator is non-existent;
    //we thus use this 
    for(list<int>::iterator i = l.begin(); i != l.end(); ++i) {
        //Roll from 0 - 2
        int n = rand() % 3;
        if(n == 0) {
            //Erase element, grab returned iterator to next position
            list<int>::iterator pos = l.erase(i);
            //Generate random int and insert
            list<int>::iterator newPos = l.insert(pos, rand());
            //Advance newPos once, and set it to our i to continue traversal
            ++newPos;
            i = newPos;

            //For logging:
            //++numOfExecs;
        }
    }
    //For logging:
    /*l_size endSize = l.size();
    cout << "Logging: " << endl << "Initial size: " << initialSize << endl << "End size: " << endSize << endl;
    cout << "Number of executions: " << numOfExecs << endl;
    cout << "[TESTERS NOTE]: The sizes should be the same, as each position is 1 opportunity for an insert/delete" << endl;
    */

}

string toTitle(string str) {
    string::size_type size = str.size() + 1;
    string headline(size, '=');
    return headline + "\n" + str + "\n" + headline + "\n";
}
