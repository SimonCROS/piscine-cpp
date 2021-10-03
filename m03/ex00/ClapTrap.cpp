#include "ClapTrap.hpp"
#include <cmath>
#include <iostream>

ClapTrap::ClapTrap( void ) {}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "ClapTrap | " << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap | " << this->getName() << " born" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap | " << this->getName() << " died" << std::endl;
}

void	ClapTrap::attack( std::string target )
{
	if (this->_energyPoints >= this->_attackDamage)
	{
		this->_energyPoints -= this->_attackDamage;
		std::cout << "ClapTrap | " << this->getName() << " attack " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap | " << "Not enough energy" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints >= amount)
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap | " << this->getName() << " take " << amount << " damages" << std::endl;
	}
	else
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap | " << this->getName() << " is dead" << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	this->_hitPoints += amount;
	std::cout << "ClapTrap | " << this->getName() << " was treated from " << amount << " hp" << std::endl;
}

std::string		ClapTrap::getName() const
{
	return this->_name;
}

unsigned int	ClapTrap::getLife() const
{
	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergy() const
{
	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return this->_attackDamage;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "ClapTrap | " << "Assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

std::ostream &	operator<<( std::ostream & o, ClapTrap const & i )
{
	return o << i.getName() << "(hp:" << i.getLife() << ",ad:" << i.getAttackDamage() << ",energy:" << i.getEnergy() << ")";
}
