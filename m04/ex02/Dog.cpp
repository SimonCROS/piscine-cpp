#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << maketext("Dog", COLOR_MAGENTA, "") << maketext(" ↑", COLOR_GREEN, TEXT_BOLD) << std::endl;
	this->brain = new Brain();
}

Dog::Dog( Dog const & src ) : Animal(src)
{
	std::cout << maketext("Dog", COLOR_MAGENTA, "") << maketext(" ↑", COLOR_GREEN, TEXT_BOLD) << std::endl;
	this->brain = new Brain(*src.brain);
}

Dog::~Dog( void )
{
	std::cout << maketext("Dog", COLOR_MAGENTA, "") << maketext(" ↓", COLOR_RED, TEXT_BOLD) << std::endl;
	delete this->brain;
}

Dog &	Dog::operator=( Dog const & rhs )
{
	*this->brain = *rhs.brain;
	Animal::operator=(rhs);
	return *this;
}

Brain &	Dog::getBrain( void ) const
{
	return *this->brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << "bark" << std::endl;
}
