#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	int i = 0;
	while (i < 4)
		_stored[i++] = nullptr;
}

MateriaSource::~MateriaSource()
{
	int i = 0;
	while (i < 4)
	{
		delete _stored[i++];
	}
}

AMateria* MateriaSource::getStored() const
{
	return *_stored;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (materia == nullptr)
		return;
	int i = 0;
	while (i < 4)
	{
		if (_stored[i] == nullptr)
		{
			_stored[i] = materia;
			break;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *materia;
	bool isKnownMateria = false;
	int i = 0;
	while (i < 4)
	{
		if (_stored[i] && _stored[i]->getType() == type)
			isKnownMateria = true;
		i++;
	}
	if (isKnownMateria)
	{
		if (type == "ice")
			 return materia = new Ice();
		else if (type == "cure")
			return materia = new Cure();
	}
	return nullptr;
}
