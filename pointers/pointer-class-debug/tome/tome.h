#ifndef TOME_H
#define TOME_H

#include <string>

class Tome {
  public:
    Tome();
    Tome(std::string tt, std::string tp, int p);
    
    std::string getTitle() const;
    std::string getType() const;
    int getPages() const;
    
  private:
    std::string title;
    std::string type;
    int pages;

}

#endif
