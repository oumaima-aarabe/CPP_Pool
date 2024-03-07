#pragma once

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

class AForm;
class Intern
{
    public :
        Intern();
        Intern(const Intern&);
        Intern & operator= (const Intern&);
        ~Intern();
        AForm* makeForm(std::string, std::string);
        class FormDoesntExist : public std::exception{
            const char * what() const throw(){
                return "no Form with such name";
            };
        };
};