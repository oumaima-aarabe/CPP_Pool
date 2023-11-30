#include "ClapTrap.hpp"

int main()
{
    ClapTrap o("oumi");
    o.attack("saba"); //play attack msg
    o.beRepaired(5); // repair player
    o.attack("saba");
    o.attack("saba");
    o.attack("saba");
    o.attack("saba");
    o.attack("saba");
    o.attack("saba");
    o.attack("saba");
    o.attack("saba");
    o.beRepaired(5); // repair player with 0 enrg
    o.attack("saba"); // no more energy
    o.takeDamage(8); // reduce hit_p
    o.takeDamage(8); // no more hit_p
    o.attack("saba"); // no hits points
}