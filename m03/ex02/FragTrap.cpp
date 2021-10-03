#include "FragTrap.hpp"
#include <cmath>
#include <iostream>

FragTrap::FragTrap( void ) : ClapTrap() {}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src)
{
	std::cout << "FragTrap | " << "Copy constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap | " << this->getName() << " born" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap | " << this->getName() << " died" << std::endl;
}

void		FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap | " << this->getName() << " say \"high fives guys !\"" << std::endl;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "FragTrap | " << "Assignation operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return *this;
}

std::ostream &	operator<<( std::ostream & o, FragTrap const & i )
{
	return o << i.getName() << "(hp:" << i.getLife() << ",ad:" << i.getAttackDamage() << ",energy:" << i.getEnergy() << ")";
}
