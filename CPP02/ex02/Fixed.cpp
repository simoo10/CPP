#include"Fixed.hpp"

Fixed::Fixed()
{
    //std::cout<<"Default constructor called"<<std::endl;
    nb_virgule =0;
}

Fixed::Fixed(const Fixed& o_obj)
{
    //std::cout<<"Copy constructor called"<<std::endl;
    nb_virgule = o_obj.nb_virgule;
}

Fixed& Fixed::operator=(const Fixed& o_obj)
{
    if(this != &o_obj)
    {
       // std::cout<<"Copy assignment operator called"<<std::endl;
        nb_virgule = o_obj.nb_virgule;
    }
    return(*this);
}

int Fixed:: getRawBits( void ) const
{
   // std::cout<<"getRawBits member function called"<<std::endl;
    return(nb_virgule);
}

void Fixed::setRawBits( int const raw )
{
    nb_virgule = raw;
}

Fixed::~Fixed()
{
    //std::cout<<"Destructor called"<<std::endl;
}
Fixed::Fixed(const int nb)
{
    ///std::cout<<"Int constructor called"<<std::endl;
    nb_virgule = nb<<nb_bits;
}
Fixed:: Fixed(const float nb)
{
    //std::cout<<"Float constructor called"<<std::endl;
    nb_virgule = roundf(nb *(1 << nb_bits));   
}
float Fixed::toFloat( void ) const
{
   return(static_cast<float>(nb_virgule )/ (1<<nb_bits));
}
int Fixed:: toInt( void ) const
{
    return(nb_virgule>>nb_bits);
}
std::ostream & operator<<( std::ostream & o, Fixed const & i )
{
   return( o<<i.toFloat());
}
//OPERATEUR DE COMPARISON;
bool Fixed::operator >(const Fixed& o_obj)const
{
    return(nb_virgule>o_obj.nb_virgule);
}
bool Fixed::operator <(const Fixed& o_obj) const
{
    return(nb_virgule<o_obj.nb_virgule);
}
bool Fixed::operator >=(const Fixed& o_obj)const
{
    return(nb_virgule>=o_obj.nb_virgule);
}
bool Fixed::operator <=(const Fixed& o_obj)const
{
    return(nb_virgule<=o_obj.nb_virgule);
}
bool Fixed::operator ==(const Fixed& o_obj)const
{
    return(nb_virgule==o_obj.nb_virgule);
}
bool Fixed::operator !=(const Fixed& o_obj)const
{
    return(nb_virgule!=o_obj.nb_virgule);
}
//OPERATEUR D'ARITHMETIQUE;
Fixed Fixed::operator+(const Fixed& o_obj)const
{
    return Fixed(toFloat()+o_obj.toFloat());
}
Fixed Fixed::operator-(const Fixed& o_obj)const
{
    return Fixed(toFloat()-o_obj.toFloat());
}
Fixed Fixed::operator*(const Fixed& o_obj)const
{
    return Fixed(toFloat()*o_obj.toFloat());
}
Fixed Fixed::operator/(const Fixed& o_obj)const
{
    return Fixed(toFloat()/o_obj.toFloat());
}
Fixed& Fixed::operator++()
{
    ++nb_virgule;
    return(*this);
}
Fixed Fixed::operator++(int)
{
    Fixed o(*this);
    ++nb_virgule;
    return(o);
}
Fixed& Fixed::operator--()
{
    --nb_virgule;
    return(*this);
}
Fixed Fixed::operator--(int)
{
    Fixed o(*this);
    --nb_virgule;
    return(o);
}
Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed	&Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}
Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed	&Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}
