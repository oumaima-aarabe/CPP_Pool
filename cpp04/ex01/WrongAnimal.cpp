#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : type(type)
{
    std::cout << "WrongAnimal Parametrized Constructor called" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wronganimal)
{
    std::cout << "WrongAnimal copy Constructor called" << std::endl;
    *this = wronganimal;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wronganimal)
{
    std::cout << "WrongAnimal copy assignation operator called" << std::endl;
    this->type = wronganimal.type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
