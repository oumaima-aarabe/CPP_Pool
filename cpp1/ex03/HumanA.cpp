#include "Weapon.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon): name(_name), weapon(_weapon)
{
    std::cout << "HumanA: " << _name << "armed with " << weapon.getType() << std::endl;
}
HumanA::~HumanA()
{
    std::cout << name << " withdrawed " << std::endl;
}
void HumanA::attack()
{
    std::cout << name << "attacked with " ;
    std::cout << weapon << std::endl;
}