#include "Cure.hpp"

Cure::Cure()
{
	_type = "cure";
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &src)
{
	_type = src._type;
}

Cure & Cure::operator=(const Cure & src)
{
	if (this == &src)
		return *this;

	_type = src._type;
	return *this;
}

AMateria* Cure::clone() const
{
	Cure *cure = new Cure();
	return cure;
}

void Cure::use(ICharacter& target)
{
	std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
}