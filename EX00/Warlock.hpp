#include <string>
#include <iostream>

class Warlock{
    public:
    ~Warlock();
    Warlock(std::string const name, std::string const title); // const Name(name), Title(title)
    std::string const & getName() const;
    std::string const & getTitle() const;
    void setTitle(std::string const title);
    void setName(std::string const name);
    void introduce() const;

    private:
    std::string name;
    std::string title;
};