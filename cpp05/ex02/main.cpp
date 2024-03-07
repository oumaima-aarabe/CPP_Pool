#include "Bureaucrat.hpp"

int main ()
{

    try
    {
        Bureaucrat b =  Bureaucrat("oumi", 23);
        b.decrement();
        Form c = Form("form", 100, 9);
        b.signForm(c);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

}