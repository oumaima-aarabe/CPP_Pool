#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("unameit")
{
    grade = 150;
}


Bureaucrat::Bureaucrat(const Bureaucrat& b)
{
    *this = b;
}


Bureaucrat::Bureaucrat(std::string name, int _grade) : name(name)
{
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
        static_cast<std::string>(this->name) = B.name;
        this->grade = B.grade;
    }
    return (*this);
}


Bureaucrat::~Bureaucrat(){
}

const std::string Bureaucrat::getName() const{
    return name;
}

int Bureaucrat::getGrade() const{
    return grade;
}


void Bureaucrat::increment()
{
    if (grade == 1)
        throw GradeTooHighException();
    std::cout << "Bureaucrat " << this->getName() << " grade before inerement : " << this->getGrade() << std::endl;
    this->grade--;
    std::cout << "Bureaucrat " << this->getName() << " grade after increment : " << this->getGrade() << std::endl;

}

void Bureaucrat::decrement()
{
    if (grade == 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat " << this->getName() << " grade before decrement : " << this->getGrade() << std::endl;
    this->grade++;
    std::cout << "Bureaucrat " << this->getName() << " grade after decrement : " << this->getGrade() << std::endl;
    
}

std::ostream& operator<< (std::ostream &op,  const Bureaucrat &b)
{
    op << b.getName() << " with grade " << b.getGrade() << std::endl;
    return (op);
}