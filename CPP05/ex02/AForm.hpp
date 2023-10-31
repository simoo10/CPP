#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const std::string   _name;
    bool                _signed;
    const int           _gradeToSign;
    const int           _gradeToExecute;

    AForm();

public:
    AForm( const std::string& name, int gradeToSign, int gradeToExecute );
    AForm( const AForm& src );
    virtual    ~AForm();
    AForm&   operator=( const AForm& rhs );
    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;
    void        beSigned( const Bureaucrat& bureaucrat );
    virtual void        execute( const Bureaucrat& executor ) const = 0;
    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade too high"; }
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade too low"; }
    };
    class NotSignedException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Form not signed"; }
    };
};
std::ostream&   operator<<( std::ostream& o, const AForm& rhs );

#endif