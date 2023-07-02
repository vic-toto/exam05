#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(){
    std::cout << this->name << ": My job here is done!" << std::endl;
}

void Warlock::setTitle(std::string title) {this->title = title;}

std::string const & Warlock::getName() const { return (name); }

std::string const & Warlock::getTitle() const { return (title); }

void Warlock::introduce() const{
    std::cout << getName() << ": I am " << getName() <<", " << getTitle() << "!" << std::endl;
}