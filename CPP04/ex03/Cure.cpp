#include"Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
    _type="cure";
   // std::cout << "Cure materia default constructor is called" << std::endl;
}

Cure::Cure( Cure const & obj )// : AMateria("Cure")
{
    *this = obj;
  //  std::cout << "Cure materia copy constructor is called" << std::endl;
}

Cure&   Cure::operator=( const Cure& obj ) {
  //  std::cout << "Ice materia copy assignament is called" << std::endl;
    if (this != &obj)
    {
        this->_type = obj._type;
    }
    return (*this);
}

Cure::~Cure()
{
    //std::cout << "Ice materia destructor is called" << std::endl;
}

AMateria* Cure::clone() const
{
    return(new Cure(*this));
}
void Cure::use(ICharacter& target )
{
    std::cout<<"* heals  "<<target.getName()<<"’s wounds *"<<std::endl;
}