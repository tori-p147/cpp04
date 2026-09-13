#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* getStored() const;
		AMateria* createMateria(std::string const & type);

	private:
		AMateria* _stored[4];
};

#endif