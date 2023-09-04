#include "Zombie.hpp"


Zombie::Zombie(std::string s) : name(s)
{
    std::cout << "IN YOUR HEAAAAAAAD " << name << std::endl;
}

Zombie::~Zombie(void){
    std::cout << "catchuletta " << name << std::endl;
}

void Zombie::announce(void){
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}