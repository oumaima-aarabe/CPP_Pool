#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ppf) : AForm(ppf)
{
    *this = ppf;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &ppf)
{
    if (this != &ppf)
        AForm::operator=(ppf);
    return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (!this->getIfSigned())
    {
        std::cerr << executor.getName() << " can't execute ppf, form is unsigned" << std::endl;
        return;
    }
    else if(this->getGrade() < executor.getGrade())
        throw AForm::GradeTooLowException();
    std::cout << executor.getName() << "has been pardoned by Zaphod Beeblebrox." << std::endl;

}