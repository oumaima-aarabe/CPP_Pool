#include "Zombie.hpp"


Zombie::Zombie()
{
    std::cout << "Zombie  constructor ..." << std::endl;
}

Zombie::~Zombie(void){
    std::cout << "Zombie " << this->name << " destructor " << std::endl;
}

void Zombie::announce(void){
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string name){
    this->name = name;
}