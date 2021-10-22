#ifndef __CURE_H__
# define __CURE_H__

# include <iostream>

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const & src);
	virtual ~Cure();
	virtual Cure &	operator=(Cure const & rhs);

	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
};

#endif
