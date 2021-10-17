#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal(src)
{
}

WrongCat::~WrongCat( void )
{
}

WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	WrongAnimal::operator=(rhs);
	return *this;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "meow" << std::endl;
}
