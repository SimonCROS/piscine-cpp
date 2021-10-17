#include "Animal.hpp"

Animal::Animal( void ) : type("none")
{
	std::cout << maketext("Animal", COLOR_YELLOW, "") << maketext(" ↑", COLOR_GREEN, TEXT_BOLD) << std::endl;
}

Animal::Animal( Animal const & src ) : type(src.type)
{
	std::cout << maketext("Animal", COLOR_YELLOW, "") << maketext(" ↑", COLOR_GREEN, TEXT_BOLD) << std::endl;
}

Animal::Animal( std::string type ) : type(type)
{
	std::cout << maketext("Animal", COLOR_YELLOW, "") << maketext(" ↑", COLOR_GREEN, TEXT_BOLD) << std::endl;
}

Animal::~Animal( void )
{
	std::cout << maketext("Animal", COLOR_YELLOW, "") << maketext(" ↓", COLOR_RED, TEXT_BOLD) << std::endl;
}

Animal &	Animal::operator=( Animal const & rhs )
{
	this->type = rhs.type;
	return *this;
}

std::string	Animal::getType( void ) const
{
	return this->type;
}
