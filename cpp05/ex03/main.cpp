#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try{
        Intern someRandomIntern;
        AForm* rrf;

        rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
        std::cout << *rrf;
        delete rrf;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}