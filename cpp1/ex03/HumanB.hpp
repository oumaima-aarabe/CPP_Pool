#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class HumanB
{
    Weapon *weapon;
    std::string name;

    public :
         HumanB(std::string name);
        ~HumanB();

        void attack() const;
        void setWeapon(Weapon& _weapon);
        

};

#endif 