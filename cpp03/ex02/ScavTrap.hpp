#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& scavTrap);
        ScavTrap& operator=(const ScavTrap& scavTrap);
        ~ScavTrap();
        
        void guardGate();
        void attack(const std::string& target);
};