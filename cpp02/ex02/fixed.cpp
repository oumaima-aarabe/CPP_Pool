#include "fixed.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int p) : value(p << this->nfb)
{
    // std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float fl) : value(roundf(fl * (1 << this->nfb)))
{
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& F)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = F;
}

Fixed& Fixed::operator= (const Fixed& f)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    this->value = f.getRawBits();
    return (*this);
}

//---------------------------Algo operators---------------------------//
Fixed Fixed::operator+ (const Fixed& f) const
{
    return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator- (const Fixed& f) const
{
    return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator* (const Fixed& f) const
{
    return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed Fixed::operator/ (const Fixed& f) const
{
    return (Fixed(this->toFloat() / f.toFloat()));
}

//--------------------------Comp operators-----------------------------//

bool    Fixed::operator> (const Fixed& b) const
{
    return(this->value > b.value);
}

bool    Fixed::operator< (const Fixed& b) const
{
    return(this->value < b.value);
}

bool    Fixed::operator<= (const Fixed& b) const
{
    return(this->value <= b.value);
}

bool    Fixed::operator>=(const Fixed& b) const
{
    return(this->value >=b.value);
}

bool    Fixed::operator== (const Fixed& b) const
{
    return(this->value == b.value);
}

bool    Fixed::operator!= (const Fixed& b) const
{
    return(this->value != b.value);
}
//---------------increment and decrement operators----------------------//

Fixed& Fixed::operator++()
{
    this->value++;
    return(*this);
}

Fixed& Fixed::operator--()
{
    this->value--;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    this->value++;
    return(tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    this->value--;
    return(tmp);
}

//---------------increment and decrement operators----------------------//
int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void Fixed::setRawBits( int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
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


