#ifndef __SCAVTRAP_H__
# define __SCAVTRAP_H__

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );

	void		attack( std::string target );
	void		guardGate( void );

	ScavTrap &	operator=( ScavTrap const & rhs );
};

#endif
