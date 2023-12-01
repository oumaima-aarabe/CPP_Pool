#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const std::string type) : type(type)
{
    std::cout << "Animal parameterized Constructor called" << std::endl;
}
Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
    std::cout << "Animal copy Constructor called" << std::endl;
    *this = animal;
}

Animal& Animal::operator=(const Animal& animal)
{
    std::cout << "Animal copy assignation operator called" << std::endl;
    this->type = animal.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}
