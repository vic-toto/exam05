#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
class   ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;
    public:
    ASpell();
    ASpell(Aspell const &other);
    ASpell(std::string const &name, std::string const &effects);
    virtual ~ASpell();
    std::string const &getName() const;
    std::string const &getEffects() const;
    ASpell &operato=(ASpell const &other);
    virtiaul ASpell *clone() const = 0;
};

#incluse "ATarget.hpp"
#endif