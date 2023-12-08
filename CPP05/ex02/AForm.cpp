#include "AForm.hpp"

AForm::AForm( const std::string& nom, int signgr) : name(nom),signgrade(signgr), execgrade(0)
{
    if ( signgrade < 1 )
        throw AForm::GradeTooHighException();
    if ( signgrade > 150 )
        throw AForm::GradeTooLowException();
}

AForm::AForm( const AForm& obj ) : name( obj.name), signgrade(obj.signgrade), execgrade(obj.execgrade)
{
    
}
AForm::AForm(const std::string& nom, int signgr, int exgr):name(nom),signgrade(signgr),execgrade(exgr)
{
}
AForm::~AForm() {

}
AForm&   AForm::operator=( const AForm& obj ) {
    if ( this != &obj )
        signee = obj.getsigned();
    return (*this);
}

std::string AForm::getname() const {
    return (name);
}

bool   AForm::getsigned() const {
    return (signee);
}

int   AForm::getsigngrade() const {
    return (signgrade);
}
int   AForm::getexecgrade() const {
    return (execgrade);
}
std::ostream&   operator<<( std::ostream& o, const AForm& form ) {
    o << "----------FORM DETAILS------" << std::endl;
    o << "NAME-----------> " << form.getname() << std::endl
      << "SIGN GRADE-----> " << form.getsigngrade() << std::endl
      << "EXECUTE GRADE--> " << form.getexecgrade();
    return o;
}
void AForm:: beSigned(const Bureaucrat& bur)
{
    if(bur.getGrade()<signgrade)
        signee = true;
    else
        throw AForm::GradeTooLowException();

}
const char *	AForm::GradeTooHighException::what() const throw() {
	return ("A Form can't have a grade greater than 1.");
}

const char *	AForm::GradeTooLowException::what() const throw() {
	return ("A Form grade is to low!");
}


