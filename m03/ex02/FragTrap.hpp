#ifndef __FRAGTRAP_H__
# define __FRAGTRAP_H__

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	void		highFivesGuys( void );

	FragTrap &	operator=( FragTrap const & rhs );
};

#endif
