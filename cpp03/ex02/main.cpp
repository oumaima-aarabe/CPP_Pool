#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main ()
{
	FragTrap oumi("oumi");

	oumi.attack("saba");
	oumi.beRepaired(1);
	oumi.takeDamage(1);
	oumi.highFivesGuys();
	// ayoub.guardGate();

}