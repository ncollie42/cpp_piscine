#include <iostream>
#include "Fixed.class.hpp"

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
    _fixed_point_value = 0;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed   &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "operator = used" << std::endl;
    setRawBits(rhs.getRawBits());
    return (*this);
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawbits function called" << std::endl;
    return _fixed_point_value;
}

void    Fixed::setRawBits( int const raw)
{
    _fixed_point_value = raw;
}