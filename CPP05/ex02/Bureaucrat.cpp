#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
   name = "inkonnu";
    grade = 150;
}

Bureaucrat::Bureaucrat(std::string const &_name, int _grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    name = _name;
    grade = _grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    name = obj.name;
    grade = obj.grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
    std::cout << "Bureaucrat assignation operator called" << std::endl;
    name = obj.name;
    grade = obj.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string const &Bureaucrat::getName() const
{
    return (name);
}

std::  ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (os);
}

void    Bureaucrat::incrementGrade() {
    if ( grade < 1 )
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void    Bureaucrat::decrementGrade() {
    if ( grade > 150 )
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

const char *	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("A bureaucrat can't have a grade greater than 1.");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("A bureaucrat can't have a grade lower than 150.");
}

int Bureaucrat::getGrade() const
{
    return(grade);
}

void Bureaucrat::signForm(AForm &f)
{
    try
    {
        f.beSigned( *this );
        std::cout << *this << " signed " << f.getName() << std::endl;
    }
    catch (AForm::GradeTooLowException &e)
    {
        std::cout << name << " coulnd't sign " << f.getName() << " because " << e.what() << std::endl;
    }
}
void    Bureaucrat::executeForm( const AForm& form ) const {
    try {
        form.execute( *this );
    } catch ( std::exception& e ) {
        std::cout << name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}