#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string input;

    while (1) {
        std::cout << "Emalo tani ";
        getline(std::cin, input);
        if (std::cin.eof())
            return (0);
        harl.complain(input);
    }
    return (0);
}
