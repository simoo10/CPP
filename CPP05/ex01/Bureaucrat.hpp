
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
#include"Form.hpp"

 class Form;

class Bureaucrat{
  private:
        const std::string   name;
        int                 grade;
    
    public:
        Bureaucrat();
        Bureaucrat( const std::string& name, int grade );
        Bureaucrat( const Bureaucrat& obj);
        ~Bureaucrat();
        Bureaucrat& operator=( const Bureaucrat& obj);
        std::string getName() const;
        int         getGrade() const;
        void        decrementgrade();
        void        incrementgrade();
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw() ;
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        void signForm(Form &f);
};
std::  ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);
#endif