#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("SABA");
    Zombie *zombiee = newZombie("oumi");
	randomChump("MEH");
	randomChump("appah");
	delete zombiee;
	delete zombie;
}