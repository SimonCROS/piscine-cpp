#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const & src) : AMateria(src)
{
}

Ice::~Ice()
{
}

Ice &	Ice::operator=(Ice const & rhs)
{
	AMateria::operator=(rhs);
	return *this;
}

Ice*	Ice::clone() const
{
	Ice* copy = new Ice();

	*copy = *this;
	return (copy);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
