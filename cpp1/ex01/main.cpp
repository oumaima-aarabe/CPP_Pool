#include "Zombie.hpp"

int main()
{
    Zombie *horde = zombieHorde(10, "saba");
    if (!horde)
        return (1);
    for (int i = 0; i < 10; i++)
        horde[i].announce();
    delete[] horde;
}