#ifndef __FIXED_H__
# define __FIXED_H__

# include <iostream>

class Fixed
{
private:
	int			_value;
	static const int	_fraction = 8;

public:
	Fixed( void );
	Fixed( int value );
	Fixed( float value );
	Fixed( Fixed const & src );
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int raw );

	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed &	operator=( Fixed const & rhs );
};

std::ostream &	operator<<( std::ostream & o, Fixed const & i );

#endif
