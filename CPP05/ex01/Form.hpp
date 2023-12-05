#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   name;
        bool                signee;
        const int           signgrade;
        const int           execgrade;
    public:
        Form();
        Form( const std::string& nom, int signgr);
        Form( const std::string& nom, int signgr, int exgr);
        Form( const Form& obj);
        ~Form();
        Form&   operator=( const Form& obj );
        std::string getname() const;
        bool        getsigned() const;
        int         getsigngrade() const;
        int         getexecgrade() const;
        void        beSigned( const Bureaucrat& bureaucrat );
        void        signForm();
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream&   operator<<( std::ostream& o, const Form& form );

#endif