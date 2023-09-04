#include "Weapon.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon): name(_name), weapon(_weapon)
{
    std::cout << "HumanA: " << _name << "armed with " << weapon.getType() << std::endl;
}
HumanA::~HumanA()
{
    std::cout << HumanA::name << " withdrawed " << std::endl;
}
void HumanA::attack()
{
    std::cout << HumanA::name << "attacked with " ;
    std::cout << HumanA::weapon << std::endl;
}