#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src.materias[i])
			this->materias[i] = src.materias[i]->clone();
		else
			this->materias[i] = nullptr;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->materias[i];
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs)
{
	for (int i = 0; i < 4; i++)
		delete this->materias[i];
	for (int i = 0; i < 4; i++)
	{
		if (rhs.materias[i])
			this->materias[i] = rhs.materias[i]->clone();
		else
			this->materias[i] = nullptr;
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = materia;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (this->materias[i] && this->materias[i]->getType() == type)
			return this->materias[i]->clone();
	return nullptr;
}
