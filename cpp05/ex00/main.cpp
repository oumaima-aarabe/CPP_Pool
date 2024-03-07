#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat B = Bureaucrat("oumi", 16);
        B.increment();
        B.decrement();
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}