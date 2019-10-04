#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Book {
    
    private:
        string title;
        string author;
        string description;

    public: 

        void setTitle();
        void setAuthor();
        void setDescription();

        string getTitle();
        string getAuthor();
        string getDescription();

}

int main() {
    
    return 0;
}
