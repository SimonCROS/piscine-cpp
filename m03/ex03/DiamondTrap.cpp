#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( void ) : _name("Clap") {
	std::cout << "\033[34mDiamondTrap\033[0m | " << "Default constructor called" << std::endl;
	ClapTrap::_name = this->_name + "_clap_name";
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(src), ScavTrap(src), FragTrap(src), _name(src._name)
{
	std::cout << "\033[34mDiamondTrap\033[0m | " << "Copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : _name(name)
{
	std::cout << "\033[34mDiamondTrap\033[0m | " << name << " is born" << std::endl;
	ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "\033[34mDiamondTrap\033[0m | " << this->_name << " died" << std::endl;
}

void		DiamondTrap::whoAmI( void )
{
	std::cout << "\033[34mDiamondTrap\033[0m | " << "The real name of " << this->_name << " is " << ClapTrap::_name << " and have " << this->_hitPoints << " hp, " << this->_energyPoints << " energy and " << this->_attackDamage << " of attacks damage." << std::endl;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "\033[34mDiamondTrap\033[0m | " << "Assignation operator called" << std::endl;
	this->_name = rhs._name;
	ClapTrap::operator=(rhs);
	return *this;
}
