#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor" << std::endl;
	type = "Cat";
	attribute = new Brain();
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copy constructor" << std::endl;
	type = copy.getType();
	attribute = new Brain(*copy.getBrain());
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