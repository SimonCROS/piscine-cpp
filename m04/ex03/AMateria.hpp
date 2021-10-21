#ifndef __AMATERIA_H__
# define __AMATERIA_H__

# include <iostream>

# include "ICharacter.hpp"
# include "IMateriaSource.hpp"

class AMateria
{
protected:
	std::string	_type;

public:
	AMateria(std::string const & type);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
