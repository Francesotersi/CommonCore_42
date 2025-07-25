#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>


class Weapon
{
    private:
        std::string type;

    public:
        Weapon( void ){};
        Weapon(std::string newType);
        ~Weapon();

        const std::string&  getType() const;
        void                setType(std::string newType);
} ;

#endif