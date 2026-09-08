#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		~WrongAnimal();
		
		virtual void makeSound() const;
		std::string getType() const;

	protected:
		std::string type;
};

#endif