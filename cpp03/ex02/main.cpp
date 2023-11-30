#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main ()
{
	FragTrap lol("oumi");

	FragTrap lool (lol);
	FragTrap oumi;
	oumi = lool;
	oumi.attack("saba");
	oumi.beRepaired(1);
	oumi.takeDamage(1);
	oumi.highFivesGuys();
}