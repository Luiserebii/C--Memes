#include <string>
#include <vector>
#include "generic_prompter.h"
/**
class GenericPrompter {

    private:
        std::vector<Option> options;


    public:
        //This is how to create an abstract method, I think?
        GenericPrompter();
        std::vector<Option> getOptions();
        void setOptions(Option[] opts);

};
**/

GenericPrompter::getOptions() {
    return options;
}

GenericPrompter::setOptions(Option[] opts) {
    options = opts;
}

