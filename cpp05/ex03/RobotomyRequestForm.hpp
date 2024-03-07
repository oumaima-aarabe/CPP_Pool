#pragma once
#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm
{
    private:
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string);
        RobotomyRequestForm(const RobotomyRequestForm& rrf);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& rrf);
        ~RobotomyRequestForm();

        void execute(Bureaucrat const&) const;

};