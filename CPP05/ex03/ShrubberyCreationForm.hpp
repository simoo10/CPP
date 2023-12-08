#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>
#include<cstdlib>

class ShrubberyCreationForm : public AForm
{
    private:
        const std::string   target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm( const std::string& targ);
        ShrubberyCreationForm( const ShrubberyCreationForm& obj );
        ShrubberyCreationForm&  operator=( ShrubberyCreationForm& obj );
        ~ShrubberyCreationForm();
        void    execute( const Bureaucrat& execbur) const;
};

#endif 