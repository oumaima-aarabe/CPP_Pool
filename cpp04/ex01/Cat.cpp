#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    brain = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat& Cat::operator=(const Cat& cat)
{
    std::cout << "Cat copy assignation operator called" << std::endl;
    if (this != &cat)
    {
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*cat.brain);
        this->type = cat.type;
    }
    return (*this);
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "miaow miaow" << std::endl;
}
