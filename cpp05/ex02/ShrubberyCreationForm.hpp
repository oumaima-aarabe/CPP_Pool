#pragma once
#include "AForm.hpp"

class AForm;

class ShrubberyCreationForm
{
    private:
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string);
        ShrubberyCreationForm(const ShrubberyCreationForm& scf);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& scf);
        ~ShrubberyCreationForm();

        void execute(const Bureaucrat&) const;

};