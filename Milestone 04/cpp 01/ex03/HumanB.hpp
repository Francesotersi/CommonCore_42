#include <string>
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    private:
        Weapon      *weapon;
        std::string name;

    public:
        HumanB(std::string name);
        ~HumanB();

        void    setWeapon(Weapon &weapon);
        void    attack();
} ;

#endif