#ifndef __ANIMAL_H__
# define __ANIMAL_H__

# include "utils.hpp"

class Animal
{
protected:
	std::string	type;
	Animal( std::string type );

public:
	Animal( void );
	Animal( Animal const & src );
	virtual ~Animal( void );
	virtual Animal &	operator=( Animal const & rhs );

	virtual void	makeSound( void ) const = 0;
	std::string	getType( void ) const;
};

#endif
