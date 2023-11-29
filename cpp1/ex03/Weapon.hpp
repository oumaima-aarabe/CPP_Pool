#pragma once

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string _type) ;
        ~Weapon();

        const std::string& getType() const;
        void setType(const std::string &_type);
};