#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void ) : ClapTrap("Clap", 100, 50, 20) {
	std::cout << "\033[31mScavTrap\033[0m | " << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src)
{
	std::cout << "\033[31mScavTrap\033[0m | " << "Copy constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "\033[31mScavTrap\033[0m | " << this->_name << " is born" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "\033[31mScavTrap\033[0m | " << this->_name << " died" << std::endl;
}

void		ScavTrap::attack(std::string target)
{
	if (this->_energyPoints >= this->_attackDamage)
	{
		this->_energyPoints -= this->_attackDamage;
		std::cout << "\033[31mScavTrap\033[0m | " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "\033[31mScavTrap\033[0m | " << "Not enough energy" << std::endl;
}

void		ScavTrap::guardGate( void )
{
	std::cout << "\033[31mScavTrap\033[0m | " << this->_name << " enterred in Gate keeper mode" << std::endl;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "\033[31mScavTrap\033[0m | " << "Assignation operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return *this;
}
