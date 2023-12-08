#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
    grade = 150;
}

Bureaucrat::Bureaucrat(const std::string &_name, int _grade) :name(_name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    grade = _grade;
    if ( grade < 1 )
        throw Bureaucrat::GradeTooHighException();
    if ( grade > 150 )
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj):name(obj.name)
{
    grade = obj.grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
    grade = obj.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (name);
}
std::  ostream &operator<<(std::ostream &o, Bureaucrat const &bureaucrat)
{
    o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (o);
}

void    Bureaucrat::incrementgrade() {
    grade--;
    if ( grade < 1 )
        throw Bureaucrat::GradeTooHighException(); 
}

void    Bureaucrat::decrementgrade() {
    grade++;
    if ( grade > 150 )
        throw Bureaucrat::GradeTooLowException();
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
        f.beSigned(*this);
        std::cout << name << " signed " << f.getname() << std::endl;
    }
    catch (AForm::GradeTooLowException &e)
    {
        std::cout << name << " coulnd't sign " << f.getname() << " because " << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm( const AForm& form ) const {
    try {
        form.execute( *this );
    } catch ( std::exception& e ) {
        std::cout<<getGrade()<<std::endl;
        std::cout << name << " couldn't execute " << form.getname() << " because " << e.what() << std::endl;
    }
}