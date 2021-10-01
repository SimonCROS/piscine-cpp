#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed( void ) : _value(0)
{
}

Fixed::Fixed( int value )
{
	this->_value = value << Fixed::_fraction;
}

Fixed::Fixed( float value )
{
	this->_value = roundf(value * (1 << Fixed::_fraction));
}

Fixed::Fixed( Fixed const & src )
{
	*this = src;
}

Fixed::~Fixed( void )
{
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

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	this->_value = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator< ( Fixed const & rhs ) const
{
	return this->_value < rhs._value;
}

bool	Fixed::operator> ( Fixed const & rhs ) const
{
	return rhs < *this;
}

bool	Fixed::operator<=( Fixed const & rhs ) const
{
	return !(*this > rhs);
}

bool	Fixed::operator>=( Fixed const & rhs ) const
{
	return !(*this < rhs);
}

bool	Fixed::operator==( Fixed const & rhs ) const
{
	return this->_value == rhs._value;
}

bool	Fixed::operator!=( Fixed const & rhs ) const
{
	return !(*this == rhs);
}

Fixed	Fixed::operator+( Fixed const & rhs ) const
{
	Fixed tmp;
	tmp.setRawBits(this->_value + rhs._value);
	return tmp;
}

Fixed	Fixed::operator-( Fixed const & rhs ) const
{
	Fixed tmp;
	tmp.setRawBits(this->_value - rhs._value);
	return tmp;
}

Fixed	Fixed::operator*( Fixed const & rhs ) const
{
	Fixed tmp;
	tmp.setRawBits(this->_value * rhs._value >> Fixed::_fraction);
	return tmp;
}

Fixed	Fixed::operator/( Fixed const & rhs ) const
{
	Fixed tmp;
	tmp.setRawBits((this->_value << Fixed::_fraction) / rhs._value);
	return tmp;
}

Fixed &	Fixed::operator++( void )
{
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++( int )
{
	Fixed	tmp(*this);
	operator++();
	return tmp;
}

Fixed &	Fixed::operator--( void )
{
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp(*this);
	operator--();
	return tmp;
}

Fixed &	Fixed::max( Fixed &a, Fixed &b )
{
	return a > b ? a : b;
}

Fixed const &	Fixed::max( Fixed const &a, Fixed const &b )
{
	return a > b ? a : b;
}

Fixed &	Fixed::min( Fixed &a, Fixed &b )
{
	return a < b ? a : b;
}

Fixed const &	Fixed::min( Fixed const &a, Fixed const &b )
{
	return a < b ? a : b;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i )
{
	return o << i.toFloat();
}

int		Fixed::_fraction = 8;
