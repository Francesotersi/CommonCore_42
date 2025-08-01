#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();

        void    nameZombie(std::string name);
        void    announce(void);
};


Zombie  *newZombie (std::string name);
void    randomChump(std::string name);


#endif 