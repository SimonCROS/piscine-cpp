#ifndef __CAT_H__
# define __CAT_H__

# include "Animal.hpp"

class Cat : public Animal
{
private:

protected:

public:
	Cat( void );
	Cat( Cat const & src );
	virtual ~Cat( void );
	Cat &	operator=( Cat const & rhs );

	virtual void	makeSound( void ) const;
};

#endif
