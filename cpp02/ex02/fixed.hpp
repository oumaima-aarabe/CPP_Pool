#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
        int value;
        static int const nfb = 8;
	public:
		Fixed();
		Fixed(const int p);
		Fixed(const float fl);
        Fixed (const Fixed& F);
        Fixed& operator= (const Fixed& f);

        Fixed operator+ (const Fixed& b) const;
        Fixed operator- (const Fixed& b) const;
        Fixed operator* (const Fixed& b) const;
        Fixed operator/ (const Fixed& b) const;


        bool    operator> (const Fixed& b) const;
        bool    operator< (const Fixed& b) const;
        bool    operator>= (const Fixed& b) const;
        bool    operator<= (const Fixed& b) const;
        bool    operator== (const Fixed& b) const;
        bool    operator!= (const Fixed& b) const;


        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);


		~Fixed();

        int getRawBits( void) const;
        void setRawBits( int const raw );

        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &obj);

#endif