#include"Fixed.hpp"

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<<std::endl;
    nb_virgule =0;
}

Fixed::Fixed(const Fixed& o_obj)
{
    std::cout<<"Copy constructor called"<<std::endl;
    nb_virgule = o_obj.nb_virgule;
}

Fixed& Fixed::operator=(const Fixed& o_obj)
{
    if(this != &o_obj)
    {
        std::cout<<"Copy assignment operator called"<<std::endl;
        nb_virgule = o_obj.nb_virgule;
    }
    return(*this);
}

int Fixed:: getRawBits( void ) const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return(nb_virgule);
}

void Fixed::setRawBits( int const raw )
{
    nb_virgule = raw;
}

Fixed::~Fixed()
{  
    std::cout<<"Destructor called"<<std::endl;
}
