#pragma once
#include <iostream>


class Bureaucrat
{
    std::string name;
    int grade;

    public :
        Bureaucrat();
        Bureaucrat(const std::string _name, int _grade);
        ~Bureaucrat();

        Bureaucrat & operator= (const Bureaucrat& B);

        std::string getName() const;
        int getGrade() const;

        void decrement();
        void increment();

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
std::ostream & operator<< (std::ostream &op,  const Bureaucrat &b);