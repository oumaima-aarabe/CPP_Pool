#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try{

    Bureaucrat              bureaucrat("Bureaucrat", 1);
    PresidentialPardonForm  form("Form");
    ShrubberyCreationForm   form1("Form1");
    RobotomyRequestForm     form2("Form2");

    std::cout << bureaucrat << std::endl;
    std::cout << form << std::endl;

    form.beSigned(bureaucrat);
    form1.beSigned(bureaucrat);
    form2.beSigned(bureaucrat);
    form.execute(bureaucrat);
    form1.execute(bureaucrat);
    form2.execute(bureaucrat);
    form2.execute(bureaucrat);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}