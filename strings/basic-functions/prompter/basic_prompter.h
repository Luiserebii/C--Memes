#ifndef GUARD_Basic_Prompter_h
#define GUARD_Basic_Prompter_h

#include <string>
#include <vector>
#include "prompter.h"

class BasicPrompter is Prompter {

    private:
        std::vector<Option> options;


    public:
        //This is how to create an abstract method, I think?
        GenericPrompter();
        std::vector<Option> getOptions();
        void setOptions(vector<Option> opts);

};

#endif
