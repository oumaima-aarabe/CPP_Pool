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


AForm* ShrubberyCreation(std::string formTarget)
{
    return (new ShrubberyCreationForm(formTarget));
}

AForm* PresidentialPardon(std::string formTarget)
{
    return (new PresidentialPardonForm(formTarget));
}

AForm* RobotomyRequest(std::string formTarget)
{
    return (new RobotomyRequestForm(formTarget));
}
AForm* Intern::makeForm(std::string formName, std::string formTarget)
{
    std::string formN[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    AForm*    (*forms[])(std::string) = {&RobotomyRequest, &PresidentialPardon, &ShrubberyCreation};
    int i = 0;
    for (; i <= 2; i++)
    {
        if (formName == formN[i])
        {
            std::cout << "Intern creates form: " << formName << std::endl;
            return(forms[i](formTarget));
        }
    }
    throw FormDoesntExist();
    return (NULL);
}
