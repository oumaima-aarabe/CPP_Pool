#pragma once
 #include "Bureaucrat.hpp"


class Bureaucrat;

 class Form {
    private:
        std::string name;
        bool isSigned;
        int gradeReq;
        int gradeEx;
    public :
        Form();
        Form(std::string, int, int);
        Form(const Form&);
        Form & operator=(const Form &f);
        ~Form();

        std::string getName() const;
        bool getIfSigned();
        int getGradeReq() const;
        int getGradeEx() const;
        void beSigned(Bureaucrat &B);

        class GradeTooHighException : public std::exception{
            const char * what() const throw(){
                return "form grade is out of bounds : too high";
            }
        };

        class GradeTooLowException : public std::exception{
            const char * what() const throw(){
                return "form grade is out of bounds : too low";
            }
        };
 };

std::ostream & operator<< (std::ostream &op,  const Form &f);