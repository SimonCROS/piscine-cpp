#ifndef __POINT_H__
# define __POINT_H__

# include "Fixed.hpp"
# include <iostream>

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;

public:
	Point( void );
	Point( Point const & src );
	Point( Fixed const x, Fixed const y );
	~Point( void );

	Point &	operator=( Point const & rhs );

	Fixed const	getX( void ) const;
	Fixed const	getY( void ) const;
};

std::ostream &	operator<<( std::ostream & o, Point const & i );

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
