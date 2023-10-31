#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& tar) : AForm( "PresidentialPardonForm", 25, 5 ), target( tar ) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm( src ), target( src.target ) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
    (void)rhs;
    return *this;
}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    if ( executor.getGrade() > getGradeToExecute() )
        throw AForm::GradeTooLowException();
    else {
        std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}