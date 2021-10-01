#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << Fixed::_fraction;
}

Fixed::Fixed( float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << Fixed::_fraction));
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return *this;
}

int		Fixed::toInt( void ) const
{
	return this->_value >> 8;
}

float	Fixed::toFloat(void) const
{
	return this->_value / (float)(1 << Fixed::_fraction);
}

int		Fixed::getRawBits( void ) const
{
	return this->_value;
}

void	Fixed::setRawBits( int raw )
{
	this->_value = raw;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i )
{
	return o << i.toFloat();
}

int		Fixed::_fraction = 8;
