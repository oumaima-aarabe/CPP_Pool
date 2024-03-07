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

Bureaucrat::Bureaucrat(const Bureaucrat& b)
{
    *this = b;
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
    this->grade--;
    std::cout << "Bureaucrat " << this->getName() << " grade now is: " << this->getGrade() << std::endl;
    
}

void Bureaucrat::decrement()
{
    if (grade == 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat " << this->getName() << " grade now is: " << this->getGrade() << std::endl;
    this->grade++;
    
}

std::ostream & operator<< ( std::ostream &op,  const Bureaucrat &b)
{
    op << b.getName() << "with grade" << b.getGrade() << std::endl;
    return (op);
}

void    Bureaucrat::signForm(Form &form)
{
    try 
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName()
            << std::endl;
    }
    catch (const std::exception& e)
    {

         std::cerr << this->getName() << "  couldn't sign " << form.getName()
            << " because maf2idoch "<< std::endl;
    }
        
}