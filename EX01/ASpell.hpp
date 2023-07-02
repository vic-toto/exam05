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
    ASpell(ASpell const &other);
    ASpell(std::string const &name, std::string const &effects);
    virtual ~ASpell();
    std::string const &getName() const;
    std::string const &getEffects() const;
    ASpell &operator=(ASpell const &other);
    virtual ASpell *clone() const = 0;
    void launch(ATarget const &target) const;
};

#include "ATarget.hpp"
#endif