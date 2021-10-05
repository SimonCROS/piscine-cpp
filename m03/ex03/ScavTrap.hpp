#ifndef __SCAVTRAP_H__
# define __SCAVTRAP_H__

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public virtual ClapTrap
{
private:

public:
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );

	void		guardGate( void );

	ScavTrap &	operator=( ScavTrap const & rhs );
};

#endif
