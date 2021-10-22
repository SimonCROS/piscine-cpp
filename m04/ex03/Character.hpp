#ifndef __CHARACTER_H__
# define __CHARACTER_H__

# include <iostream>

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria*	inventory[4];
	std::string const	name;

	Character();

public:
	Character(std::string const & name);
	Character(Character const & src);
	virtual ~Character();
	virtual Character &	operator=(Character const & rhs);

	virtual std::string const & getName() const;

	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
