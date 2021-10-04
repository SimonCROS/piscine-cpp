#ifndef __DIAMONDTRAP_H__
# define __DIAMONDTRAP_H__

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	DiamondTrap( void );

	std::string	name;

public:
	DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap const & src );
	~DiamondTrap( void );

	void	whoAmI( void );

	DiamondTrap &	operator=( DiamondTrap const & rhs );
};

std::ostream &	operator<<( std::ostream & o, DiamondTrap const & i );

#endif
