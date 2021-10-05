#ifndef __CLAPTRAP_H__
# define __CLAPTRAP_H__

# include <iostream>

class ClapTrap
{
protected:
	ClapTrap( std::string name, unsigned int life, unsigned int energy, unsigned int attackDamage );

	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & src );
	~ClapTrap( void );

	void	attack( std::string target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	ClapTrap &	operator=( ClapTrap const & rhs );
};

#endif
