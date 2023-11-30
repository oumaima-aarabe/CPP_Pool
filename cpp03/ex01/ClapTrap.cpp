#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
   std::cout << "Default constructor called.." << std::endl;
   Name = "random";
   hit_p = 10;
   energ_p = 10;
   attack_dmg = 0;
}


ClapTrap::ClapTrap(std::string _name){
   std::cout << "parameterized constructor called.." << std::endl;
    Name = _name;
    hit_p = 10;
   energ_p = 10;
   attack_dmg = 0;

}


ClapTrap& ClapTrap::operator= (const ClapTrap &ct){
   std::cout << "copy assignment operator overload called" << std::endl;
    this->Name = ct.Name;
    this->energ_p = ct.energ_p;
    this->hit_p = ct.hit_p;
    this->attack_dmg = ct.attack_dmg;
    return (*this);

}

ClapTrap::ClapTrap(const ClapTrap& ct){
   std::cout << "copy constructor called.." << std::endl;
    *this = ct;
}

void ClapTrap::attack(const std::string& target){
   if (!hit_p || !energ_p)
      std::cout << "ClapTrap " << Name << " can’t do anything to " << target << std::endl;
   else
   {
      energ_p--;
      std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << attack_dmg << " points of damage!";
      std::cout << std::endl;
   }
}

void ClapTrap::takeDamage(unsigned int amount){

   if ((int)amount <= 0){

      std::cout << "invalid amount" << std::endl;
      return;
   }
   if (amount >= hit_p && hit_p)
   {
      std::cout << "not enough hit points to support the amount " << amount << " of damage";
      std::cout << std::endl;
      hit_p = 0;
   }
   else if (hit_p)
   {
      hit_p -= amount;
      std::cout << Name << " took " << amount << " points of damage. ";
      std::cout << "his hit points now stand at " << hit_p << std::endl;

   }
   if (!hit_p)
      std::cout << Name << " is dead" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount){
    if ((int)amount <= 0){

      std::cout << "invalid amount" << std::endl;
      return;
   }
   if (!hit_p)
      std::cout << Name << " has already died" << std::endl;
   else if (!energ_p)
      std::cout << "ClapTrap " << Name << " has no energy left to be repaired" <<  std::endl;
   else
   {
      hit_p+= amount;
      energ_p--;
      std::cout << "ClapTrap " << Name << " repaired by "  << amount << " `hits points back!";
      std::cout << std::endl;
   }

}

ClapTrap::~ClapTrap(){
   std::cout << "Default destructor called.." << std::endl;
}