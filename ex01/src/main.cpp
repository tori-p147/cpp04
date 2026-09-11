#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <array>

int	main(void)
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	// Animal *animal;
	
	int n = 0;
	Dog myDog;
	j = &myDog;
	// while (n < 1)
	// {
	std::cout << "start copy" << std::endl;
	// Dog *dog = new Dog(myDog);
	// std::cout << myDog.getBrain() << std::endl;
	
	// }
	// Cat myCat;
	// i = &myCat;
	// while (n < 5)
	// {
	// 	animal[n] = new Cat(myCat);
	// 	n++;
	// }
	
	delete j; // should not create a leak
	delete i;
	// delete dog;
	// delete animal;
	return (0);
}