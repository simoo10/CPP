
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

    int j =0;
    std::string fnames[] ={
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    AForm*    f[3] = {
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target),
        new ShrubberyCreationForm(target)
    };
    
    for ( int i=0; i < 3; i++ ) {
        if ( name == fnames[i] ) {
            std::cout << "Intern creates " << name << std::endl;
            while(j<3)
            {
                if(j!=i)
                    delete f[j];
                j++;
            }
            return (f[i]);
        }
    }
    std::cout << "Intern cannot create " << name << " form" << std::endl;
    while(j<3)
    {
        delete f[j];
        j++;
    }
    return (NULL);
}