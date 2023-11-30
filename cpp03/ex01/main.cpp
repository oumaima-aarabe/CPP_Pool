#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main ()
{
	ScavTrap saba("oumi");

	ScavTrap oumi(saba);

	saba.attack("saba");
	saba.beRepaired(5);
	saba.takeDamage(1);
	saba.takeDamage(10);
	saba.guardGate();

}