#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& tar ) : AForm( "ShrubberyCreationForm", 145, 137 ), target( tar )
{ 
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& obj) : AForm(obj), target(obj.target) 
{
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm& obj) 
{
    (void)obj;
    return (*this);
}
void ShrubberyCreationForm::execute(const Bureaucrat& execbur) const
{
    if ( this->getsigned() == false )
        throw AForm::NotSignedException();
    if ( execbur.getGrade() > this->getexecgrade() ) {
        throw AForm::GradeTooLowException();
    }
    std::ofstream o;
    std::string filename = target + "_shrubbery";
	o.open(filename.c_str());
	if (!o.is_open())
	{
		std::cout << "Oops!something happens" << std::endl;
		exit(0);
	}
    std::string ascii_tree= 
        "         /\\\n"
        "        /__\\\n"
        "       /    \\\n"
        "      /      \\\n"
        "     /        \\\n"
        "    /          \\\n"
        "   /____________\\\n"
        "      |  |  |\n"
        "      |  |  |";
	o << ascii_tree;
	o.close();
}