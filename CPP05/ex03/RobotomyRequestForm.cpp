#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& tar ) : AForm("Robotomy", 72, 45), target(tar)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj ) : AForm(obj), target(obj.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm&    RobotomyRequestForm::operator=( RobotomyRequestForm& obj)
{
    ( void )obj;
    return (*this);
}

void    RobotomyRequestForm::execute(const Bureaucrat& execbur) const {
    if ( this->getsigned() == false )
        throw AForm::NotSignedException();
    if ( execbur.getGrade() > getexecgrade() )
        throw AForm::GradeTooLowException();
    else
    {
        static int  i;
        if ( i % 2 == 0 )
            std::cout << "ZZZZZZZNNN! " << target << " has been robotomized!" << std::endl;
        else
            std::cout << "Oops!Robotomy failed! " << target << " is still alive." << std::endl;
        i++;
    }
}