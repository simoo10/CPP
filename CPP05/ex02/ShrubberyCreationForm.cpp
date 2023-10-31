#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& tar ) : AForm( "ShrubberyCreationForm", 145, 137 ), target( tar ) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& src ) : AForm( src ), target( src.target ) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm& rhs ) {
    (void)rhs;
    return *this;
}
void ShrubberyCreationForm::execute(const Bureaucrat& executor ) const
{
    if ( this->getSigned() == false )
        throw AForm::NotSignedException();
    else if ( executor.getGrade() > this->getGradeToExecute() ) {
        throw AForm::GradeTooLowException();
    }
    std::ofstream outfile;
	outfile.open(target+"_shrubbery");
	if (!outfile.is_open())
	{
		std::cout << "Error! something goes bad in opening file!" << std::endl;
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
	outfile << ascii_tree;
	outfile.close();
}