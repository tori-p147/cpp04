#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "animal";
	std::cout << "AAnimal constructor" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "AAnimal sound~" << std::endl;
}

std::string AAnimal::getType() const
{
	return type;
}