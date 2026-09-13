#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Materia constructor" << std::endl;
	_stored[4] = nullptr;
}

MateriaSource::~MateriaSource()
{
	std::cout << "Materia destructor" << std::endl;
	int i = 0;
	while (i < 4)
	{
		delete _stored[i];
	}
}

AMateria* MateriaSource::getStored() const
{
	return *_stored;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int i = 0;
	while (i < 4)
	{
		printf("learn materia\n");
		if (_stored[i] && _stored[i] == nullptr)
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
		printf("type null");
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
