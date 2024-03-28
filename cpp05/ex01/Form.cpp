#include "Form.hpp"

Form::Form()
{

}

Form::Form(std::string name, int _gradeReq, int _gradeEx) : name(name)
{
    isSigned = false;
    if (_gradeEx > 150 || _gradeReq > 150)
        throw GradeTooLowException();
    if (_gradeReq < 1 || _gradeEx < 1)
        throw GradeTooHighException();
    gradeEx = _gradeEx;
    gradeReq = _gradeReq;
}

Form::Form(const Form& f)
{
    *this = f;
}

Form &Form::operator=(const Form &f)
{
    if (this != &f)
    {
        static_cast<std::string>(this->name) = f.name;
        this->isSigned = f.isSigned;
        this->gradeEx = f.gradeEx;
        this->gradeReq = f.gradeReq;

    }
    return (*this);
}

bool Form::getIfSigned()
{
    return isSigned;
}

int Form::getGradeEx() const
{
    return gradeEx;
}

int Form::getGradeReq() const
{
    return gradeReq;
}

std::string Form::getName() const
{
    return name;
}

void Form::beSigned(Bureaucrat &B)
{
    if (B.getGrade() > this->gradeReq)
        throw GradeTooLowException();
    this->isSigned = true;
}


Form::~Form(){}

std::ostream & operator<< (std::ostream &op,  const Form &f)
{
    op << " the Form named : " << f.getName() << " require the grade " 
        << f.getGradeReq() << " to be signed, and to be executed it requires the following grade: "
         << f.getGradeEx() << std::endl;
    return (op);
}