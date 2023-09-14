#include"Cure.hpp"

Cure::Cure()
{
    _type="cure";
   // std::cout << "Cure materia default constructor is called" << std::endl;
}

<<<<<<< HEAD
Cure::Cure( const Cure & obj ):AMateria(obj)
=======
Cure::Cure( const Cure & obj )
>>>>>>> origin/main
{
    *this = obj;
  //  std::cout << "Cure materia copy constructor is called" << std::endl;
}

Cure&   Cure::operator=( const Cure& obj ) {
  //  std::cout << "Ice materia copy assignament is called" << std::endl;
    if (this != &obj)
       _type = obj._type;
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
void Cure::use(ICharacter& target)
{
    std::cout<<"* heals  "<<target.getName()<<"'s wounds *"<<std::endl;
}