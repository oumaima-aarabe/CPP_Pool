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


        std::string getName() const;
        int getGrade() const;

        void decrement();
        void increment();


        class GradeTooHighException : public std::exception {

        }
        class GradeTooLowException : public std::exception {
        
        }



}