#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "\033[34mDiamondTrap\033[0m | " << "Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "\033[34mDiamondTrap\033[0m | " << "Copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "\033[34mDiamondTrap\033[0m | " << name << " is born" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "\033[34mDiamondTrap\033[0m | " << this->_name << " died" << std::endl;
}

void		DiamondTrap::whoAmI( void )
{
	std::cout << "\033[34mDiamondTrap\033[0m | " << "The real name of " << this->_name << " is " << ClapTrap::_name << " and have " << this->_hitPoints << " hp, " << this->_energyPoints << " energy and " << this->_attackDamage << " of attack damage." << std::endl;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "\033[34mDiamondTrap\033[0m | " << "Assignation operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return *this;
}
