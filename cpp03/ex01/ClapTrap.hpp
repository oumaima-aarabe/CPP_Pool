#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string Name;
        int hit_p;
        int energ_p;
        int attack_dmg;
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
