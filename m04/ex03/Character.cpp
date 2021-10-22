#include "Character.hpp"

Character::Character() : name("none")
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::Character(std::string const & name) : name(name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::Character(Character const & src) : name(src.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (src.inventory[i])
			this->inventory[i] = src.inventory[i]->clone();
		else
			this->inventory[i] = nullptr;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

Character &	Character::operator=(Character const & rhs)
{
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
	for (int i = 0; i < 4; i++)
	{
		if (rhs.inventory[i])
			this->inventory[i] = rhs.inventory[i]->clone();
		else
			this->inventory[i] = nullptr;
	}
	return *this;
}

std::string const &	Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	this->inventory[idx] = nullptr;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (!this->inventory[idx])
		return ;
	this->inventory[idx]->use(target);
}
