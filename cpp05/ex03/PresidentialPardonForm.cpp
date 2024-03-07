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

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIfSigned())
    {
        std::cerr << executor.getName() << " can't execute ppf, form is unsigned" << std::endl;
        throw AForm::CannotExcute();
    }
    if(this->getGradeEx() < executor.getGrade())
        throw AForm::GradeTooLowException();
    std::cout << executor.getName() << "has been pardoned by Zaphod Beeblebrox." << std::endl;

}