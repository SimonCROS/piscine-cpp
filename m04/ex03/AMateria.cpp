#include "AMateria.hpp"

AMateria::AMateria() : type("none")
{
}

AMateria::AMateria(std::string const & type) : type(type)
{
}

AMateria::AMateria(AMateria const & src) : type(src.type)
{
}

AMateria::~AMateria()
{
}

AMateria &	AMateria::operator=(AMateria const & rhs)
{
	this->type = rhs.type;
	return *this;
}

std::string const &	AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* do something at " << target.getName() << " *" << std::endl;
}
