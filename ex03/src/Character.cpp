#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character()
{
	std::cout << "Character constructor" << std::endl;
	_name = "";
	// int i = 0;
	// while (i < 4)
	// {
	// 	_inventory[i] = nullptr;
	// 	i++;
	// }
}

Character::~Character()
{
	std::cout << "Character destructor" << std::endl;
	int i = 0;
	while (i < 4)
	{
		delete _inventory[i];
		i++;
	}
}

Character::Character(std::string name)
{
	std::cout << "Character name constructor" << std::endl;
	_name = name;
}

Character::Character(const Character &src)
{
	_name = src._name;
	int i = 0;
	while (i < 4)
	{
		_inventory[i] = src._inventory[i];
		i++;
	}
}

Character & Character::operator=(const Character &src)
{
	if (this == &src)
		return *this;
	
	_name = src._name;
	int i = 0;
	while (i < 4)
	{
		_inventory[i] = src._inventory[i];
		i++;
	}
	return *this;
}

AMateria* Character::getInventory() const
{
	return *_inventory;
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4)
	{
		printf("equip\n");
		if(_inventory[i] == nullptr)
		{
			_inventory[i] = m;
			break;
		}
		i++;
	}
}


void Character::unequip(int idx)
{
	_inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx] && _inventory[idx]->getType() == "ice")
	{
		Ice ice;
		ice.use(target);
	}
	else if (_inventory[idx] && _inventory[idx]->getType() == "cure")
	{
		Cure cure;
		cure.use(target);
	}
}
