#ifndef __AMATERIA_H__
# define __AMATERIA_H__

# include <iostream>

class AMateria;
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	type;
	AMateria();

public:
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	virtual ~AMateria();
	virtual AMateria &	operator=(AMateria const & rhs);

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
