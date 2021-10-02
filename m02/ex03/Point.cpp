#include "Point.hpp"
#include <iostream>

Point::Point( void ) : _x(Fixed()), _y(Fixed())
{
}

Point::Point( Point const & src ) : _x(src._x), _y(src._y)
{
}

Point::Point( Fixed const x, Fixed const y ) : _x(x), _y(y)
{
}

Point::~Point( void )
{
}

Point &	Point::operator=( Point const & rhs )
{
	(void)rhs;
	return *this;
}

Fixed const	Point::getX( void ) const
{
	return this->_x;
}

Fixed const	Point::getY( void ) const
{
	return this->_y;
}

std::ostream &	operator<<( std::ostream & o, Point const & i )
{
	return o << i.getX().toFloat() << "," << i.getY().toFloat();
}
