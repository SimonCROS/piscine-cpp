#include "ScavTrap.hpp"
#include <cmath>
#include <iostream>

ScavTrap::ScavTrap( void ) : ClapTrap() {}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src)
{
	std::cout << "ScavTrap | " << "Copy constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap | " << name << " born" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap | " << this->getName() << " died" << std::endl;
}

void		ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap | " << this->getName() << " enterred in Gate keeper mode" << std::endl;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "ScavTrap | " << "Assignation operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return *this;
}

std::ostream &	operator<<( std::ostream & o, ScavTrap const & i )
{
	return o << i.getName() << "(hp:" << i.getLife() << ",ad:" << i.getAttackDamage() << ",energy:" << i.getEnergy() << ")";
}
