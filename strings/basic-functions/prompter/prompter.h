#include <string>
#include <vector>

class Prompter {

    private:
        std::vector<Option> options;


    public:
        //This is how to create an abstract method, I think?
        //Uh oh, issue here... We
        virtual std::vector<Option> getOptions() = 0;
        virtual void setOptions(Option[] opts) = 0;

};

struct Option {
    int id;
    std::string name;
};
