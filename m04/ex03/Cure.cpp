#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const & src) : AMateria(src)
{
}

Cure::~Cure()
{
}

Cure &	Cure::operator=(Cure const & rhs)
{
	AMateria::operator=(rhs);
	return *this;
}

Cure*	Cure::clone() const
{
	Cure* copy = new Cure();

	*copy = *this;
	return (copy);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
