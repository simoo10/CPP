
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern( const Intern& obj ) {
    *this = obj;
}

Intern::~Intern() {}

Intern& Intern::operator=( const Intern& obj ) {
    ( void ) obj;
    return (*this);
}

AForm*   Intern::makeForm( std::string name, std::string target ) {

    std::string formnames[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    AForm*    forms[] = {
        new RobotomyRequestForm( target ),
        new PresidentialPardonForm( target ),
        new ShrubberyCreationForm( target )
    };
    
    for ( int i=0; i < 3; i++ ) {
        if ( name == formnames[i] ) {
            std::cout << "Intern creates " << name << std::endl;
            return forms[i];
        }
    }
    std::cout << "Intern cannot create " << name << " form" << std::endl;
    return (NULL);
}