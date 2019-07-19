#include <iostream>
#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
    _fixed_point_value = 0;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int inum)
{
    std::cout << "int constructor called" << std::endl;
    _fixed_point_value = inum << _fractional_bits;
}

Fixed::Fixed(const float fnum)
{
    std::cout << "float constructor called" << std::endl;
    _fixed_point_value = (int)(roundf(fnum * (1 << _fractional_bits)));
}

Fixed::Fixed(const Fixed& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

float Fixed::toFloat (void) const
{
    float tmp;
    tmp = (_fixed_point_value / (float)(1 << _fractional_bits));
    return tmp;
}

int Fixed::toInt(void) const
{
    return (int)(_fixed_point_value >> _fractional_bits);
} 

Fixed   &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "operator = used" << std::endl;
    setRawBits(rhs.getRawBits());
    return (*this);
}

std::ostream & operator << (std::ostream &out, const Fixed &rhs)
{
    out << rhs.toFloat();
    return out;
}

int     Fixed::getRawBits( void ) const
{
    return _fixed_point_value;
}

void    Fixed::setRawBits( int const raw)
{
    _fixed_point_value = raw;
}