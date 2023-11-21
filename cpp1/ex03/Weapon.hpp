#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(const std::string type);
        ~Weapon();

        const std::string& getType();
        void setType(std::string &_type);
};

#endif