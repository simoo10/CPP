#include"MateriaSource.hpp"

MateriaSource::MateriaSource() //: AMateria("ice")
{
    std::cout << "MateriaSource default constructor is called" << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const & obj )// : AMateria("ice")
{
    *this = obj;
    std::cout << "MateriaSource copy constructor is called" << std::endl;
}

MateriaSource&   MateriaSource::operator=( const MateriaSource& obj ) {
    std::cout << "MateriaSource copy assignament is called" << std::endl;
    if (this != &obj)
        *this = obj;
    return (*this);
}
void MateriaSource:: learnMateria(AMateria*)
{
    
}