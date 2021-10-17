#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
}

Cat::Cat( Cat const & src ) : Animal(src)
{
}

Cat::~Cat( void )
{
}

Cat &	Cat::operator=( Cat const & rhs )
{
	Animal::operator=(rhs);
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "meow" << std::endl;
}
