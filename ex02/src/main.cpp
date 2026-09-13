#include <AAnimal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <array>

int	main(void)
{
	int size = 10;
	const AAnimal *animal[size];
	
	int n = 0;
	
	while (n < size)
	{
		if (n < size / 2)
		{
			animal[n] = new Dog();
			animal[n]->makeSound();
			n++;
		}
		if (n >= size / 2)
		{
			animal[n] = new Cat();
			animal[n]->makeSound();
			n++;
		}
	}
	n = 0;
	while (n < size) {
		delete animal[n];
		animal[n] = nullptr;
		n++;
	}
	return (0);
}