#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed{
    private:
        int nb_virgule;
        const static int nb_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& o_obj);
        Fixed(const int nb );
        Fixed(const float nb);
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed& operator=(const Fixed& o_obj);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
};
std::ostream & operator<<( std::ostream & o, Fixed const & i );
#endif