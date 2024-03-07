#pragma once
 #include "Bureaucrat.hpp"


class Bureaucrat;

 class AForm {
    private:
        std::string name;
        bool isSigned;
        int gradeReq;
        int gradeEx;
    public :
        AForm();
        AForm(std::string, int, int);
        AForm(const AForm&);
        AForm & operator=(const AForm &f);
        virtual ~AForm();

        std::string getName() const;
        bool getIfSigned() const;
        int getGradeReq() const;
        int getGradeEx() const;
        void beSigned(Bureaucrat &B);

        class GradeTooHighException : public std::exception{
            const char * what() const throw(){
                return "Aform grade is out of bounds : too high";
            }
        };

        class GradeTooLowException : public std::exception{
            const char * what() const throw(){
                return "Aform grade is out of bounds : too low";
            }
        };
        class CannotExcute : public std::exception{
            const char * what() const throw()
            {
                return "ops";
            }
        };

        virtual void execute(Bureaucrat const &) const = 0;
 };

std::ostream & operator<< (std::ostream &op,  const AForm &f);