#ifndef __WRONG_ANIMAL_H__
# define __WRONG_ANIMAL_H__

# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
	WrongAnimal( std::string type );

public:
	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & src );
	~WrongAnimal( void );
	WrongAnimal &	operator=( WrongAnimal const & rhs );

	void	makeSound( void ) const;
	std::string	getType( void ) const;
};

#endif
