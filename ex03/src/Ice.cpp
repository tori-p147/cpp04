#include "Ice.hpp"

Ice::Ice()
{
	_type = "ice";
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &src)
{
	_type = src._type;
}

Ice & Ice::operator=(const Ice & src)
{
	if (this == &src)
		return *this;

	_type = src._type;
	return *this;
}

AMateria* Ice::clone() const
{
	Ice *ice = new Ice();
	return ice;
}

void Ice::use(ICharacter& target)
{
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}