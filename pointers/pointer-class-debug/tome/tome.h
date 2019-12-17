#ifndef TOME_H
#define TOME_H

#include <string>

class Tome {
  public:
    Tome();
    Tome(std::string t, int p);
    
    std::string getTitle() const;
    int getPages() const;
    
  private:
    std::string title;
    int pages;

}

#endif
