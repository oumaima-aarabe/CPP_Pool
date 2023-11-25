#include "fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int p)
{
    std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float fl)
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& F)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = F;
}

Fixed& Fixed::operator= (const Fixed& f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = f.value;
    return (*this);
}

Fixed& Fixed::operator<< (const Fixed& f)
{

}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(value);
}

void Fixed::setRawBits( int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}

 float Fixed::toFloat( void ) const
 {

 }

int Fixed::toInt( void ) const
{

}
