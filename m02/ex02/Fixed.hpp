#ifndef __FIXED_H__
# define __FIXED_H__

# include <iostream>

class Fixed
{
private:
	int			_value;
	static int	_fraction;

public:
	Fixed( void );
	Fixed( int value );
	Fixed( float value );
	Fixed( Fixed const & src );
	~Fixed( void );

	Fixed &	operator=( Fixed const & rhs );

	bool	operator> ( Fixed const & rhs ) const;
	bool	operator< ( Fixed const & rhs ) const;
	bool	operator>=( Fixed const & rhs ) const;
	bool	operator<=( Fixed const & rhs ) const;
	bool	operator==( Fixed const & rhs ) const;
	bool	operator!=( Fixed const & rhs ) const;

	Fixed	operator+( Fixed const & rhs ) const;
	Fixed	operator-( Fixed const & rhs ) const;
	Fixed	operator*( Fixed const & rhs ) const;
	Fixed	operator/( Fixed const & rhs ) const;

	Fixed &	operator++( void );
	Fixed	operator++( int );
	Fixed &	operator--( void );
	Fixed	operator--( int );

	int		getRawBits( void ) const;
	void	setRawBits( int raw );

	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed &			max( Fixed &a, Fixed &b );
	static Fixed const &	max( Fixed const &a, Fixed const &b );
	static Fixed &			min( Fixed &a, Fixed &b );
	static Fixed const &	min( Fixed const &a, Fixed const &b );

};

std::ostream &	operator<<( std::ostream & o, Fixed const & i );

#endif
