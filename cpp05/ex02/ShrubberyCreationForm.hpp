#pragma once
#include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
    private:
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string);
        ShrubberyCreationForm(const ShrubberyCreationForm& scf);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& scf);
        ~ShrubberyCreationForm();

        void execute(Bureaucrat const&) const;

};