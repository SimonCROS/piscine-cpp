#pragma once
#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <iostream>

class Zombie
{
private:
	std::string	_name;

public:
	Zombie( std::string name );
	~Zombie();
	void	announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
