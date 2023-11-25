#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon): name(_name), weapon(_weapon)
{
}
HumanA::~HumanA()
{
}
void HumanA::attack() const
{
    std::cout << name << "attacked with " ;
    std::cout << weapon.getType() << std::endl;
}