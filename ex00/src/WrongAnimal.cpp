#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "wrong animal";
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound~" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}