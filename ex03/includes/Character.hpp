#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice;
class Cure;

class Character: public ICharacter
{
	public:
		Character();
		Character(std::string name);
		~Character();
		Character(const Character &src);
		Character & operator=(const Character &src);
		AMateria* getInventory() const;
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string _name;
		AMateria* _inventory[4];
};

#endif