#ifndef __ANIMAL_H__
# define __ANIMAL_H__

# include <iostream>

class Animal
{
protected:
	std::string	type;
	Animal( std::string type );

public:
	Animal( void );
	Animal( Animal const & src );
	virtual ~Animal( void );
	Animal &	operator=( Animal const & rhs );

	virtual void	makeSound( void ) const;
	std::string	getType( void ) const;
};

#endif
