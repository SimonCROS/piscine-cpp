#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void ) : ClapTrap("Clap") {
	std::cout << "\033[31mScavTrap\033[0m | " << "Default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src)
{
	std::cout << "\033[31mScavTrap\033[0m | " << "Copy constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "\033[31mScavTrap\033[0m | " << this->_name << " is born" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "\033[31mScavTrap\033[0m | " << this->_name << " died" << std::endl;
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
