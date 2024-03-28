#include "AForm.hpp"

AForm::AForm()
{

}

AForm::AForm(std::string _name, int _gradeReq, int _gradeEx) : name(_name)
{
    isSigned = false;
    if (_gradeEx > 150 || _gradeReq > 150)
        throw GradeTooLowException();
    if (_gradeReq < 1 || _gradeEx < 1)
        throw GradeTooHighException();
    gradeEx = _gradeEx;
    gradeReq = _gradeReq;
}

AForm::AForm(const AForm& f)
{
    *this = f;
}

AForm &AForm::operator=(const AForm &f)
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

bool AForm::getIfSigned() const
{
    return isSigned;
}

int AForm::getGradeEx() const
{
    return gradeEx;
}

int AForm::getGradeReq() const
{
    return gradeReq;
}

std::string AForm::getName() const
{
    return name;
}

void AForm::beSigned(Bureaucrat &B)
{
    if (B.getGrade() > this->gradeReq)
        throw GradeTooLowException();
    this->isSigned = true;
}


AForm::~AForm(){}

std::ostream & operator<< (std::ostream &op,  const AForm &f)
{
    op << " the AForm named : " << f.getName() << " require the grade " 
        << f.getGradeReq() << " to be signed, and to be executed it requires the following grade: "
         << f.getGradeEx() << std::endl;
    return (op);
}