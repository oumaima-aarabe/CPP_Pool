#include "Weapon.hpp"

Weapon::Weapon(const std::string type)
{

}
Weapon::~Weapon()
{

}

const std::string Weapon::getType()
{
    return (Weapon::type);
}
void Weapon::setType(std::string _type)
{
    Weapon::type = _type;
}