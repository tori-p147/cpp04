#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character()
{
	_name = "";
	int i = 0;
	while (i < 4)
	{
		_inventory[i++] = nullptr;
	}
}

Character::~Character()
{
	int i = 0;
	while (i < 4)
	{
		delete _inventory[i++];
	}
}

Character::Character(std::string name)
{
	_name = name;
	int i = 0;
	while (i < 4)
	{
		_inventory[i++] = nullptr;
	}
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
	if (m == nullptr)
		return;
	int i = 0;
	while (i < 4)
	{
		if(_inventory[i] == 0)
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
