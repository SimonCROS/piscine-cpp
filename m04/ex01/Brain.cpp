#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << maketext("Brain", COLOR_CYAN, "") << maketext(" ↑", COLOR_GREEN, TEXT_BOLD) << std::endl;
}

Brain::Brain( Brain const & src )
{
	std::cout << maketext("Brain", COLOR_CYAN, "") << maketext(" ↑", COLOR_GREEN, TEXT_BOLD) << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
}

Brain::~Brain( void )
{
	std::cout << maketext("Brain", COLOR_CYAN, "") << maketext(" ↓", COLOR_RED, TEXT_BOLD) << std::endl;
}

Brain &	Brain::operator=( Brain const & rhs )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

void	Brain::setIdea( unsigned short index, std::string idea )
{
	if (index < 100)
		this->ideas[index] = idea;
}

std::string	Brain::getIdea( unsigned short index ) const
{
	if (index < 100)
		return this->ideas[index];
	return "";
}
