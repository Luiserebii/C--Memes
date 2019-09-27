#include <string>
#include <vector>

class GenericPrompter {

    private:
        std::vector<Option> options;


    public:
        //This is how to create an abstract method, I think?
        GenericPrompter();
        std::vector<Option> getOptions();
        void setOptions(Option[] opts);

};

