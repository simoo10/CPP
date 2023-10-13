#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
    name = "inkonnu";
    grade = 150;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    name = name;
    grade = grade;
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