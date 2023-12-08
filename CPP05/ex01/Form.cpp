#include "Form.hpp"

Form::Form( const std::string& nom, int signgr) : name(nom),signgrade(signgr), execgrade(0)
{
    if ( signgrade < 1 )
        throw Form::GradeTooHighException();
    if ( signgrade > 150 )
        throw Form::GradeTooLowException();
}

Form::Form( const Form& obj ) : name( obj.name), signgrade(obj.signgrade), execgrade(obj.execgrade)
{
    
}

Form::~Form() {

}
Form&   Form::operator=( const Form& obj ) {
    if ( this != &obj )
        signee = obj.getsigned();
    return (*this);
}

std::string Form::getname() const {
    return name;
}

bool   Form::getsigned() const {
    return signee;
}

int   Form::getsigngrade() const {
    return signgrade;
}
int   Form::getexecgrade() const {
    return execgrade;
}
std::ostream&   operator<<( std::ostream& o, const Form& form ) {
    o << "----------FORM DETAILS------" << std::endl;
    o << "NAME-----------> " << form.getname() << std::endl
      << "SIGN GRADE-----> " << form.getsigngrade() << std::endl
      << "EXECUTE GRADE--> " << form.getexecgrade();
    return o;
}
void Form:: beSigned(const Bureaucrat& bur)
{
    if(bur.getGrade()<= signgrade)
        signee = true;
    else
        throw Form::GradeTooLowException();

}
const char *	Form::GradeTooHighException::what() const throw() {
	return ("A Form can't have a grade greater than 1.");
}

const char *	Form::GradeTooLowException::what() const throw() {
	return ("A Form grade is to low!");
}
