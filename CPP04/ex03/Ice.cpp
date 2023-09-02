#include"Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice materia default constructor is called" << std::endl;
}

Ice::Ice( Ice const & obj )// : AMateria("ice")
{
    *this = obj;
    std::cout << "Ice materia copy constructor is called" << std::endl;
}

Ice&   Ice::operator=( const Ice& obj ) {
    std::cout << "Ice materia copy assignament is called" << std::endl;
    if (this != &obj)
    {
        this->_type = obj._type;
    }
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice materia destructor is called" << std::endl;
}
