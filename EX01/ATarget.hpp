#ifndef ATARGET_HPP
#define ATARGET_HPP

class ASpell;

class ATarget{
    protected:
            std::string type;
    public:
            ATarget();
            ATarget(std::string const &type);
            ATarget(ATarget const &other);
            ATarget &operator=(ATarget const &other);
            virtual ~ATarget();
            std::string const &getType() const;
            virtual ATarget *clone() const = 0;
            void    getHitBySpell(ASpell const &spell) const;
};      

#include "ASpell.hpp"
#endif