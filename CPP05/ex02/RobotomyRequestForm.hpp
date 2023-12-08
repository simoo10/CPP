#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include<cstdlib>
class RobotomyRequestForm : public AForm
{
    private:
        const std::string   target; 
    public:
        RobotomyRequestForm();
        RobotomyRequestForm( const std::string& tar);
        RobotomyRequestForm( const RobotomyRequestForm& obj);
        RobotomyRequestForm &operator=( RobotomyRequestForm& obj);
        ~RobotomyRequestForm();
        void    execute( const Bureaucrat& execbur) const;
};

#endif