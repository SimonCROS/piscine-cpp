#ifndef __DOG_H__
# define __DOG_H__

# include "Animal.hpp"

class Dog : public Animal
{
private:

protected:
	std::string	type;

public:
	Dog( void );
	Dog( Dog const & src );
	virtual ~Dog( void );
	Dog &	operator=( Dog const & rhs );

	virtual void	makeSound( void ) const;
};

#endif
