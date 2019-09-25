#include <string>

class Prompter {

    private:
        Option[] options;


    public:
        //This is how to create an abstract method, I think?
        //Uh oh, issue here... We
        virtual Option[] getOptions() = 0;
        virtual void setOptions(Option[] opts = 0);

}

struct Option {
    int id;
    string name;
}
