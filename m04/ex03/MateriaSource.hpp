#ifndef __MATERIA_SOURCE_H__
# define __MATERIA_SOURCE_H__

# include <iostream>

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	materias[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	virtual ~MateriaSource();
	virtual MateriaSource &	operator=(MateriaSource const & rhs);

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif
