

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;
    
    public:
        Bureaucrat();
        Bureaucrat( const std::string& name, int grade);
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
};

std::ostream&   operator<<( std::ostream& o, const Bureaucrat& rhs );

#endif