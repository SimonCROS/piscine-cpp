#pragma once
#ifndef __WEAPON_H__
# define __WEAPON_H__

# include <iostream>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon( std::string type );
	~Weapon();

	std::string	getType( void ) const;
	void		setType( std::string type );
};

#endif
