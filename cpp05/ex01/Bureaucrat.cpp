#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{
    name = "unameit";
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

void Bureaucrat::decrement()
{
    if (grade == 150)
        throw GradeTooLowException();
    else
    {
        this->grade++;
    }
    
}

std::ostream & operator<< ( std::ostream &op,  const Bureaucrat &b)
{
    op << b.getName() << "with grade" << b.getGrade();
    return (op);
}

void    Bureaucrat::signForm(Form &form)
{
    if (form.getIfSigned())
        std::cout << this->getName() << " signed " << form.getName()
            << std::endl;
    else
         std::cout << this->getName() << "  couldn't sign " << form.getName()
            << " because maf2idoch "<< std::endl;
        
}