#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string _name): name(_name), weapon(NULL)
{
}
HumanB::~HumanB()
{
}
void HumanB::attack() const
{
    if (weapon != NULL)
        std::cout << name << "attacked with " << weapon->getType() << std::endl;
    else
        std::cout << "no weapon to attack" << std::endl;
}

void HumanB::setWeapon(Weapon &_weapon)
{
    HumanB::weapon = &_weapon;
}