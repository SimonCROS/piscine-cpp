#ifndef __DOG_H__
# define __DOG_H__

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*brain;

protected:

public:
	Dog( void );
	Dog( Dog const & src );
	virtual ~Dog( void );
	virtual Dog &	operator=( Dog const & rhs );

	Brain &			getBrain( void ) const;
	virtual void	makeSound( void ) const;
};

#endif
