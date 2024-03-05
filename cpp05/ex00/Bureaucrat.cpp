#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    name = unameit;
    grade = 150;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade)
{
    name = _name;
    if (_grade > 150)
        throw GradeTooLowException();
    if (_grade < 1)
        throw GradeTooHighException();
    grade = _grade;
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat& B)
{
    if (this != &B)
    {
        this->name = B.name;
        this->grade = B.grade;
    }
    return (*this);
}
Bureaucrat::~Bureaucrat(){
}

std::string Bureaucrat::getName() const{
    return name;
}

int Bureaucrat::getGrade() const{
    return grade;
}


void Bureaucrat::increment()
{
    if (grade == 1)
        throw GradeTooHighException();
    else
    {
        this->grade--;
    }
    
}

void Bureaucrat::increment()
{
    if (grade == 150)
        throw GradeTooLowException();
    else
    {
        this->grade++;
    }
    
}