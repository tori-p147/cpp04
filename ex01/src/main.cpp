#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <array>

int	main(void)
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	Animal animal[10] = {Cat(), Cat(), Cat(), Cat(), Cat(), Dog(), Dog(), Dog(), Dog(), Dog()};
	
	
	delete j; // should not create a leak
	delete i;

	return (0);
}