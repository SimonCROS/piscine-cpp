#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( void ) : ClapTrap("Frag", 100, 100, 30)
{
	std::cout << "\033[32mFragTrap\033[0m | " << "Default constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src)
{
	std::cout << "\033[32mFragTrap\033[0m | " << "Copy constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "\033[32mFragTrap\033[0m | " << this->_name << " is born" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "\033[32mFragTrap\033[0m | " << this->_name << " died" << std::endl;
}

void		FragTrap::highFivesGuys( void )
{
	std::cout << "\033[32mFragTrap\033[0m | " << this->_name << " say \"high fives guys !\"" << std::endl;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "\033[32mFragTrap\033[0m | " << "Assignation operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return *this;
}
