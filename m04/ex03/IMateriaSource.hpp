#ifndef __IMATERIA_SOURCE_H__
# define __IMATERIA_SOURCE_H__

# include <iostream>

# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}

	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
