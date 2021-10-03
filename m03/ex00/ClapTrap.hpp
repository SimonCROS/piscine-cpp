#ifndef __CLAPTRAP_H__
# define __CLAPTRAP_H__

# include <iostream>

class ClapTrap
{
private:
	ClapTrap( void );

	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & src );
	~ClapTrap( void );

	void	attack( std::string target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	std::string		getName() const;
	unsigned int	getLife() const;
	unsigned int	getEnergy() const;
	unsigned int	getAttackDamage() const;

	ClapTrap &	operator=( ClapTrap const & rhs );
};

std::ostream &	operator<<( std::ostream & o, ClapTrap const & i );

#endif
