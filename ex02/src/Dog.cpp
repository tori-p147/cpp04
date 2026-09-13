#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor" << std::endl;
	type = "Dog";
	attribute = new Brain();
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor" << std::endl;
	type = src.type;
	if (src.attribute)
		attribute = new Brain(*src.attribute);
	std::cout << "Dog copy constructor end" << std::endl;
}

Dog & Dog::operator=(const Dog &src)
{
	std::cout << "Dog assign operator" << std::endl;
	if (this == &src)
		return *this;
	delete attribute;
	if (src.attribute)
		attribute = new Brain(*src.attribute);
	type = src.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete attribute;
	attribute = nullptr;
}

void Dog::makeSound() const
{
	std::cout << "Woof~" << std::endl;
}

Brain* Dog::getBrain() const
{
	return attribute;
}
