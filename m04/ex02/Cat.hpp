#ifndef __CAT_H__
# define __CAT_H__

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*brain;

protected:

public:
	Cat( void );
	Cat( Cat const & src );
	virtual ~Cat( void );
	virtual Cat &	operator=( Cat const & rhs );

	Brain &			getBrain( void ) const;
	virtual void	makeSound( void ) const;
};

#endif
