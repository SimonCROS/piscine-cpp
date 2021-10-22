#ifndef __ICE_H__
# define __ICE_H__

# include <iostream>

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const & src);
	virtual ~Ice();
	virtual Ice &	operator=(Ice const & rhs);

	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};

#endif
