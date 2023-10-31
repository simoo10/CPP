#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& tar ) : AForm("Robotomy Request Form", 72, 45), target(tar) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src ) : AForm(src), target(src.target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&    RobotomyRequestForm::operator=( RobotomyRequestForm& rhs ) {
    ( void )rhs;
    return *this;
}

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if ( executor.getGrade() > this->getGradeToExecute() )
        throw AForm::GradeTooLowException();
    else {
        static int  i;
        if ( i % 2 == 0 )
            std::cout << "BZZZZZT! " << target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed! " << target << " is still alive." << std::endl;
        i++;
    }
}