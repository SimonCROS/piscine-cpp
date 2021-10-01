#ifndef __FIXED_H__
# define __FIXED_H__

class Fixed
{
private:
	int			_value;
	static int	_fraction;

public:
	Fixed( void );
	Fixed( Fixed const & src );
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int raw );

	Fixed &	operator=( Fixed const & rhs );
};

#endif
