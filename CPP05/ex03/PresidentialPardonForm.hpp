#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm( const std::string& tar);
        PresidentialPardonForm( const PresidentialPardonForm& obj);
        PresidentialPardonForm& operator=( const PresidentialPardonForm& obj);
        ~PresidentialPardonForm();
        void execute( const Bureaucrat& execbur ) const;
};

#endif