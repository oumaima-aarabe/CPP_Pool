#include "Bureaucrat.hpp"

int main ()
{

    try
    {
        Bureaucrat b =  Bureaucrat("oumi", 23);
        b.decrement();
        Form c = Form("form", 100, 9);
        Form form = Form("form1", 5, 96);
        b.signForm(c);
        b.signForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

}