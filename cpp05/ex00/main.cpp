#include "Bureaucrat.hpp"

int main()
{
    try {
            Bureaucrat B = Bureaucrat("oumi", 150);
            B.decrement();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}