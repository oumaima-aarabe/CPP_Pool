#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main ()
{
	ScavTrap ayoub("oumi");

	ScavTrap oumi(ayoub);

	ayoub.attack("saba");
	ayoub.beRepaired(1);
	ayoub.takeDamage(1);
	ayoub.guardGate();

}