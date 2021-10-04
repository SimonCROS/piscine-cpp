#include "DiamondTrap.hpp"
#include <cmath>
#include <iostream>

DiamondTrap::DiamondTrap( void ) : ClapTrap(), FragTrap(), ScavTrap() {}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	std::cout << "DiamondTrap | " << "Copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name", 100, 100, 30), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap | " << name << " born" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap | " << this->getName() << " died" << std::endl;
}

void		DiamondTrap::whoAmI( void )
{
	std::cout << this->_name << " " << std::endl;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "DiamondTrap | " << "Assignation operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return *this;
}

std::ostream &	operator<<( std::ostream & o, DiamondTrap const & i )
{
	return o << i.getName() << "(hp:" << i.getLife() << ",ad:" << i.getAttackDamage() << ",energy:" << i.getEnergy() << ")";
}
