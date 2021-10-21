#include "Character.hpp"

Character::Character(std::string const & type) : _type(type)
{
}

std::string const &	Character::getType() const
{
	return this->_type;
}

void	Character::use(ICharacter& character)
{
	character.equip(this);
}
