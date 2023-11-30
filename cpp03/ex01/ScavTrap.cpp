#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default Constructor called"  << std::endl;
    Name = "ScavTrap";
    hit_p = 100;
    energ_p = 50;
    attack_dmg = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Parametrized Constructor called"  << std::endl;
    Name = name;
    hit_p = 100;
    energ_p = 50;
    attack_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap) : ClapTrap(scavTrap)
{
	std::cout << "ScavTrap Copy constructor called"  << std::endl;
	*this = scavTrap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& st)
{
	// std::cout << "ScavTrap Assignation operator called"  << std::endl;
	this->Name = st.Name;
	this->hit_p = st.hit_p;
	this->energ_p = st.energ_p;
	this->attack_dmg = st.attack_dmg;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << Name << "  is now in Gate keeper mode."  << std::endl;
}

void ScavTrap::attack(const std::string& target){
   if (!hit_p || !energ_p)
      std::cout << "ScavTrap " << Name << " can’t do anything to " << target << std::endl;
   else
   {
      energ_p--;
      std::cout << "ScavTrap " << Name << " attacks " << target << " causing " << attack_dmg << " points of damage!";
      std::cout << std::endl;
   }
}
