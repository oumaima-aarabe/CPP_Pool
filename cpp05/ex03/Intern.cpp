#include "Intern.hpp"

Intern::Intern()
{

}
Intern::Intern(const Intern &intern)
{
    *this = intern;
}
Intern::~Intern()
{

}
Intern& Intern::operator= (const Intern& intern)
{
    if (this != &intern)
        *this = intern;
    return (*this);
}

AForm* Intern::makeForm(std::string formName, std::string formTarget)
{
    std::string formN[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int i = 0;
    for (; i <= 2; i++)
    {
        if (formName == formN[i])
            break;
    }
    
    switch (i){
        case 0:
            std::cout << "Intern creates form: " << formName << std::endl;
            return(new ShrubberyCreationForm(formTarget));
            break;
        case 1:
            std::cout << "Intern creates form: " << formName << std::endl;
            return(new RobotomyRequestForm(formTarget));
            break;
        case 2:
            std::cout << "Intern creates form: " << formName << std::endl;
            return(new PresidentialPardonForm(formTarget));
            break;
        default:
            throw FormDoesntExist();
            break;
    }
    return (NULL);

}