#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor called\n";
}

Animal::Animal(const std::string type) : type(type)
{
    std::cout << "Animal parameterized Constructor called\n";
}
Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

Animal::Animal(const Animal& animal)
{
    std::cout << "Animal copy Constructor called\n";
    *this = animal;
}

Animal& Animal::operator=(const Animal& animal)
{
    std::cout << "Animal copy assignation operator called\n";
    this->type = animal.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}
