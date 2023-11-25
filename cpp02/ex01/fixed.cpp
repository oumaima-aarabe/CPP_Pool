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
    this->value = p << this->nfb;
}
Fixed::Fixed(const float fl)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(fl * (1 << this->nfb));

}

Fixed::Fixed(const Fixed& F)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = F;
}

Fixed& Fixed::operator= (const Fixed& f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = f.getRawBits();
    return (*this);
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
return((float)this->value / (1 << this->nfb));
}

int Fixed::toInt( void ) const
{
    return(this->value >> this->nfb);
}

std::ostream &operator<<(std::ostream &out, Fixed const &obj)
{
    out << obj.toFloat();
    return out;
}
