#ifndef __WRONG_CAT_H__
# define __WRONG_CAT_H__

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

protected:

public:
	WrongCat( void );
	WrongCat( WrongCat const & src );
	~WrongCat( void );
	WrongCat &	operator=( WrongCat const & rhs );

	void	makeSound( void ) const;
};

#endif
