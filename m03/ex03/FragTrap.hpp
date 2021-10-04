#ifndef __FRAGTRAP_H__
# define __FRAGTRAP_H__

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public virtual ClapTrap
{
protected:
	FragTrap( void );

public:
	FragTrap( std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	void		highFivesGuys( void );

	FragTrap &	operator=( FragTrap const & rhs );
};

std::ostream &	operator<<( std::ostream & o, FragTrap const & i );

#endif
