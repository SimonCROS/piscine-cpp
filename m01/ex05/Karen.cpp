#include "Karen.hpp"

Karen::Karen( void )
{
	this->_functs[0] = &Karen::debug;
	this->_functs[1] = &Karen::info;
	this->_functs[2] = &Karen::warning;
	this->_functs[3] = &Karen::error;
}

Karen::~Karen( void )
{
}

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain( std::string level )
{
	static const std::string types[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	unsigned long	i = 0;

	while (types[i] != level && i < sizeof(types))
		i++;
	if (i != sizeof(types))
		(this->*_functs[i])();
}
