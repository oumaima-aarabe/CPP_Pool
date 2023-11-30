#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default Constructor called"  << std::endl;
    Name = "FragTrap";
    hit_p = 100;
    energ_p = 100;
    attack_dmg = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Parametrized Constructor called"  << std::endl;
    Name = name;
    hit_p = 100;
   energ_p = 100;
   attack_dmg = 30;
}

FragTrap::FragTrap(const FragTrap& fragTrap) : ClapTrap(fragTrap)
{
	std::cout << "FragTrap Copy constructor called"  << std::endl;
	*this = fragTrap;
}

FragTrap& FragTrap::operator=(const FragTrap& ft)
{
	std::cout << "FragTrap Assignation operator called"  << std::endl;
	this->Name = ft.Name;
	this->hit_p = ft.hit_p;
	this->energ_p = ft.energ_p;
	this->attack_dmg = ft.attack_dmg;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << Name << "  asks for a high five"  << std::endl;
}

void FragTrap::attack(const std::string& target){
   if (!hit_p || !energ_p)
      std::cout << "FragTrap " << Name << " can’t do anything to " << target << std::endl;
   else
   {
      energ_p--;
      std::cout << "FragTrap " << Name << " attacks " << target << " causing " << attack_dmg << " points of damage!";
      std::cout << std::endl;
   }
}
