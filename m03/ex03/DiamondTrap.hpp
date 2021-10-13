#ifndef __DIAMONDTRAP_H__
# define __DIAMONDTRAP_H__

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string		_name;

public:
	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap const & src );
	~DiamondTrap( void );

	void	whoAmI( void );
	using	ScavTrap::attack;

	DiamondTrap &	operator=( DiamondTrap const & rhs );
};

#endif
