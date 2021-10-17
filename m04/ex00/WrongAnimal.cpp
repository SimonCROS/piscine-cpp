#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("none")
{
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) : type(src.type)
{
}

WrongAnimal::WrongAnimal( std::string type ) : type(type)
{
}

WrongAnimal::~WrongAnimal( void )
{
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	this->type = rhs.type;
	return *this;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "[...]" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return this->type;
}
