#ifndef __ICHARACTER_H__
# define __ICHARACTER_H__

# include <iostream>

# include "AMateria.hpp"

class Character
{
protected:
	AMateria*	inventory[4];

public:
	virtual ~Character() {}
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, Character& target);
};

#endif
