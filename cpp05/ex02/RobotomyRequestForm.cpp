#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
#include <random>

RobotomyRequestForm::RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rrf) : AForm(rrf)
{
    *this = rrf;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rrf)
{
    if (this != &rrf)
        AForm::operator=(rrf);
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIfSigned())
    {
        std::cerr << executor.getName() << " can't execute rrf, form is unsigned" << std::endl;
        throw AForm::CannotExcute();
    }
    else if(this->getGradeEx() < executor.getGrade())
        throw AForm::GradeTooLowException();

    std::cout << "ZZZZZZZZZZZZzzzzzzzzzZZZZZZzzzzzzzz" << std::endl;
    std::srand(std::time(NULL));
    if (random() % (long)2 == 0)
        std::cout << executor.getName() << " has been robotomized successfully." << std::endl;
    else
        std::cout << executor.getName() << " has failed to be robotomized." << std::endl;

}