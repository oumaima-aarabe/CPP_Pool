#pragma once
#include "AForm.hpp"

class AForm;

class PresidentialPardonForm
{
    private:
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string);
        PresidentialPardonForm(const PresidentialPardonForm& ppf);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& ppf);
        ~PresidentialPardonForm();

        void execute(const Bureaucrat&) const;

};