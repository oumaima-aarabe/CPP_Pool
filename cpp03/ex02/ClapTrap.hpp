#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string Name;
        unsigned int hit_p;
        unsigned int energ_p;
        unsigned int attack_dmg;
    public:

        ClapTrap();
        ClapTrap(std::string _name);
        ClapTrap(const ClapTrap& ct);
        ClapTrap& operator= (const ClapTrap &ct);
       ~ ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
