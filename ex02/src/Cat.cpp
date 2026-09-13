#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor" << std::endl;
	type = "Cat";
	attribute = new Brain();
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor" << std::endl;
	type = src.type;
	if (src.attribute)
		attribute = new Brain(*src.attribute);
	std::cout << "Cat copy constructor end" << std::endl;
}

Cat & Cat::operator=(const Cat &src)
{
	std::cout << "Cat assign operator" << std::endl;
	if (this == &src)
		return *this;
	delete attribute;
	if (src.attribute)
		attribute = new Brain(*src.attribute);
	type = src.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete attribute;
	attribute = nullptr;
}

void Cat::makeSound() const
{
	std::cout << "Meow~" << std::endl;
}

Brain* Cat::getBrain() const
{
	return attribute;
}