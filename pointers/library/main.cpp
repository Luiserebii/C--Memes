#include "library/library.h"
#include "book/book.h"

#include <iostream>

using std::cout;
using std::endl;

int main() {

    Library l;

    Book b("The End Of Memes", "Guy, Some");
    Book c("The Meme in the Memechine", "Koestler, Arthur");
    l.addBook(b);
    l.addBook(c);
    l.write(cout);
    //Testing getting a book
    cout << "Testing getBook()" << endl;
    cout << l.getBook(1).toString() << endl;
}
