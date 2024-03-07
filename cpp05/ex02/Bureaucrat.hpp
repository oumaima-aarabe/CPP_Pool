#pragma once
#include <iostream>
#include "AForm.hpp"


class AForm;
class Bureaucrat
{
    std::string name;
    int grade;

    public :
        Bureaucrat();
        Bureaucrat(const std::string _name, int _grade);
        Bureaucrat(const Bureaucrat& b);

        ~Bureaucrat();

        Bureaucrat & operator= (const Bureaucrat& B);

        std::string getName() const;
        int getGrade() const;

        void decrement();
        void increment();
        void signForm(AForm &form);
        void executeForm(AForm const & form);
        class GradeTooHighException : public std::exception {
            const char * what() const throw(){
                return "grade to high";
            }
        };
        class GradeTooLowException : public std::exception {
            const char * what() const throw(){
                return "grade to low";
            }
        };
};

std::ostream & operator<< ( std::ostream &op,  const Bureaucrat &b);