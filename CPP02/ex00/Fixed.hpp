#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>

class Fixed{
    private:
        int nb_virgule;
        const static int nb_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& o_obj);
        Fixed& operator=(const Fixed& o_obj);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );

};

#endif