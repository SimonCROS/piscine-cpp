#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << maketext("Cat", COLOR_BLUE, "") << maketext(" ↑", COLOR_GREEN, TEXT_BOLD) << std::endl;
	this->brain = new Brain();
}

Cat::Cat( Cat const & src ) : Animal(src)
{
	std::cout << maketext("Cat", COLOR_BLUE, "") << maketext(" ↑", COLOR_GREEN, TEXT_BOLD) << std::endl;
	this->brain = new Brain(*src.brain);
}

Cat::~Cat( void )
{
	std::cout << maketext("Cat", COLOR_BLUE, "") << maketext(" ↓", COLOR_RED, TEXT_BOLD) << std::endl;
	delete this->brain;
}

Cat &	Cat::operator=( Cat const & rhs )
{
	*this->brain = *rhs.brain;
	Animal::operator=(rhs);
	return *this;
}

Brain &	Cat::getBrain( void ) const
{
	return *this->brain;
}

void	Cat::makeSound( void ) const
{
	std::cout << "meow" << std::endl;
}
