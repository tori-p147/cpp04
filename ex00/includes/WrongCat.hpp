#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

# include <WrongAnimal.hpp>
# include <iostream>
# include <string>

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		void makeSound() const;
	
	protected:
		std::string type;
};

#endif