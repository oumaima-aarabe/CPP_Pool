#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat B = Bureaucrat("oumi", 1);
        std::cout << B << std::endl;
        B.decrement();
        B.increment();
        B.increment();
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}