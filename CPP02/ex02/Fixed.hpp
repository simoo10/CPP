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
        //OPERATEUR DE COMPARISON;
        bool operator >(const Fixed& o_obj)const;
        bool operator <(const Fixed& o_obj) const;
        bool operator >=(const Fixed& o_obj)const;
        bool operator <=(const Fixed& o_obj)const;
        bool operator ==(const Fixed& o_obj)const;
        bool operator !=(const Fixed& o_obj)const;
        Fixed& operator=(const Fixed& o_obj);
        //OPERATEUR D'ARITHMETIQUE;
        Fixed operator+(const Fixed& o_obj)const;
        Fixed operator-(const Fixed& o_obj)const;
        Fixed operator*(const Fixed& o_obj)const;
        Fixed operator/(const Fixed& o_obj)const;
        //OPERATEUR D'INCREMENTATION
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
       static Fixed	&min(Fixed &fixed1, Fixed &fixed2);
		static Fixed	&max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed	&min(const Fixed &fixed1, const Fixed &fixed2);
		static const Fixed	&max(const Fixed &fixed1, const Fixed &fixed2);
};
std::ostream & operator<<( std::ostream & o, Fixed const & i );
#endif
