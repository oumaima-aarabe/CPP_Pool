#include "Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type)
{
}
Weapon::~Weapon()
{

}

const std::string& Weapon::getType() const
{
    return (type);
}
void Weapon::setType(const std::string &_type)
{
    type = _type;
}