#include "ShrubberyCreationForm.hpp"
#include <cstdlib>
#include <ctime>

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& scf) : AForm(scf)
{
    *this = scf;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &scf)
{
    if (this != &scf)
        AForm::operator=(scf);
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if (!this->getIfSigned())
    {
        std::cerr << executor.getName() << " can't execute scf, form is unsigned" << std::endl;
        return;
    }
    else if(this->getGrade() < executor.getGrade())
        throw AForm::GradeTooLowException();
    std::ofstream out(executor.getName() + _shrubbery.c_str());

    if(!out.isopen())
        return(std::cerr << "error opening file" << std::endl);
    
    out << "              v .   ._, |_  .,\n"
        << "           `-._\/  .  \ /    |/_\n"
        << "               \\  _\, y | \//\n"
        << "         _\_.___\\, \\/ -.\||\n"
        << "           `7-,--.`._||  / / ,\n"
        << "           /'     `-. `./ / |/_.'\n"
        << "                     |    |//\n"
        << "                     |_    /\n"
        << "                     |-   |\n"
        << "                     |   =|\n"
        << "                     |    |\n"
        << "--------------------/ ,  . \--------._\n"
}