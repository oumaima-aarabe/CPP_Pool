#include "Weapon.hpp"

Weapon::Weapon(const std::string type)
{

}
Weapon::~Weapon()
{

}

const std::string& Weapon::getType()
{
    return (type);
}
void Weapon::setType(std::string &_type)
{
    type = _type;
}