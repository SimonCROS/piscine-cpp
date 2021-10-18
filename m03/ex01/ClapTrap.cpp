#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ) : _name("Clap")
{
	std::cout << "ClapTrap | " << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "ClapTrap | " << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap | " << this->_name << " is born" << std::endl;
}

ClapTrap::ClapTrap( std::string name, unsigned int life, unsigned int energy, unsigned int attackDamage ) :
_name(name), _hitPoints(life), _energyPoints(energy), _attackDamage(attackDamage)
{
	std::cout << "ClapTrap | " << this->_name << " is born" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap | " << this->_name << " died" << std::endl;
}

void	ClapTrap::attack( std::string target )
{
	if (this->_energyPoints >= this->_attackDamage)
	{
		this->_energyPoints -= this->_attackDamage;
		std::cout << "ClapTrap | " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap | " << "Not enough energy" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints >= amount)
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap | " << this->_name << " takes " << amount << " damages" << std::endl;
	}
	else
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap | " << this->_name << " is dead" << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	this->_hitPoints += amount;
	std::cout << "ClapTrap | " << this->_name << " was treated from " << amount << " hp" << std::endl;
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
