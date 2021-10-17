#include "Animal.hpp"

Animal::Animal( void ) : type("none")
{
}

Animal::Animal( Animal const & src ) : type(src.type)
{
}

Animal::Animal( std::string type ) : type(type)
{
}

Animal::~Animal( void )
{
}

Animal &	Animal::operator=( Animal const & rhs )
{
	this->type = rhs.type;
	return *this;
}

void	Animal::makeSound( void ) const
{
	std::cout << "[...]" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return this->type;
}
