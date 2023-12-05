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

void Bureaucrat::signForm(Form &f)
{
    try
    {
        f.beSigned( *this );
        std::cout << *this << " signed " << f.getname() << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << name << " coulnd't sign " << f.getname() << " because " << e.what() << std::endl;
    }
}
