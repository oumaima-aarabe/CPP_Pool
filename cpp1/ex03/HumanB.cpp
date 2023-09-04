#include "Weapon.hpp"

HumanB::HumanB(std::string _name): name(_name)
{
    std::cout << "HumanB: " << _name << "acreated" << std::endl;
}
HumanB::~HumanB()
{
    std::cout << HumanB::name << " withdrawed " << std::endl;
}
void HumanB::attack()
{
    std::cout << HumanB::name << "attacked with " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon _weapon)
{
    HumanB::weapon = &_weapon;
    std::cout << HumanB::name << "armed with " << _weapon << std::endl;
}