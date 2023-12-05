#ifndef INTERN_HPP
# define INTERN_HPP


#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const &obj);
        Intern &operator=(Intern const &obj);
        ~Intern();
        AForm *makeForm(std::string name, std::string target);
};

#endif