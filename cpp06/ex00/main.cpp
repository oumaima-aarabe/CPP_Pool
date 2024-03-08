#include "cast.hpp"
#include <iostream>

int main(int ac , char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error :need one param to convert " << std::endl;
        return (1);
    }
    ScalarConverter::convert(av[1]);
}