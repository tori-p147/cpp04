#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria constructor" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria type constructor" << std::endl;
	_type = type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor" << std::endl;
}

std::string const &AMateria::getType() const
{
	return _type;
}