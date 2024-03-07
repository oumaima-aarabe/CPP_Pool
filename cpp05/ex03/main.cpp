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
        Bureaucrat Bender("Saba", 2);
        rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
        std::cout << *rrf;
        delete rrf;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}