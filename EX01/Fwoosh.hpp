#ifndef FWOOSH_HPP
#define FWOOSH_HPP

class ASpell;

class Fwoosh : public ASpell
{
    public:
        Fwoosh();
        ~Fwoosh();
        virtual ASpell *clone() const;
}

#include "ASpell.hpp"
#endif