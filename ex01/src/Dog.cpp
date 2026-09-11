#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor" << std::endl;
	type = "Dog";
	attribute = new Brain();
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy constructor" << std::endl;
	type = copy.getType();
	// Brain* b = copy.getBrain();
	// attribute = new Brain(*b);
	attribute = new Brain(*copy.getBrain());
	std::cout << "Dog copy constructor end" << std::endl;
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
	std::cout << "brain return" << std::endl;
	return attribute;
}
