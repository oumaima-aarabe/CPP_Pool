#pragma once
#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
    private:
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string);
        PresidentialPardonForm(const PresidentialPardonForm& ppf);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& ppf);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const&) const;

};