#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal *animals[6] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat() , new Cat()};

    for (int i = 0; i < 6; i++)
        animals[i]->makeSound();
    for (int i = 0; i < 6; i++)
        delete animals[i];
}
