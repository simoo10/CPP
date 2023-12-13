#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :AForm("Presidential", 25, 5), target("unknown")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& tar) : AForm( "PresidentialPardonForm",25,5), target(tar)
{
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj), target( obj.target )
{
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    (void)obj;
    return *this;
}

void    PresidentialPardonForm::execute(const Bureaucrat& execbur) const {
    if ( this->getsigned() == false )
        throw AForm::NotSignedException();
    if ( execbur.getGrade() > getexecgrade() )
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}