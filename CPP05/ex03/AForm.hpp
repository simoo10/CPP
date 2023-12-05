#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const std::string   name;
    bool                signee;
    const int           signgrade;
    const int           execgrade;
public:
    AForm();
    AForm( const std::string& nom, int signgr);
    AForm( const std::string& nom, int signgr, int exgr);
    AForm( const AForm& obj);
    virtual ~AForm();
    AForm&   operator=( const AForm& obj );
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
    class NotSignedException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Form not signed"; }
    };
    virtual void        execute( const Bureaucrat& executor ) const = 0;
};
std::ostream&   operator<<( std::ostream& o, const AForm& rhs );

#endif