//For logging
/*#include <iostream>

using std::cin;
using std::cout;
using std::endl;*/

#include <vector>
#include <list>

#include "execution.h"

using std::vector;
using std::list;

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
