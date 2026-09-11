#include "Animal.hpp"

Animal::Animal()
{
	type = "animal";
	std::cout << "Animal constructor" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound~" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}