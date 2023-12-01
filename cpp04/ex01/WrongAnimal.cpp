#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default Constructor called\n";
}

WrongAnimal::WrongAnimal(const std::string type) : type(type)
{
    std::cout << "WrongAnimal Parametrized Constructor called\n";
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& wronganimal)
{
    std::cout << "WrongAnimal copy Constructor called\n";
    *this = wronganimal;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wronganimal)
{
    std::cout << "WrongAnimal copy assignation operator called\n";
    this->type = wronganimal.type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound\n";
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
