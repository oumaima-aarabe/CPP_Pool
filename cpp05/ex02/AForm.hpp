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
        ~AForm();

        std::string getName() const;
        bool getIfSigned();
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
 };

std::ostream & operator<< (std::ostream &op,  const AForm &f);