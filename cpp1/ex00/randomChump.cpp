#include "Zombie.hpp"

void randomChump( std::string name)
{
    Zombie rzombie = Zombie(name);
    rzombie.announce();
}