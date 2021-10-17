#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
}

Dog::Dog( Dog const & src ) : Animal(src)
{
}

Dog::~Dog( void )
{
}

Dog &	Dog::operator=( Dog const & rhs )
{
	Animal::operator=(rhs);
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "bark" << std::endl;
}
