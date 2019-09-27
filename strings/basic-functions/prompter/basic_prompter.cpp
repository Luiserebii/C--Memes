#include <string>
#include <vector>
#include "basic_prompter.h"
/**
class BasicPrompter {

    private:
        std::vector<Option> options;


    public:
        //This is how to create an abstract method, I think?
        GenericPrompter();
        std::vector<Option> getOptions();
        void setOptions(Option[] opts);

};
**/

BasicPrompter::getOptions() {
    return options;
}

BasicPrompter::setOptions(Option[] opts) {
    options = opts;
}

